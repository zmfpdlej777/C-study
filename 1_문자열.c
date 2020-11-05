#include<stdio.h>
#include<string.h>
int main()
{
	char word_1[20] = "apple";
	char word_2[20];

// 불가 : word_2="banana"
	
	strcpy(word_2, "banana"); //<=이것도 가능 strcpy(1,2) : 1에 2를 넣는다.

	printf("word_1=%s, word_2=%s\n\n", word_1, word_2);


	printf("word_1의 크기 :%d\n", sizeof(word_1));
	printf("word_1의 문자열 갯수 :%d\n", strlen(word_1)); //strlen(문자열) : 문자열 길이(null제외한 값)
	printf("word_2의 문자열 갯수 :%d\n", strlen(word_2)); 
	printf("안녕의 문자열 갯수: %d\n\n", strlen("안녕")); //한글은 글자당 2Byte

	//동일 검사 : strcmp(비교대상1,비교대상2) *문자열만 가능
	printf("word_1과 word_2는? %d\n", strcmp(word_1, word_2)); // 다르면 -1 or 1
	printf("word_1과 apple는? %d\n", strcmp(word_1, "apple")); // 같으면 0

	char id[20] = "itbank";
	char user_id[20];
	printf("ID :");
	scanf_s("%s", user_id,sizeof(user_id)); //sizeof쓰면 매번 변수에가서 바꾸고 여기와서 바꿀필요가 없다

	if (strcmp(id,user_id)) { printf("ID가 일치합니다.\n"); }
	else { printf("ID가 다릅니다.\n"); }
	// 위의 경우, 참이지만 else구문이 나온다. 이유는 strcmp의 참은 0, if의 참은 1이기 때문.
	//해결법 1) 종속문장위치 바꾸기
	//		2) strcmp(id,user_id)==1
	//   	3) !strcmp(id,user_id) 






}