# comp4115-pa3
Part 1

Function:
create function exp1(num1 int, num2 int) returns int return num1*num2;

Query:
select exp1(20,34);

Result:
+-------------+
| exp1(20,34) |
+-------------+
|         680 |
+-------------+
1 row in set (0.00 sec)

Part 2

mysql> select area_circle_udf(3.243);
+------------------------+
| area_circle_udf(3.243) |
+------------------------+
|                 33.040 |
+------------------------+
1 row in set (0.00 sec)

mysql> select area_circle_udf(1.2);
+----------------------+
| area_circle_udf(1.2) |
+----------------------+
|                  4.5 |
+----------------------+
1 row in set (0.00 sec)

mysql> select area_circle_udf(34.981);
+-------------------------+
| area_circle_udf(34.981) |
+-------------------------+
|                3844.274 |
+-------------------------+
1 row in set (0.00 sec)

mysql> select area_circle_udf(340.0);
+------------------------+
| area_circle_udf(340.0) |
+------------------------+
|               363168.1 |
+------------------------+
1 row in set (0.00 sec)

mysql> select seconds_conversion_udf(3661);
+------------------------------+
| seconds_conversion_udf(3661) |
+------------------------------+
| 1:1:1                        |
+------------------------------+
1 row in set (0.00 sec)

mysql> select seconds_conversion_udf(36609);
+-------------------------------+
| seconds_conversion_udf(36609) |
+-------------------------------+
| 10:10:9                       |
+-------------------------------+
1 row in set (0.00 sec)

mysql> select seconds_conversion_udf(36);
+----------------------------+
| seconds_conversion_udf(36) |
+----------------------------+
| 00:00:36                   |
+----------------------------+
1 row in set (0.00 sec)

mysql> select seconds_conversion_udf(61);
+----------------------------+
| seconds_conversion_udf(61) |
+----------------------------+
| 00:1:1                     |
+----------------------------+
1 row in set (0.00 sec)


Part 3

