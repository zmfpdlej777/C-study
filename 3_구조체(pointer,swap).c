#include<stdio.h>
#include"여러가지 함수.h"
#include<string.h>

void printP(People p) {
	printf("이름 : %s\n", p.name);
	printf("나이 : %d\n", p.age);
	printf("신장 : %.2lf\n", p.ki);
	printf("주소 : %s\n", p.adress);
	printf("\n\n");
}
void swap(People* p1, People* p2) {
	People tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int main() {
	// 구조체는 새로만든 묶음 자료형
	// 자료형은 변수 선언, 매개변수, 함수의 반환형, 포인터 변수, 배열 등으로 사용 가능
	People p1 = { "홍길동",17,180.1,"부산" };

	People* pp = &p1;
	printf("p1의 name=%s\n", p1.name); //1.변수로 직접참조 : .(닷) 연산자 사용
	printf("pp가 가리키는 name=%s\n", pp->name); //2. 주소로 간접참조 : .(닷)쓰면 자동으로 ->(애로우)로 변환
	printf("pp가 가리키는 name=%s\n", (*pp).name); // 3. 주소를 참조후 직접 접근 -> 이때 참조 연산이 우선순위가 떨어짐으로 ()로 먼저 묶어야한다. 
	printf("\n\n");
	People p2 = { "김길동",18,173.2,"부산" };
	People* pp2 = &p2;
	printf("스왑전\n");
	printP(p1);
	printP(p2);
	swap(&p1, &p2);
	printf("\n스왑후\n");
	printP(p1);
	printP(p2);
	swap(pp, pp2);
	printf("\n스왑후2\n");
	printP(p1);
	printP(p2);








}