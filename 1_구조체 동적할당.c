#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct point{int x, y;}Point;
Point* myAlloc(int n,int n2) { //<=여기서 생성된 주소를 반환하겠다!
	Point* tmp = (Point*)malloc(sizeof(Point));
	tmp->x = n;
	tmp->y = n2;
	return tmp; // tmp(0.0)를 만들어서 돌려줄게~

}


int main() {
	Point p1 = { 1,2 }; //main의 지역변수로 선언됨

	printf("p1=(%d,%d)\n", p1.x, p1.y);

	// heap 영역에 생성된 공간(=동적할당)
	Point* p2 = (Point*)malloc(sizeof(Point)); //<< 자료형 조심!
//					  **malloc()함수는 공간만 만들어줄 뿐, 초기화는 하지 못한다
	p2->x = 3;
	p2->y = 5;
	printf("p2=(%d,%d)\n", p2->x, p2->y);
	free(p2);

	//malloc()은 초기화가 되지 않음으로, 직접 초기화가 되는 함수를 작성
	Point* p3 = myAlloc(10,7); //tmp(0.0)의 주소를 p3가 받는다 : 동적할당의 문제점인 즉시초기화를 하는 방법
	// "이 시점"에서 받은 (0.0)에 변수를 넣어주면 된다~
	// BUT myAlloc에 매개변수를 넣어줌으로써 '원하는 값'을 초기화하는 것 까지 가능
	printf("p3=(%d,%d)\n", p3->x, p3->y);
	free(p3);




}
