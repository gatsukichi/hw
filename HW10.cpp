#include<stdio.h>

int main()
{
	int input1, input2;

	printf("�ΰ��� ������ �Է��Ͻÿ� :");
	scanf("%d %d", &input1, &input2);

	printf("%d + %d = %d\n", input1, input2, input1 + input2);
	printf("%d - %d = %d\n", input1, input2, input1 - input2);
	printf("%d * %d = %d\n", input1, input2, input1 * input2);
	printf("%d / %d = %.2lf\n", input1, input2, (double)input1 / (double)input2);

	return 0;
	



}