#include<stdio.h>

int main()
{
	int it;
	char ch;
	float fl;
	double db;
	//���� ���� ������� �Է¹޾� ����غ�����
	//it =10 ch=c fl=1.2 db=3.1415
	// *����) �Ҽ��� ����� ��¹����� �Ѵ�!
	printf("���� �Է��Ͻʼ�:");
	scanf("%d", &it);
	printf("it = %d\n", it);

	rewind(stdin);

	printf("�ѱ��� �Է��Ͻʼ�:");
	scanf("%c", &ch);
	printf("ch = %c\n", ch);

	rewind(stdin);

	printf("�Ҽ� �Է��Ͻʼ�:");
	scanf("%f", &fl);
	printf("fl = %.1f\n", fl);

	rewind(stdin);

	printf("���� �Է��Ͻʼ�:");
	scanf("%lf", &db);
	printf("db = %.4lf\n", db);
	///�ѹ��� �Է�
	printf("it=%d, ch=%c, fl = %.1f, db= %.4lf\n",it,ch,fl,db);
	//������ ����� ��µ��� ���� => **rewind(stdin)�� �߿伺
	





}