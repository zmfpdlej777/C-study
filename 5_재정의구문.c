#include<stdio.h>
#include<stdlib.h>

typedef unsigned int uint; // unsigned int를 'uint'로 쓰겠다! 
// ↑↑   [    1     ] [ 2 ] : 1을 2로 '재정의'하겠다. (재정의 구문) *원래구문도 사용가능
typedef int elements;


int main() {
	int num = 200000000;
	unsigned int unum = 4000000000; //부호없는 : unsigned = 음수값없이 양수로만 메모리 공간사용

	printf("num = %d, unum=%u\n", num, unum);

	uint unum2 = 300000000;
	printf("%u\n", unum2);

	












}