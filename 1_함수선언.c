#include<stdio.h>
int sum(int n); //함수의 선언부 : 함수의 형태만 작성해 놓은 것 (책의 목차역할:이 이름의 함수가 '어디'에 있다~)
// tip) ctrl누르고 함수이름 누르면 정의부로 날라감

int main() {
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);
	printf("1~%d까지의 합 : %d\n", num, sum(num)); //이 시점에 선언부를 찾아감.
	// **sum함수를 밑에 쓰면 원래 실행이 안됨. but 요즘엔 VS가 잡아줘서 가능. 하지만 함수가 많아지면 안될가능성이 높아진다.


}

int sum(int n) { //함수의 정의부 : 실제 함수 코드가 작성된 곳
	//1~n까지 합계구하는 함수
	int total = 0;
	for (int i = 1; i <= n; i++)
	{
		total += i;
	}
	return total;

}
