#include<stdio.h>

void toLowerCase(char* word) { //[�빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �״�� ���δ� �Լ�]

	while (*word != NULL) {//���ڿ� ������ �ݺ��Ѵٴ� �Ҹ� (���ڿ� ���� ��ü������!)
		if (*word >= 56 && *word <= 90) {
		//if (*word >= 'A' && *word <= 'Z') �̰͵� ���� 
			*word += 32; //�빮�ڿ��� �ҹ���ȭ
		}
		word++; //Ŀ���� ��ĭ�� �о� (if���� ������� �о�� �ϱ⶧���� if�� '��'����)
	}
}




int main() {
	char word[20];
	printf("�ҹ��ڷ� �Է� : ");
	scanf_s("%s", word, sizeof(word));
	//scanf_s("%[^\n]", word, sizeof(word)); <-���� ��ü �Է¹ޱ� (���� ����)

	toLowerCase(word);

	printf("�Է¹��� �ܾ� : %s\n", word);













}