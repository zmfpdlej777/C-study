#include<stdio.h>
	//�迭�� �̸��� ��������̴�.
	//const : ���ȭ�ϴ� Ű����
int main() {
	int num = 10; //���� num
	const int cnum = 10; // ��� const
	num = 20;
	//cnum = 20; => ��� ������ ���� �Ұ���
	printf("num=%d, cnum=%d\n", num,cnum);

	//�迭�� �̸��� ��������̴�.
	//�迭���̸��� �ּҰ��� ������.
	int arr[5] = { 10,20,30,40,50 };
	printf("arr=%d\n", arr); //�迭�̸� ��� : �迭�� �޸� �ּҸ� ã�¹�� 
	printf("arr=%p\n", arr); //%p = 16����
	
	//pointer : �ּҰ��� ã�ư� ���� �־��ִ� ����

	char word[10] = "apple";
	printf("word=%s\n", word); //%s�� �ش� �ּҺ��� null���������� ����ϴ� ���Ĺ���
	printf("word=%p\n", word);
	
	//*�迭�� ó������ const�� �Ǿ� �־ ������ �ȵǴ°���!
	





}