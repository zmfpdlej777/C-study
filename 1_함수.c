#include<stdio.h>

//��ȯ�� �Լ���(�Ű�����1,2...){�����ڵ�;} *�߰�ȣ �����
int adder(int n1, int n2, int  n3) { // n1=10, n2=20, n3=30
	return n1 + n2 + n3;

}
double circle(double r) { //r=3.0
	return 3.14 * r * r;
}

int main()
{
	int result;
	result = adder(10, 20, 30); //**���Կ����ڴ� �캯���� ó���Ѵ�
								//���Կ������� �º��� '����', �캯�� '�����'�� �ǹ�
	printf("result=%d\n", result);

	printf("������ : %.2f\n", circle(3)); //�ڵ�����ȯ�� �Ǳ��ϴµ� �°� �ִ� ������ �ؾ��ҵ�









}