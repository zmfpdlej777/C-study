#include<stdio.h>

int sosu(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) { return 0; }
	}
	return 1; //����� ����� ������� �ڵ尡 �����
}

 void sosu_2(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (sosu(i)) { //sosu�� �Ҽ��� 1�� ��ȯ, �Ҽ��� �ƴϸ� 0��ȯ
			printf("%2d ", i); //if(1) => ��, if(0) => ����
			count++;
			if (count % 10 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\n�Ҽ� ���� : %d\n", count);
}

int main() {
	int num;
	int count = 0;
	printf("�����Է� :");
	scanf_s("%d", &num);

	sosu_2(num);
	





}