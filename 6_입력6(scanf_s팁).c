#include<stdio.h>

int main()
{
	char word[20];
	int it;
	double db;
	printf("���ڿ� �Է�: ");
	scanf_s("%s", word, 10);

	printf("���� �Է�: ");
	scanf_s("%d", &it, 4); // int�� byte���� �����ָ� ��!
	//scanf_s("%d",&it) �� ����!
	//WHY? int�� double�̳� byte���� ����������̶� ���� ����� ��. word�� ������� �ٸ��ϱ� �ۼ�

	printf("�Ǽ� �Է� : ");
	scanf_s("%lf", &db, 8); // db�� byte��? 


	printf("%s / %d / %lf", word, it, db);

}