#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"여러가지 함수.h"

struct people {
	char name[20];
	int age;
	double ki;
	char adress[20];
};
typedef struct people People;
void showinfo(People p) {
	printf("이름 : %s\n", p.name);
	printf("나이 : %d\n", p.age);
	printf("신장 : %.1lf\n", p.ki);
	printf("주소 : %s\n", p.adress);
	printf("\n");
}


int main() {
	//구조체의 초기화 : 구조체의 멤버변수 순서대로 초기화해줘야 한다.
	struct people p1 = {"제드",24,181.2,"땅바닥"};

	//구조체의 빈 변수
	struct people p2;

	//구조체 멤버변수에 접근
	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("신장 : %.1lf\n", p1.ki);
	printf("주소 : %s\n", p1.adress);
	printf("\n");

	showinfo(p1);

	//p2 구조체 변수에 값을 채우시오 : string.h가 없으면 불가. 문자 배열은 그냥 복붙이 안되기 때문에 사용
	strcpy_s(p2.name,sizeof(p2.name), "카르마");
	p2.age = 23;
	strcpy_s(p2.adress,sizeof(p2.adress), "아이");
	p2.ki = 169.5;
	showinfo(p2);

}