make:
	gcc $(mysql_config --cflags) -shared -fPIC -o area_circle_udf.so area_circle_udf.c
	gcc $(mysql_config --cflags) -shared -fPIC -o seconds_conversion_udf.so seconds_conversion_udf.c
clean:
	rm -f area_circle_udf.so seconds_conversion_udf.so