mysql> call employee_list('Bouloucos');
+---------------+-----------+
| first_name    | last_name |
+---------------+-----------+
| Cristinel     | Bouloucos |
| Vishv         | Bouloucos |
| Kazuhide      | Bouloucos |
| Oguz          | Bouloucos |
| Gennady       | Bouloucos |
| Tiina         | Bouloucos |
| Marla         | Bouloucos |
| Perry         | Bouloucos |
| Christophe    | Bouloucos |
| Koichi        | Bouloucos |
| Satoru        | Bouloucos |
| Iara          | Bouloucos |
| Marjo         | Bouloucos |
| Stamatina     | Bouloucos |
| Shichao       | Bouloucos |
| Aimee         | Bouloucos |
| Teruyuki      | Bouloucos |
| Shugo         | Bouloucos |
| Yinghua       | Bouloucos |
| Vidar         | Bouloucos |
| Stein         | Bouloucos |
| Naraig        | Bouloucos |
| Wilmer        | Bouloucos |
| Collette      | Bouloucos |
| Xiaocheng     | Bouloucos |
| Jolita        | Bouloucos |
| Krister       | Bouloucos |
| Jacqueline    | Bouloucos |
| Shaowei       | Bouloucos |
| Charlene      | Bouloucos |
| Dayanand      | Bouloucos |
| Nikolaus      | Bouloucos |
| Dinah         | Bouloucos |
| Garnet        | Bouloucos |
| Basil         | Bouloucos |
| Geoffrey      | Bouloucos |
| Nitsan        | Bouloucos |
| Shuichi       | Bouloucos |
| Mara          | Bouloucos |
| Xinglin       | Bouloucos |
| Apostol       | Bouloucos |
| Khatoun       | Bouloucos |
| Chenye        | Bouloucos |
| Peternela     | Bouloucos |
| Jinxi         | Bouloucos |
| Arnd          | Bouloucos |
| Moty          | Bouloucos |
| Shaw          | Bouloucos |
| Caolyn        | Bouloucos |
| Hauke         | Bouloucos |
| Kwan          | Bouloucos |
| Marin         | Bouloucos |
| Shahar        | Bouloucos |
| Lokesh        | Bouloucos |
| Seshu         | Bouloucos |
| Ferdinand     | Bouloucos |
| Vugranam      | Bouloucos |
| Karsten       | Bouloucos |
| Nirmal        | Bouloucos |
| Elliott       | Bouloucos |
| Piyawadee     | Bouloucos |
| Maha          | Bouloucos |
| Ohad          | Bouloucos |
| Lijia         | Bouloucos |
| Kiyotoshi     | Bouloucos |
| Barun         | Bouloucos |
| Taegyun       | Bouloucos |
| Samphel       | Bouloucos |
| Jingling      | Bouloucos |
| Hideyuki      | Bouloucos |
| Rosita        | Bouloucos |
| Hidde         | Bouloucos |
| Pintsang      | Bouloucos |
| Kendra        | Bouloucos |
| Kankanahalli  | Bouloucos |
| Tran          | Bouloucos |
| Ohad          | Bouloucos |
| Haldon        | Bouloucos |
| Hidekazu      | Bouloucos |
| Navin         | Bouloucos |
| Diederik      | Bouloucos |
| Yuchang       | Bouloucos |
| Evgueni       | Bouloucos |
| Vincent       | Bouloucos |
| Sven          | Bouloucos |
| Remco         | Bouloucos |
| Tonia         | Bouloucos |
| Kazuhide      | Bouloucos |
| Youngkon      | Bouloucos |
| Sajjan        | Bouloucos |
| Conal         | Bouloucos |
| Christoph     | Bouloucos |
| Yakkov        | Bouloucos |
| Eishiro       | Bouloucos |
| Angus         | Bouloucos |
| Georgy        | Bouloucos |
| Abdelwaheb    | Bouloucos |
| Aria          | Bouloucos |
| Jaana         | Bouloucos |
| Yechezkel     | Bouloucos |
| Muneo         | Bouloucos |
| Tetsurou      | Bouloucos |
| Chrisa        | Bouloucos |
| Lansing       | Bouloucos |
| Arve          | Bouloucos |
| Geraldo       | Bouloucos |
| Adam          | Bouloucos |
| Shaibal       | Bouloucos |
| Fusako        | Bouloucos |
| Tamiya        | Bouloucos |
| Masanao       | Bouloucos |
| Eberhardt     | Bouloucos |
| Tamiya        | Bouloucos |
| Radhia        | Bouloucos |
| Arvind        | Bouloucos |
| Bilhanan      | Bouloucos |
| Stepehn       | Bouloucos |
| Aamer         | Bouloucos |
| Gil           | Bouloucos |
| True          | Bouloucos |
| Sangeeta      | Bouloucos |
| Yishay        | Bouloucos |
| Giao          | Bouloucos |
| Fan           | Bouloucos |
| Alois         | Bouloucos |
| Adel          | Bouloucos |
| Fuqing        | Bouloucos |
| Mona          | Bouloucos |
| Gal           | Bouloucos |
| Jaihie        | Bouloucos |
| Zhonghui      | Bouloucos |
| Alair         | Bouloucos |
| Jiang         | Bouloucos |
| Boguslaw      | Bouloucos |
| Heeju         | Bouloucos |
| Martijn       | Bouloucos |
| Miyeon        | Bouloucos |
| Bernt         | Bouloucos |
| Janalee       | Bouloucos |
| Arunachalam   | Bouloucos |
| Mohit         | Bouloucos |
| Yannis        | Bouloucos |
| Soenke        | Bouloucos |
| Padma         | Bouloucos |
| Bogdan        | Bouloucos |
| Taizo         | Bouloucos |
| Masanao       | Bouloucos |
| Mads          | Bouloucos |
| Dines         | Bouloucos |
| Cheong        | Bouloucos |
| Samphel       | Bouloucos |
| Shaowen       | Bouloucos |
| Poorav        | Bouloucos |
| Krister       | Bouloucos |
| Rasiah        | Bouloucos |
| Itzchak       | Bouloucos |
| Satosi        | Bouloucos |
| Rayond        | Bouloucos |
| Tsuneo        | Bouloucos |
| Munehiko      | Bouloucos |
| Tadahiko      | Bouloucos |
| Ingemar       | Bouloucos |
| Khatoun       | Bouloucos |
| Snehasis      | Bouloucos |
| Randy         | Bouloucos |
| Chuanyi       | Bouloucos |
| Satyanarayana | Bouloucos |
| Valeri        | Bouloucos |
| Bernice       | Bouloucos |
| Makato        | Bouloucos |
| Kolar         | Bouloucos |
| Apostol       | Bouloucos |
| Faiza         | Bouloucos |
| Zissis        | Bouloucos |
| Danel         | Bouloucos |
| Temple        | Bouloucos |
| Djenana       | Bouloucos |
| Jianhui       | Bouloucos |
| Xiaoqiu       | Bouloucos |
| Palash        | Bouloucos |
| Pantung       | Bouloucos |
| Larisa        | Bouloucos |
| Chenye        | Bouloucos |
| Kristinn      | Bouloucos |
| Otmar         | Bouloucos |
| Heather       | Bouloucos |
| Kyoichi       | Bouloucos |
| Arvind        | Bouloucos |
| Mori          | Bouloucos |
| Jianhao       | Bouloucos |
| Almudena      | Bouloucos |
| Rosine        | Bouloucos |
| Percy         | Bouloucos |
| Goetz         | Bouloucos |
| Horward       | Bouloucos |
+---------------+-----------+
195 rows in set (0.19 sec)

