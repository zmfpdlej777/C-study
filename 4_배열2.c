#include<stdio.h>
void printfArray(int arr[]) {
	printf("arr=");
	for (int i = 0; i < 3; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int n = 10;				   //���� ����
	int arr[3] = { 10,20,30 }; //�迭
				//  0  1  2


	printfArray(arr);		//�迭�� ����ϴ� ������ ���� �ݺ����� ����ؾ� �Ѵ�
							// => �ڵ����ߺ� �߻� => �Լ��� ����
	
	n = 20;
	printf("n=%d\n", n);

	printfArray(arr);
	arr[0] = 100;

	printfArray(arr);







}