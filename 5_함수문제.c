#include<stdio.h>

int Hello(int n1) {
	for (int i=1; i <= n1; i++) {
		printf("Hello World!\n");
	}
}

int bigger(int n1, int n2) {
	if (n1 > n2) { printf("ù��° ������ �� Ů�ϴ�\n\n"); }
	else if (n1 < n2) { printf("�ι�° ������ �� Ů�ϴ�.\n\n"); }
	else { printf("����\n\n"); }
}

int yak(int n1) {
	for (int i = 1; i <= n1; i++) {
		if (n1 % i == 0) { printf("%d ", i); }
	}
}

int sum(int n1) {
	int total=0;
	for (int i = 1; i <= n1;i++) {
		total += i;
		
	}
		return total;

}

int sosu(int n1) { //�Ҽ�=1, �ƴϸ�=0
	int j;
	for (int j = 2; j <= n1; j++);{
		{ if (n1 % j == 0) { return 0; }
		}
	return 1;
}





int main()
{//1. Hello��� �̸��� �Լ��� ���� n���� �����Ͽ� ȣ��� n����ŭ
// Hello world!�� ���
// �Է� : 5 => ��� : 5��
	int n1;
	printf("���� �Է� : ");
	scanf_s("%d", &n1);
	Hello(n1);

// 2. �� ������ �Է¹޾Ƽ� ū ���� ����ϴ� �Լ� ����
// ��, return X
	int n2, n3;
	printf("\n�� ���� �Է�:");
	scanf_s("%d %d", &n2, &n3);
	bigger(n2, n3);

// 3. �Է¹��� ������ ����� ���ϴ� �Լ� ����
// ��, return X
	int n4;
	printf("\n���������:");
	scanf_s("%d", &n4);
	yak(n4);

// 4. �Է¹��� ���������� �հ踦 ��ȯ�ϴ� �Լ� ����
	int n6;
	printf("\n������� ��:");
	scanf_s("%d", &n6);
	printf("�հ� : %d",sum(n6));


// 5. �Է¹��� ������ �Ҽ��� �Ǻ��ϴ� �Լ� ����
// ���� �Ҽ��̸� 1��ȯ, �ƴϸ� 0��ȯ return
	int n5;
	printf("\n\n�Ҽ��Ǻ���:");
	scanf_s("%d", &n5);
	if (sosu(n5)) {printf("%d�� �Ҽ�\n"); } //if�� ()�ȿ� 1�� ���� True�� �Ǵϱ� ���� �Ǽ� �Ҽ��Դϴ�~�� �����°���;
	else {
		printf("%d�� �Ҽ� �ƴ�\n");
	}















}