Query OK, 0 rows affected (0.19 sec)

mysql> call employee_list('Anger');
+--------------+-----------+
| first_name   | last_name |
+--------------+-----------+
| Berni        | Anger     |
| Sumali       | Anger     |
| Leif         | Anger     |
| Pranay       | Anger     |
| Lidong       | Anger     |
| Murthy       | Anger     |
| Leif         | Anger     |
| Anoosh       | Anger     |
| Takahira     | Anger     |
| Shuky        | Anger     |
| Mohammad     | Anger     |
| Gunilla      | Anger     |
| Hitofumi     | Anger     |
| Jahangir     | Anger     |
| Manibrata    | Anger     |
| Snehasis     | Anger     |
| Satoru       | Anger     |
| Hiroyasu     | Anger     |
| Qingxiang    | Anger     |
| Barton       | Anger     |
| Gonzalo      | Anger     |
| Quingbo      | Anger     |
| Bernd        | Anger     |
| Shigehito    | Anger     |
| Taizo        | Anger     |
| Arno         | Anger     |
| Taegyun      | Anger     |
| Chrisa       | Anger     |
| Marjo        | Anger     |
| Eckart       | Anger     |
| Shmuel       | Anger     |
| Shmuel       | Anger     |
| Kiyotoshi    | Anger     |
| Boalin       | Anger     |
| Ewing        | Anger     |
| Randy        | Anger     |
| Susanne      | Anger     |
| Subhrajyoti  | Anger     |
| Suebskul     | Anger     |
| Sariel       | Anger     |
| Hidekazu     | Anger     |
| Woody        | Anger     |
| Girolamo     | Anger     |
| Kwangjo      | Anger     |
| Naftaly      | Anger     |
| Aamer        | Anger     |
| Younwoo      | Anger     |
| Sumant       | Anger     |
| Remmert      | Anger     |
| Kiyomitsu    | Anger     |
| Takushi      | Anger     |
| Yefim        | Anger     |
| Yishai       | Anger     |
| Christophe   | Anger     |
| Alselm       | Anger     |
| Amabile      | Anger     |
| Rimon        | Anger     |
| Phuoc        | Anger     |
| Katsuo       | Anger     |
| Arto         | Anger     |
| Lijie        | Anger     |
| Claudi       | Anger     |
| Mats         | Anger     |
| Guoxiang     | Anger     |
| Berto        | Anger     |
| Hsiangchu    | Anger     |
| Akhilish     | Anger     |
| Kenton       | Anger     |
| Hausi        | Anger     |
| Vojin        | Anger     |
| Alper        | Anger     |
| Seongbin     | Anger     |
| Kensei       | Anger     |
| Eckart       | Anger     |
| Takushi      | Anger     |
| Chikako      | Anger     |
| Przemyslawa  | Anger     |
| Alejandra    | Anger     |
| Bedrich      | Anger     |
| Cheong       | Anger     |
| Miquel       | Anger     |
| Along        | Anger     |
| Lein         | Anger     |
| Arvind       | Anger     |
| Brendon      | Anger     |
| Adil         | Anger     |
| Kamran       | Anger     |
| Lena         | Anger     |
| Ebru         | Anger     |
| Chaosheng    | Anger     |
| Saeko        | Anger     |
| Tesuro       | Anger     |
| Henk         | Anger     |
| Paris        | Anger     |
| Georgi       | Anger     |
| Ziyad        | Anger     |
| Khue         | Anger     |
| Aiman        | Anger     |
| Gro          | Anger     |
| Angel        | Anger     |
| Seshu        | Anger     |
| Sudhanshu    | Anger     |
| Pohua        | Anger     |
| Makato       | Anger     |
| Kwangho      | Anger     |
| Arumugam     | Anger     |
| Kirk         | Anger     |
| Saeko        | Anger     |
| Brigham      | Anger     |
| Mario        | Anger     |
| Rosalyn      | Anger     |
| Aiman        | Anger     |
| Gita         | Anger     |
| Arunachalam  | Anger     |
| Marko        | Anger     |
| Garnik       | Anger     |
| Rildo        | Anger     |
| Kwangyoen    | Anger     |
| Uta          | Anger     |
| Hironoby     | Anger     |
| Taizo        | Anger     |
| Georg        | Anger     |
| Sashi        | Anger     |
| Shaunak      | Anger     |
| Gennadi      | Anger     |
| Xiaobin      | Anger     |
| Adin         | Anger     |
| Jenwei       | Anger     |
| Wilmer       | Anger     |
| Jacqueline   | Anger     |
| Christophe   | Anger     |
| Fumitake     | Anger     |
| Stella       | Anger     |
| Dhritiman    | Anger     |
| Sachar       | Anger     |
| Mara         | Anger     |
| Heekeun      | Anger     |
| Xiadong      | Anger     |
| Zhiguo       | Anger     |
| Sadun        | Anger     |
| Margo        | Anger     |
| Lijie        | Anger     |
| Yannis       | Anger     |
| Jovan        | Anger     |
| Marek        | Anger     |
| Utz          | Anger     |
| Francesca    | Anger     |
| Jaideep      | Anger     |
| Elgin        | Anger     |
| Koichi       | Anger     |
| Giri         | Anger     |
| Geoffrey     | Anger     |
| Gunilla      | Anger     |
| Ranan        | Anger     |
| Temple       | Anger     |
| Shimshon     | Anger     |
| Ranan        | Anger     |
| Zhilian      | Anger     |
| Arco         | Anger     |
| Leandro      | Anger     |
| Berthier     | Anger     |
| Naftali      | Anger     |
| Heping       | Anger     |
| Tesuya       | Anger     |
| Dekang       | Anger     |
| Pintsang     | Anger     |
| Renny        | Anger     |
| Marla        | Anger     |
| Mart         | Anger     |
| Sumant       | Anger     |
| Yunming      | Anger     |
| Oksana       | Anger     |
| Insup        | Anger     |
| Mary         | Anger     |
| Uno          | Anger     |
| Kankanahalli | Anger     |
| Dhritiman    | Anger     |
| Arnould      | Anger     |
| Toshiko      | Anger     |
| Aruna        | Anger     |
| Xiaoqiu      | Anger     |
| Giri         | Anger     |
| Sandeepan    | Anger     |
| Yuguang      | Anger     |
| Gully        | Anger     |
| Ute          | Anger     |
| Yuichiro     | Anger     |
| Fay          | Anger     |
| Xiaoqiang    | Anger     |
| Taizo        | Anger     |
+--------------+-----------+
190 rows in set (0.19 sec)

