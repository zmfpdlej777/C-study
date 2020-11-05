#include<stdio.h>
#include"여러가지함수.h"
#include<string.h>

int main() {
	//1. 정수 5개를 저장할 수 있는 빈 배열 선언
	//2. 1번의 배열에 숫자를 키보드로 입력받아 순서대로 저장
	//3. 입력받은 배열을 일렬로 출력
	//4. *배열의 최대값,최소값 출력

	int asd[20];
	for (int i = 0; i < 5; i++) {
		int num;
		printf("정수 입력:");
		scanf_s("%d", &num); // == scanf_s("%d",&asd[1]));
		asd[i] = num;

	}
	printf("\n");
	printf("%d", asd[0]);

	printf("최대값 : %d\n",Max(asd));
	printf("\n");

	printf("최소값 : %d\n",Min(asd));
	printf("\n");

	allview(asd);


	// 아이디, 패스워드를 입력받아
	// 아래의 계정과 같으면 로그인 성공을 출력
	char ID[20] = "itbank";
	char PW[20] = "qwe@123";
	char id[20];
	char pw[20];
	printf("\n\n===========다음문제==========");
	printf("\nID :");
	scanf_s("%s", id, sizeof(id));
	printf("\nPW :");
	scanf_s("%s", pw, 20);
	//printf("%s\n", id);
	if (!strcmp(ID, id) && !strcmp(PW, pw)) { printf("로그인성공\n"); }
	else { printf("로그인 실패\n"); }













}