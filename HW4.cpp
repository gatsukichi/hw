#include<stdio.h>


int main()
{
	double day, hour, min, sec, year = 365.2422  ;
	//int day, hour, min;
	
	day = (int)year;
	hour = (int)((year - day) * 24.0);
	min = (int)((((year - day) * 24.0) - hour) * 60);
	sec = (((((year - day) * 24.0) - hour) * 60) - min) * 60;

	printf("%lg일은 %lg일 %lg시간 %lg분 %lg초 입니다.",year,day,hour,min,sec);

	return 0;


}