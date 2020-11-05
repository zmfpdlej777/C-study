#include<stdio.h>

int main() {
	//1.아래배열모두출력
	int arr[5][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25},
	};
	for (int i= 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}

	//2. 아래 배열에 데이터를 채워서 출력
	// 1~64
	printf("\n============2번문============\n");
	int asd[8][8];
	int num = 1;
	/*asd[0][0] = num;
	printf("%d", asd[0][0]);*/
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			asd[i][j] = num;
			num++;
			printf("%2d ", asd[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	int n = 1;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			asd[i][j] = n;
			n++;
			printf("%2d ", asd[j][i]);
		}
		printf("\n");
	}


	











}