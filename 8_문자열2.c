#include<stdio.h>
#include<string.h> //문자열 처리 관련 함수가 있는 헤더
int main() {
	char word_1[20] = "apple";
	char word_2[20];

	int n1 = 10;
	int n2;

	// word_2 = word_1; <= 문자열 배열은대입으로 목사가 되지 않는다
	strcpy(word_2,word_1); 
	strcpy_s(word_2,20,word_1); 
	//==string copy(word_2=word_1)  **sdl검사 아니오
	n2 = n1;
	printf("word_2=%s\n", word_2);










}