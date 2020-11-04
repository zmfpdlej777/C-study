#include<stdio.h>

//문자열 : 문자가 나열된 형태의 데이터, 단어나 문장을 표현하기 위하 ㄴ데이터
// C언어는 문자열을 처리하기 위한 자료형이 없다.
// => 따라서 문를 표현하는 char을 배열형태로 처리


int main() {
	char word[13] = "Hello world!";
	//문자는 ""로, 숫자는 {}로 묶는다

	//실제 저장방식 ↓↓↓↓
	char word2[13] = { 'H','E','L','L','O',' ','W' ,'O' ,'R' ,'L' ,'D' ,'!' };
	// index            0   1   2   3   4   5   6    7    8    9    10   11  
					// 문자열 마지막엔 항상 \0이 존재하여 채워진다.

	
	printf("word = %s\n", word);
	printf("word2 = %s\n", word2);
	printf("word[0]=%c\n", word[0]);
	printf("word[6]=%c\n", word[6]); //마찬가지로 배열이기 때문에 index 사용가능

	for (int i = 0; word[i]!='\0'; i++) { //0번부터 NULL값 전까지 출력 <=좋네이거, 숫자처럼 count염병안해도되고
		printf("%c", word[i]);     
	}				// 굳이 전체 문자를 인덱스하는 방법
	printf("\n");	// 위의 word=%s,word하면 끝남













}