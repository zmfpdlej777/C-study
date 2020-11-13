#include<stdio.h>

int main() {
	FILE* fp = fopen("test.txt", "r");

	char word[20];
	char word2[10];
	int num;
	double db;

	fscanf(fp, "%s %s %d %lf", word, word2, &num, &db);
	printf("파일에서 읽어온 데이터 \n");
	printf("word= %s\n", word);
	printf("word2= %s\n", word2);
	printf("num= %d\n", num);
	printf("db= %.2lf\n", db);
}