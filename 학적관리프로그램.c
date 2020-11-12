#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include"학적program.h"

int main() {
	int choice;
	while (1) {
		printf("========메뉴======\n");
		printf("1. 학생추가\n");
		printf("2. 학생목록\n");
		printf("3. 학생검색\n");
		printf("4. 학생삭제\n");
		printf("0. 프로그램 종료\n");
		printf(">>>");
		scanf_s("%d", &choice);
		//system("pause");
		if (choice ==1) {
			int i = 0;
			if (i < 10) {
				Person i;
				Person* pp = &i;
				adder(pp);
				system("pause");
				system("cls");
			}
			else {
				printf("더이상 저장할수 없습니다.\n");
			}
				i++;
		}
		
		else if (choice == 2) {
			break;
			system("cls");
		}
		else if (choice == 3) {
			break;
			system("cls");
		}
		else if (choice == 4) {
			break;
			system("cls");
		}
		else if (choice == 0) {
			printf("프로그램을 종료합니다.\n");
			break;
			}
		else {
			printf("잘못된 번호입니다.\n");
			system("cls");
		}
		//system("pause");

	}
}