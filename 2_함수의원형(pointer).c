#include<stdio.h>
#define MAX 10	//�� c���Ͽ��� MAX�� ~�� ������Ű�ڴ�. 
//���ġȯ���� : �ڵ� �����Ͻ� �ڵ� ������ ����Ǿ� ����ȴ�. (��ũ�� ������ �Ѵ�)
//    �� ��ó������

//void printArr(int arr[]){ ��� �������
void printArr(int* arr){

for (int i = 0; i < MAX; i++) {
	//printf("%d ", arr[i]); ��� �������
	//printf("%d ", *(arr+i));
	  printf("%d ", *arr);
	  arr = arr + 1;
}
printf("\n");
}

int main() {
	int A[MAX] = { 10,20,30,40,50 };
	int max = 5; //int�� ���� 4byte => max��� ������ 5�� �ο��Ѱ�.
				 //���� MAX�� MAX��ü�� 5�� ���� '���' ������ ��

	//int arr[5];
	int arr[MAX];
	int num = 10;
	for (int i = 0; i < MAX; i++) {
		arr[i] = num;
		num += 10;
	}

	printArr(arr);












}