#include<stdio.h>
#include<stdlib.h> //���� ���� �Լ��� stdlib.h ����� �ִ�*
#include<time.h> //�ð������Լ�
#define MAX 6

void printArr(int* arr) {
	printf("�迭 :");
	for (int i = 0; i < MAX; i++) {
		printf("%d ", *(arr + i));
	}
}

int arrayMax(int* n) {
	int max;
		max = *(n); //���⼭ n�� ������ �迭�� ��ó��(����)��
	for (int i = 0; i < MAX; i++) {
		if (max < *(n+i)) { max = *(n +i); }

	}
		return max;

}


int main() {
	srand(time(NULL)); //(����ð�(�ʴ���)) : ����ǥ�� ������ġ => �پ��� �������̰��ϴ� ȿ��

	int num = rand() %100; //rand() : 32,768(0~32,767���� ���� '��ȯ')
				  //  ��� : �������� 0~99������ ������ �� ���̿� ������ �������
	printf("%d\n", num);

	int arr[MAX];
	for (int i = 0; i < MAX; i++) {
		arr[i] = rand() % 100; 
	}

	printf("\n\n");
	printArr(arr);
	printf("\n\n");

	printf("�迭���� �ִ밪 : %d\n", arrayMax(arr));










}