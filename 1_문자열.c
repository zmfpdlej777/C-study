#include<stdio.h>
#include<string.h>
int main()
{
	char word_1[20] = "apple";
	char word_2[20];

// �Ұ� : word_2="banana"
	
	strcpy(word_2, "banana"); //<=�̰͵� ���� strcpy(1,2) : 1�� 2�� �ִ´�.

	printf("word_1=%s, word_2=%s\n\n", word_1, word_2);


	printf("word_1�� ũ�� :%d\n", sizeof(word_1));
	printf("word_1�� ���ڿ� ���� :%d\n", strlen(word_1)); //strlen(���ڿ�) : ���ڿ� ����(null������ ��)
	printf("word_2�� ���ڿ� ���� :%d\n", strlen(word_2)); 
	printf("�ȳ��� ���ڿ� ����: %d\n\n", strlen("�ȳ�")); //�ѱ��� ���ڴ� 2Byte

	//���� �˻� : strcmp(�񱳴��1,�񱳴��2) *���ڿ��� ����
	printf("word_1�� word_2��? %d\n", strcmp(word_1, word_2)); // �ٸ��� -1 or 1
	printf("word_1�� apple��? %d\n", strcmp(word_1, "apple")); // ������ 0

	char id[20] = "itbank";
	char user_id[20];
	printf("ID :");
	scanf_s("%s", user_id,sizeof(user_id)); //sizeof���� �Ź� ���������� �ٲٰ� ����ͼ� �ٲ��ʿ䰡 ����

	if (strcmp(id,user_id)) { printf("ID�� ��ġ�մϴ�.\n"); }
	else { printf("ID�� �ٸ��ϴ�.\n"); }
	// ���� ���, �������� else������ ���´�. ������ strcmp�� ���� 0, if�� ���� 1�̱� ����.
	//�ذ�� 1) ���ӹ�����ġ �ٲٱ�
	//		2) strcmp(id,user_id)==1
	//   	3) !strcmp(id,user_id) 






}