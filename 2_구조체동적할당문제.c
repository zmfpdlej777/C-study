#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"showinfo.h"

//typedef struct Person { char name[10]; int age; double ki; char address[20]; } Person;
int main() {
//1. 이름, 나이 키 주소를 멤버로 가지는 Person 구조체 선언
//2. Person구조체 변수를 하나 동적할당(초기화)
//3. 2번에서 만들어진 변수에 값을 채워 출력or 입력출력도 가능

// 출력 예시)
//이름 : 홍길동(15세,178.3cm)
//주소 : 부산

//4. 3번의 출력문을 printPeople()이라는 함수로 제작하여 출력
//5. 두번쨰 Person구조체 변수를 하나 초기화되도록 동적할당
//6. 두번쨰 구조체 출력

	Person* p1 = (Person*)malloc(sizeof(Person));
	printf("이름 : ");
	scanf_s("%s", p1->name,sizeof(p1->name)); //name자체가 배열이기 때문에 시작점을 가져오기 때문에 &필요X
	printf("나이 : ");
	scanf_s("%d", &p1->age);				// **heap구역에서 age의 메모리를 찾아야 하기 때문에 주소값&이 필요**
	printf("신장 : ");
	scanf_s("%lf", &p1->ki);				// rewind(stdin) <<버퍼문제 중 다음입력칸까지 영향을 미칠떄 전의 입력후 버퍼를 비워주는거.
	printf("주소 : ");
	scanf_s("%s", p1->address,sizeof(p1->address));
	printf("\n=======출력=======\n");
	showinfo(*p1);
	free(p1);

	printf("\n");

	Person* p2 = plus("김길동",10,170.1,"울산");
	showinfo(*p2);
	free(p2);
	




}