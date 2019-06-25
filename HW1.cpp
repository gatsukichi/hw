#include<stdio.h>
void printAge(int);       // 리턴은 보이드 / 전달인자는 int형
void printHeight(double); // 리턴은 보이드 / 전달인자는 double형
int main()
{
	char name[20] = "신승길";
	int age = 25;
	double height = 179.9;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("나이 : %d cm \n", age);
	//void 라서 리턴 필요x
}
void printHeight(double height)
{
	printf("몸무게 : %.2lf kg \n",height);  //소수점 2자리까지 표시
	//void 라서 리턴 필요x
}