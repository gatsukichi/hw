#include<stdio.h>


int main()
{

	double h1, h2, h3, h4, h5;  // height 1~5
	double arr; // ���

		printf("- 1�� �л��� Ű�� ?");
		scanf("%lf", &h1);
		printf("- 2�� �л��� Ű�� ?");
		scanf("%lf", &h2);
		printf("- 3�� �л��� Ű�� ?");
		scanf("%lf", &h3);
		printf("- 4�� �л��� Ű�� ?");
		scanf("%lf", &h4);
		printf("- 5�� �л��� Ű�� ?");
		scanf("%lf", &h5);

	
		arr = (h1 + h2 + h3 + h4 + h5) / 5.0;

		printf("�ټ� ���� ��� Ű�� %.1lf �Դϴ�. ", arr);

	return 0;
}