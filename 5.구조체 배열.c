#include<stdio.h>
#include<stdlib.h>
typedef struct car { char name[10]; int 시속; int age; } Car;


void PrintCar(Car c) {
	printf("모델명 : %s\n", c.name);
	printf("시속 : %dkm/h\n", c.시속);
	if (c.age > 1) {
		printf("연식 : %dyears\n", c.age);
	}
	else if (c.age==1){ printf("연식 : %dyear\n", c.age); }
}
void printList(Car* c) {
	for (int i = 0; i < 3; i++) {//Car배열 모두출력
		PrintCar(c[i]);
		printf("\n");

	}
}
int main() {
	Car cars[5] = {
		{"R8",250,1}, //0
		{"Kamaro",240,2},//1
		{"RAm",270,5} //2
	};

	//배열 요소 접근 : index사용
	//구조체 멤버 접근 : 직접접근(.), 간접접근(->)

	printf("0번의 모델 : %s\n", cars[0].name);
	printf("0번의 시속 : %dkm/h\n\n", cars->시속);
	printf("1번의 시속 : %dkm/h\n", cars[1].시속);
	printf("1번의 연식 : %d\n\n", (cars+1)->age);
	printf("2번의 연식 : %d\n", cars[2].age);
	printf("2번의 속도 : %dkm/h\n\n", (*(cars+2)).시속);

	PrintCar(cars[0]); //자동차 하나를 출력하는 함수
	printf("\n============Car배열 모두 출력=============\n");
	printList(&cars); //어차피 배열은 &이거 있으나 마나 주소들어가는거라 상관X, 이중포인터면 말이다르지.
					  //**배열의 이름은 주소다

	//위의 for문을 printList()라는 함수로 구현




}