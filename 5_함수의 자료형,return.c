#include<stdio.h>


//함수의 자료형(=함수의 반환형):함수이름 앞의 int,void,long long, double.. 함수의 결과값이라고도 한다. 
// **자료형 [void] : '공허' = 실행은 하지만 결과값을 되돌려주지 않는 경우 쓰는 함수 자료형
int adder(int n1, int n2) {
	int result;
	result = n1 + n2;
	printf("전달 받은 값) n1= %d, n2=%d\n", n1, n2);
	printf("되돌려줄 result 값 = %d\n", result);
	return result; //return : 함수를 끝내고, 함수를 '호출한 위치'로 결과를 되돌려 준다.
} //   ↘				    => **return값은 함수의 변환형과 일치시킨다! (함수의 자료형이 int면 return값이 무조건 int여야함!!)
//       →→→→→→→↘
int main() {//    ↘
	int sum;//     ↓ 
	sum = adder(10, 20); //반환형이 있는 함수는 꼭 값을 변수에 저장하거나, 바로 활용한다. 
//   y  =   f   (   x );
//  sum = 30;
	printf("%d",sum);
	adder(20, 60);//<=값은 왔지만 출력X	==> 바로 활용 하는 방법
	printf("결과=%d\n\n", adder(20, 60));   //1. 출력문으로 바로 사용한다.
//  결과=80
	
	sum = adder(adder(10, 20), adder(20, 40)); //2. 바로 다른 함수의 전달값으로 활용한다.
	printf("위의 24line sum= %d\n", sum);



}