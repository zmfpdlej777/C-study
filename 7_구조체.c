#include<stdio.h>
#include<stdlib.h>

typedef struct porint2D {int x;	int y;} point2D; //재정의하면서 멤버요소까지 같이 만드는거임

void printPoint(point2D p1)
{
	printf("%d,%d\n", p1.x, p1.y);
}
point2D adder(point2D p1, point2D p2) {
	printf("%d,%d\n", p1.x + p2.x, p1.y + p2.y);
/*선생님 답안
point2D tmp;
tmp.x=p1.x+p2.x;
tmp.y=p1.y+p2.y;
return tmp*/

}


int main() {

	point2D p1 = { 10,5 };
	point2D p2 = { 16,4 };

	printPoint(p1);
	printPoint(p2);

	point2D p3 = p1; //구조체에서 대입연산은 멤버변수로 1:1로 복사가 된다.
//  p3=p1+p2; =>구조체는 웬만한 연산자가 지원되지 않음
	p3 = adder(p1, p2); // ㄴ> 따라서 필요한 연산은 함수로 직접 구현해야 한다.
	printPoint(p3);
	
}