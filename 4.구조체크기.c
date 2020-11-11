#include<stdio.h>
#include<stdlib.h>

typedef struct test { char name[10]; int age; char address[15]; double weight; } Test;
//																		

int main() {

	int num;
	Test test;
	printf("%d\n", sizeof(test)); 
	//구조체의 크기는 가장 큰 '기본'자료형으로 '채워나가는 식'으로 구성된다.(기본자료형 : int double char..)
	//가장 큰 기본자료형을 생성하고, 멤버변수의 순서대로 채워 나간다. 만약 넘는다면 한번 더 생성하여 채워나감.
	//기본자료형보다 멤버변수가 크면 2개를 줌. 생성된 기본자료형의 총 합이 전체 size
	//Tip) 위에서부터 작은 자료형 순으로 배치하면 가장 최적의 공간을 잡아준다!

	printf("test의 시작주소 : %p\n", &test);
	printf("test+1의 시작주소 : %p\n", &test+1); //16진수 못알아봄 어차피	
	//													↓↓↓
	printf("test의 시작주소 : %d\n", &test);//		10진수로 바꿈
	printf("test+1의 시작주소 : %d\n", &test + 1);// 한칸에 40byte니까 위와 40차이남

	Test* pt = &test;
	Test arr[5]; //40바이트가 5개 => 200바잍
	printf("%d\n", sizeof(arr)); 
	







}