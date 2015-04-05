#ifdef STANDARD
   /* STANDARD is defined, don't use any mysql functions */
   #include <stdlib.h>
   #include <stdio.h>
   #include <string.h>
   #ifdef __WIN__
   typedef unsigned __int64 ulonglong;/* Microsofts 64 bit types */
   typedef __int64 longlong;
   #else
   typedef unsigned long long ulonglong;
   typedef long long longlong;
   #endif /*__WIN__*/
   #else
   #include <my_global.h>
   #include <my_sys.h>
   #if defined(MYSQL_SERVER)
   #include <m_string.h>/* To get strmov() */
   #else
   /* when compiled as standalone */
   #include <string.h>
   #define strmov(a,b) stpcpy(a,b)
   #define bzero(a,b) memset(a,0,b)
   #define memcpy_fixed(a,b,c) memcpy(a,b,c)
   #endif
   #endif
   #include <mysql.h>
   #include <ctype.h>
   
   #ifdef HAVE_DLOPEN
   
   #if !defined(HAVE_GETHOSTBYADDR_R) || !defined(HAVE_SOLARIS_STYLE_GETHOST)
   static pthread_mutex_t LOCK_hostname;
   #endif                                                                     
   
	my_bool seconds_conversion_udf_init(UDF_INIT *initid, UDF_ARGS *args, char *message);
   void seconds_conversion_udf_deinit(UDF_INIT *initid __attribute__((unused)));
   char *seconds_conversion_udf(UDF_INIT *initid, UDF_ARGS *args,char *result, unsigned long *length,char *is_null, char *error);
                                                               
   
   my_bool seconds_conversion_udf_init(UDF_INIT *initid, UDF_ARGS *args, char *message)
   {
   	if(!(args->arg_count == 1)) {
         strcpy(message,"There can only be one argument for this function.");
       	return 1;
     	}

   	return 0;
   }                                                              
   
   void seconds_conversion_udf_deinit(UDF_INIT *initid __attribute__((unused)))
   {

   }                                                                      
   
  	char *seconds_conversion_udf(UDF_INIT *initid, UDF_ARGS *args, char *result, unsigned long *length, char *is_null, char *error)
	{
		int seconds = *((int *)(args->args[0]));
      char str[255];

      if (seconds < 60){
         snprintf(str, sizeof(str), "00:00:%d",seconds);
      }
      else {
         int minutes = seconds/60;

         if (minutes < 60) {
            seconds = seconds-minutes*60;

            snprintf(str, sizeof(str), "00:%d:%d", minutes, seconds);
         }
         else {
            int hours = minutes/60;
            minutes = minutes-hours*60;
            seconds = seconds-((hours*60*60)+(minutes*60));

            snprintf(str, sizeof(str), "%d:%d:%d", hours, minutes, seconds);
         }
      }
      
      memcpy(result, str, strlen(str));
      (*length) = strlen(str);
		return result;
	}                                                                       
   
   #endif /* HAVE_DLOPEN */