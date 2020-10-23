#include<stdio.h>
#include<stdlib.h>// standard library : rnad()라는 랜덤 함수를 쓰기 위한 헤더
#include<time.h>

int main()
{
	srand(time(NULL)); //랜덤을 다양하게 뽑게 해주는 함수
	int num = rand(); // 2^15(32768)=> '0~32767'까지의 랜덤 수를 뽑아주는 함수
	printf("num=%d\n", num);
	printf("num%%45=%d", num % 45); //=> rand()의 결과값에 제한을 주기 위한것 (-> 0~44까지만 출력)

}

