#include<stdio.h>

int adder(int n1, int n2) {
	return n1 + n2; //return value�� ������ �Ѱ��� �������ϴ�.
}
int sub(int n1, int n2) {
	
	return  n1 - n2;
}


int main() {
	int sum;
	sum= adder(10, 20);// ���Կ����ڴ� �캯���� ó���Ѵ�.
						// �º��� '����', �캯�� '��'
	printf("sum=%d\n", sum);
	int result;
	result = sub(10, 20);
	printf("result=%d\n", result); //-10



}