Query OK, 0 rows affected (0.19 sec)

mysql> call employee_list('Hmelo');
+-------------+-----------+
| first_name  | last_name |
+-------------+-----------+
| Mara        | Hmelo     |
| Kolar       | Hmelo     |
| Fumiya      | Hmelo     |
| Jeong       | Hmelo     |
| Vishv       | Hmelo     |
| Niteen      | Hmelo     |
| Shuzo       | Hmelo     |
| Tiina       | Hmelo     |
| Tru         | Hmelo     |
| Krister     | Hmelo     |
| Gennadi     | Hmelo     |
| Mari        | Hmelo     |
| Houman      | Hmelo     |
| Val         | Hmelo     |
| Lalit       | Hmelo     |
| Nectarios   | Hmelo     |
| Hauke       | Hmelo     |
| Constantine | Hmelo     |
| Lidong      | Hmelo     |
| Tristan     | Hmelo     |
| Jovan       | Hmelo     |
| Maia        | Hmelo     |
| Mabry       | Hmelo     |
| Xiaocheng   | Hmelo     |
| Pramod      | Hmelo     |
| Remzi       | Hmelo     |
| Yannis      | Hmelo     |
| Mohit       | Hmelo     |
| Pranav      | Hmelo     |
| Gennady     | Hmelo     |
| Zijian      | Hmelo     |
| Ohad        | Hmelo     |
| Doohun      | Hmelo     |
| Arra        | Hmelo     |
| Hugo        | Hmelo     |
| Randy       | Hmelo     |
| Zeydy       | Hmelo     |
| Jamaludin   | Hmelo     |
| Yucai       | Hmelo     |
| Amstein     | Hmelo     |
| Karlis      | Hmelo     |
| Gianluca    | Hmelo     |
| Goa         | Hmelo     |
| Fuqing      | Hmelo     |
| Mariusz     | Hmelo     |
| Syozo       | Hmelo     |
| Marsha      | Hmelo     |
| Khalid      | Hmelo     |
| Gino        | Hmelo     |
| Premal      | Hmelo     |
| Rosella     | Hmelo     |
| Gererd      | Hmelo     |
| Steen       | Hmelo     |
| Guoxiang    | Hmelo     |
| LiMin       | Hmelo     |
| Dharmaraja  | Hmelo     |
| Palash      | Hmelo     |
| Shuzo       | Hmelo     |
| Yunming     | Hmelo     |
| Junichi     | Hmelo     |
| Masami      | Hmelo     |
| Valeri      | Hmelo     |
| Lijie       | Hmelo     |
| Giri        | Hmelo     |
| Tzu         | Hmelo     |
| Lillian     | Hmelo     |
| Gadiel      | Hmelo     |
| Anneli      | Hmelo     |
| Shiv        | Hmelo     |
| Jacqueline  | Hmelo     |
| Eishiro     | Hmelo     |
| Zdislav     | Hmelo     |
| Arun        | Hmelo     |
| Karlis      | Hmelo     |
| Sukumar     | Hmelo     |
| Kagan       | Hmelo     |
| Pramod      | Hmelo     |
| Sachar      | Hmelo     |
| Ghassan     | Hmelo     |
| Aleksander  | Hmelo     |
| Yunming     | Hmelo     |
| Berthier    | Hmelo     |
| Danel       | Hmelo     |
| Adel        | Hmelo     |
| Rayond      | Hmelo     |
| Mohua       | Hmelo     |
| Kolar       | Hmelo     |
| Jacopo      | Hmelo     |
| Kendra      | Hmelo     |
| Zhiwei      | Hmelo     |
| Tuval       | Hmelo     |
| Marsha      | Hmelo     |
| Hirochika   | Hmelo     |
| Vitali      | Hmelo     |
| Yucai       | Hmelo     |
| Leif        | Hmelo     |
| Mrinalini   | Hmelo     |
| Yonghong    | Hmelo     |
| Turgut      | Hmelo     |
| Pantung     | Hmelo     |
| Shigenori   | Hmelo     |
| Temple      | Hmelo     |
| Josyula     | Hmelo     |
| Vishv       | Hmelo     |
| Nalini      | Hmelo     |
| Gou         | Hmelo     |
| Krister     | Hmelo     |
| Atilio      | Hmelo     |
| Owen        | Hmelo     |
| Guoxiang    | Hmelo     |
| Gretta      | Hmelo     |
| Rimon       | Hmelo     |
| Rosalyn     | Hmelo     |
| Laurentiu   | Hmelo     |
| Kwan        | Hmelo     |
| Arne        | Hmelo     |
| Berthier    | Hmelo     |
| Patricio    | Hmelo     |
| Hitomi      | Hmelo     |
| Kamakshi    | Hmelo     |
| Debatosh    | Hmelo     |
| Yuuichi     | Hmelo     |
| Hatem       | Hmelo     |
| Abdelghani  | Hmelo     |
| Rayond      | Hmelo     |
| Chinho      | Hmelo     |
| Nechama     | Hmelo     |
| Irena       | Hmelo     |
| Somnath     | Hmelo     |
| Tzvetan     | Hmelo     |
| Kauko       | Hmelo     |
| Conor       | Hmelo     |
| Tsz         | Hmelo     |
| Annemarie   | Hmelo     |
| Badri       | Hmelo     |
| Mayuko      | Hmelo     |
| Tuval       | Hmelo     |
| Naftali     | Hmelo     |
| Zhongwei    | Hmelo     |
| Sumant      | Hmelo     |
| Marco       | Hmelo     |
| DAIDA       | Hmelo     |
| Yurij       | Hmelo     |
| Kazuhito    | Hmelo     |
| Kauko       | Hmelo     |
| Subir       | Hmelo     |
| Clyde       | Hmelo     |
| Mikhail     | Hmelo     |
| Michaela    | Hmelo     |
| Georgi      | Hmelo     |
| Akemi       | Hmelo     |
| Lokesh      | Hmelo     |
| Jouni       | Hmelo     |
| Radhika     | Hmelo     |
| Serif       | Hmelo     |
| Gonzalo     | Hmelo     |
| Mahendra    | Hmelo     |
| Fei         | Hmelo     |
| Ibibia      | Hmelo     |
+-------------+-----------+
159 rows in set (0.18 sec)

Query OK, 0 rows affected (0.18 sec)

mysql> call avg_salary('d001');
+-------------+
| AVG(salary) |
+-------------+
|  71913.2000 |
+-------------+
1 row in set (0.22 sec)

Query OK, 0 rows affected (0.22 sec)

mysql> call avg_salary('d002');
+-------------+
| AVG(salary) |
+-------------+
|  70489.3649 |
+-------------+
1 row in set (0.21 sec)

Query OK, 0 rows affected (0.21 sec)

mysql> call avg_salary('d004');
+-------------+
| AVG(salary) |
+-------------+
|  59605.4825 |
+-------------+
1 row in set (0.76 sec)

Query OK, 0 rows affected (0.76 sec)

+----------+
| count(*) |
+----------+
|   179973 |
+----------+
1 row in set (0.15 sec)

Query OK, 0 rows affected (0.15 sec)

mysql> call gender_count('F');
+----------+
| count(*) |
+----------+
|   120051 |
+----------+
1 row in set (0.15 sec)

Query OK, 0 rows affected (0.15 sec)