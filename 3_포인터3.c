#include<stdio.h>

int main() {
// 포인터 변수의 자료형은 연결한 변수와 똑같이 맞춘다!
	int num = 10;			//int :4byte
	double pi = 3.141592;   //double : 8byte
	float fl = 6.13f;		//float : 4byte
	char ch = 'A';			//character : 1byte

	//포인터 변수의 크기는 무조건 4byte크기를 가진다.
	int* pnum = &num;		//int* => 가리키는 공간이 4byte임을 인식
	double* ppi = &pi;		//double* => 가리키는 공간이 8byte임을 인식
	float* pfl = &fl;
	char* pch = &ch;
	// 하지만 앞에 자료형을 붙여 주는 이유?
	//주소는 4byte로 전부 표현할수 있지만 가리키는 위치의 값이 4byte보다 높다면 자료가 깨져서 가져올수 있기 떄문에 맞춰줘야함
	//물론 반대의 경우도 배열을 가리킨다면 깨질수도 있음
	//int랑 float은 혼동사용 가능? NO : 4byte내에 숫자 범위가 int와 float이 다름!

	printf("int*의 크기 : %d\n", sizeof(pnum));     // ㅜ '주소는 4byte안에 다 쓸수있다~'
	printf("double*의 크기 : %d\n", sizeof(ppi));   // 」











}