#include<stdio.h>
double inputDist();
double inputVelo();
void output(double, double, double, double);

int main()
{
	double dist, velo;   //�Ÿ�,�ӵ�
	double transitTime; //����ð�
	double h, m, s;  //��,��,��;

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

	printf("�Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf("%lf", &dist);

	return dist;
}
double inputVelo()
{
	double velo;

	printf("�ü��� �Է��Ͻÿ�(km/h����) : ");
	scanf("%lf", &velo);

	return velo;
}
void output(double dist, double h,double m,double s)
{
	printf("%.2lfkm => %lg �ð� %lg�� %.3lf�� �ҿ��", dist, h, m, s);

	return;
}