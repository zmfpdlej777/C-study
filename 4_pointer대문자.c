#include<stdio.h>

void toLowerCase(char* word) { //[대문자는 소문자로, 소문자는 그대로 놔두는 함수]

	while (*word != NULL) {//문자열 끝까지 반복한다는 소리 (문자열 한정 전체돌리기!)
		if (*word >= 56 && *word <= 90) {
		//if (*word >= 'A' && *word <= 'Z') 이것도 가능 
			*word += 32; //대문자에서 소문자화
		}
		word++; //커서를 한칸씩 밀어 (if문과 상관없이 밀어야 하기때문에 if문 '밖'으로)
	}
}




int main() {
	char word[20];
	printf("소문자로 입력 : ");
	scanf_s("%s", word, sizeof(word));
	//scanf_s("%[^\n]", word, sizeof(word)); <-한줄 전체 입력받기 (띄어쓰기 가능)

	toLowerCase(word);

	printf("입력받은 단어 : %s\n", word);













}