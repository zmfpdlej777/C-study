#include<stdio.h>

void Hello(int n) { 
//          ↑↑↑↑
	//매개 변수(parameter) : 함수가 호출되면서 전달받은 데이터를 저장하는 변수
   // 1) 내부 알고리즘을 위한 값으로 사용될 수 있다.
   // 2) 
	for (int i = 0; i < n; i++) {
		printf("핼로 C \n");
	}
	printf("\n\n");
}

int main()
{
	Hello(3); // 전달인자(argument) : 함수 호출 시 함수에 필요한 데이터를 전달하는 값
	Hello(5);
	// **중요**
	// 함수의 매개변수와, 전달잇누의 개수 및 자료형은 일치시킨다!











}