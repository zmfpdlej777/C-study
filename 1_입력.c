#include<stdio.h>
//표준 출력 : stdout
//표준 입력 : stdin

//VS2017~2019버전까지 scanf는 취약함수로 분류되어 기본적으로 막혀있음.
//scanf 푸는법 : 솔루션탐색기에서 해당project의 속성 -> C/C++탭 -> 밑에서 3번째 SDL검사 '아니오' -> 적용/확인
//↑주의사항 : 프로젝트에 .c파일이 없으면 속성에서 C/C++탭이 활성화 안되니 .c파일을 어느정도 작성 후 설정할것 

int main()
{
	int num;
	printf("정수 입력:"); //scanf에 쓰면 안되서 이렇게 쓰고, \n을 기입안함으로써 자연스럽게..
	scanf("%d", &num); //서식문자만 쓸것. &엔퍼센느 쓸것
	printf("입력받은 값:%d\n", num);








}