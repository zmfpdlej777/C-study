#include<stdio.h>
#include"�Ҽ��Լ�.h"


int main() {
	int arr[5]; //��迭 ����

	double arr2[5] = { 1.12,2.34,3.45,4.56,5.67 };
	printf("%d\n\n", sizeof(arr2)); //�Ǽ��� ���� 8byte!

	Arraylf(arr2,5); //�迭�� ������ double�̱� ������ �Լ��� Ư¡�� double�� ���� ������� 'Arraylf'
	Arraylf(arr, 5);

	arr[0] = 10;
	printf("\n\n");
	Arrayint(arr, 5);
	// ����) �ݺ����� arr�迭�� 20 30 40 50������� ä�����ʼ�
	int num = 10;
	for (int i =0; i < 5; i ++) {
		// arr[i]=(i+1)*10;
		arr[i] = num;
		num += 10;
		}
	Arrayint(arr);













	}






