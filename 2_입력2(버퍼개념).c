#include<stdio.h>
//buffer의 개념
// .C 파일과 모니터/키보드 사이의 stream.


int main()
{
	char ch;
	int num;
	printf("1. 정수 입력:");
	scanf("%d", &num);
	printf("num=%d\n", num);

	//scanf("%c", &ch);  위에서 입력하고 남은 '문자 하나'를 버퍼에서 삭제
	rewind(stdin); //표준입력 buffer에 있는 '모든 내용'을 삭제(*이걸 더 많이쓴다고함)

	printf("2. 문자 입력: \n");
	scanf("%c", &ch);
	printf("ch=%c\n", ch);
	printf("hello?");


}