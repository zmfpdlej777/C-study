#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include"����program.h"

int main() {
	int choice;
	while (1) {
		printf("========�޴�======\n");
		printf("1. �л��߰�\n");
		printf("2. �л����\n");
		printf("3. �л��˻�\n");
		printf("4. �л�����\n");
		printf("0. ���α׷� ����\n");
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
				printf("���̻� �����Ҽ� �����ϴ�.\n");
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
			printf("���α׷��� �����մϴ�.\n");
			break;
			}
		else {
			printf("�߸��� ��ȣ�Դϴ�.\n");
			system("cls");
		}
		//system("pause");

	}
}