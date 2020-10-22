#include<stdio.h>

int main()
{
	char word[20];
	int it;
	double db;
	printf("문자열 입력: ");
	scanf_s("%s", word, 10);

	printf("정수 입력: ");
	scanf_s("%d", &it, 4); // int의 byte수를 적어주면 됨!
	//scanf_s("%d",&it) 도 가능!
	//WHY? int나 double이나 byte수는 전세계공통이라 굳이 안적어도 됨. word는 사람마다 다르니까 작성

	printf("실수 입력 : ");
	scanf_s("%lf", &db, 8); // db의 byte는? 


	printf("%s / %d / %lf", word, it, db);

}