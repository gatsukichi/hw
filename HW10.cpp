#include<stdio.h>

int main()
{
	int input1, input2;

	printf("두개의 정수를 입력하시오 :");
	scanf("%d %d", &input1, &input2);

	printf("%d + %d = %d\n", input1, input2, input1 + input2);
	printf("%d - %d = %d\n", input1, input2, input1 - input2);
	printf("%d * %d = %d\n", input1, input2, input1 * input2);
	printf("%d / %d = %.2lf\n", input1, input2, (double)input1 / (double)input2);

	return 0;
	



}