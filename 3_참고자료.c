#include<stdio.h>
#include<stdlib.h>// standard library : rnad()��� ���� �Լ��� ���� ���� ���
#include<time.h>

int main()
{
	srand(time(NULL)); //������ �پ��ϰ� �̰� ���ִ� �Լ�
	int num = rand(); // 2^15(32768)=> '0~32767'������ ���� ���� �̾��ִ� �Լ�
	printf("num=%d\n", num);
	printf("num%%45=%d", num % 45); //=> rand()�� ������� ������ �ֱ� ���Ѱ� (-> 0~44������ ���)

}

