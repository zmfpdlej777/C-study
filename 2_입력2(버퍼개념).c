#include<stdio.h>
//buffer�� ����
// .C ���ϰ� �����/Ű���� ������ stream.


int main()
{
	char ch;
	int num;
	printf("1. ���� �Է�:");
	scanf("%d", &num);
	printf("num=%d\n", num);

	//scanf("%c", &ch);  ������ �Է��ϰ� ���� '���� �ϳ�'�� ���ۿ��� ����
	rewind(stdin); //ǥ���Է� buffer�� �ִ� '��� ����'�� ����(*�̰� �� ���̾��ٰ���)

	printf("2. ���� �Է�: \n");
	scanf("%c", &ch);
	printf("ch=%c\n", ch);
	printf("hello?");


}