#include<stdio.h>
double inputDist();
double inputVelo();
void output(double, double, double, double);

int main()
{
	double dist, velo;   //거리,속도
	double transitTime; //주행시간
	double h, m, s;  //시,분,초;

	dist = inputDist();
	velo = inputVelo();

	transitTime = dist / velo;

	h = (int)transitTime;
	m = (int)((transitTime - h) * 60);
	s = (((transitTime - h) * 60) - m) * 60;


	output(dist,h,m,s);

	return 0;
}


double inputDist()
{
	double dist;

	printf("거리를 입력하시오(km단위) : ");
	scanf("%lf", &dist);

	return dist;
}
double inputVelo()
{
	double velo;

	printf("시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &velo);

	return velo;
}
void output(double dist, double h,double m,double s)
{
	printf("%.2lfkm => %lg 시간 %lg분 %.3lf초 소요됨", dist, h, m, s);

	return;
}