#include<stdio.h>

int adder_1(int n1, int n2) { //n1= num1, n2=num2
	n1 += 10;
	n2 += 20;
	printf("�Լ� ����) n1=%d, n2=%d\n", n1, n2);
	return n1 + n2;
}

int adder_2(int num1, int num2) { //num1=num1, num2=num2
	//�������� : �Ű������� �Լ� ������ ������� ����. ȣ��ɶ� ���������. return�Ŀ� ��ȯ�ǰ� ���� ������ �޸𸮿��� �������.
	
	num1 += 10;
	num2 += 20;
	printf("�Լ� ����) n1=%d, n2=%d\n", num1, num2);
	return num1 + num2;
}

int main() {
	int num1, num2; //adder_2�� �Ű������� �̸��� ������ �ٸ� �����̴�.
					//������ num1,2�� global ���� = '����'
	printf("�� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	printf("---------adder_1----------\n");
	printf("�Լ� ȣ�� ��) num1=%d, num2=%d\n", num1, num2);
	adder_1(num1, num2);
	printf("�Լ� ȣ�� ��) num1=%d, num2=%d\n", num1, num2);

	printf("---------adder_2----------\n");
	printf("�Լ� ȣ�� ��) num1=%d, num2=%d\n", num1, num2);
	adder_2(num1, num2);
	printf("�Լ� ȣ�� ��) num1=%d, num2=%d\n", num1, num2);








}