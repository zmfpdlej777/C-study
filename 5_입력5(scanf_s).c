#include<stdio.h>

int main()
{
	char word[5];
	printf("문자열 입력:");

	scanf("%s", &word); //배열은 &을 넣으면 안된답니다. 근데 지금패치되서 되는듯..
	printf("%s\n", word);
	// scanf()는 배열의 크기보다 넘는 값을 입력 받아버리는 취약점이 존재 : 입력시 길이를 검사하지 않기 때문에 발생
	// => 그래서 VS에서 막아놓은것(입력.c에서 푸는방법있음)
	// 대체제 : scanf_s : 기존 scanf에서 마지막에 문자열 '크기'만 지정(입력.c에서 설정하는거 안풀어도됌)
	printf("2. 문자열 입력:");
	scanf_s("%s", word, 5);
	printf("%s\n", word);

}