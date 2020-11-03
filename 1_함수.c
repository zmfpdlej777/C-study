#include<stdio.h>

//반환형 함수명(매개변수1,2...){내부코드;} *중괄호 꼭써라
int adder(int n1, int n2, int  n3) { // n1=10, n2=20, n3=30
	return n1 + n2 + n3;

}
double circle(double r) { //r=3.0
	return 3.14 * r * r;
}

int main()
{
	int result;
	result = adder(10, 20, 30); //**대입연산자는 우변부터 처리한다
								//대입연산자의 좌변은 '공간', 우변은 '결과값'을 의미
	printf("result=%d\n", result);

	printf("원넓이 : %.2f\n", circle(3)); //자동형변환이 되긴하는데 맞게 넣는 연습도 해야할듯









}