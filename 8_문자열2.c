#include<stdio.h>
#include<string.h> //���ڿ� ó�� ���� �Լ��� �ִ� ���
int main() {
	char word_1[20] = "apple";
	char word_2[20];

	int n1 = 10;
	int n2;

	// word_2 = word_1; <= ���ڿ� �迭���������� ��簡 ���� �ʴ´�
	strcpy(word_2,word_1); 
	strcpy_s(word_2,20,word_1); 
	//==string copy(word_2=word_1)  **sdl�˻� �ƴϿ�
	n2 = n1;
	printf("word_2=%s\n", word_2);










}