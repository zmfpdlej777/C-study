#include<stdio.h>
#include<stdlib.h>

void inArr(int* arr,int num) {
	int count = 0;
	for (int i = 0; i < num; i++) {
		*(arr + i) = count;
		count++;
	}
}


void printArr(int* arr, int num) {
	for (int i = 0; i < num; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");

}

int main() {
	int num = 5;
//	int arr[num] ; �����Ҵ� �迭�� ũ�Ⱑ �̸� �������̽�� �Ѵ�.
	//				=> ���� ������ ũ��� ���� �� ����. �Էµ� ���޴´�.

//	int arr[20000000] ; ���������� �Ҵ�Ǵ� Stack �޸� ������ ũ�Ⱑ ũ�� �ʴ�.

	printf("�迭 ����:");
	scanf_s("%d", &num);


	int* arr = (int*)malloc(sizeof(int) * num); //�����Ҵ� �迭����� (int * num)

	inArr(arr,num);

	printArr(arr,num);

	free(arr); //�Ϲ� �����Ҵ� ���� ���ſ� �Ȱ��� ����


	//�Լ� ȣ��� �Ű����� ����
	// 1. �Լ� ȣ��� (X&)���� �����ϸ� �����ܰ�(*)�� �þ�� �ʴ´�.
	// 2. �Լ� ȣ��� (&)�ּҸ� �����ϸ� �����ܰ�(*)�� �þ��.

	//ex)
	//�Լ� ȣ��� int�� ���� ���� => �Ű������� int
	//�Լ� ȣ��� int�� �ּҸ� ���� => �Ű������� int*
	//�Լ� ȣ��� int*�� ���� ���� => �Ű������� int*
	//�Լ� ȣ��� int*�� �ּҸ� ���� => �Ű������� int**












}