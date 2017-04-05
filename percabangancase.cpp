#include <iostream>
using namespace std;

int main () {

int x;
cout <<"masukan angka 1-7 untuk mengetahuin hari :";
cin >>x;
switch (x){

case 1: cout <<"hari ke "<<x<<":senin";
break;
case 2: cout <<"hari ke "<<x<<":selasa";
break;
case 3: cout <<"hari ke "<<x<<": rabu";
break;
case 4: cout <<"hari le "<<x<<":kamis";
break;
case 5: cout <<"hari ke "<<x<<":Jum'at";
break;
case 6: cout <<"hari ke "<<x<<":sabtu";
break;
case 7: cout <<"hari ke "<<x<<"minggu";
break;
default: cout <<"tidak ada hari "<<x;}
return 0;
}