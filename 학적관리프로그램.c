#include<stdio.h>
#include<stdlib.h>
#include<string.h>



typedef struct person{
	char name[10];
	int kor, eng, su, sum;
	double avg; 
} Person;

void adder(Person p[]) {
	for (int i = 0; i < 10; i++) {
		if (p[i].kor == 0) {
			printf("�̸� : ");
			scanf_s("%s", p[i].name, sizeof(p[i].name));
			printf("���� : ");
			scanf_s("%d", &p[i].kor);
			printf("���� : ");
			scanf_s("%d", &p[i].eng);
			printf("���� : ");
			scanf_s("%d", &p[i].su);
			p[i].sum = p[i].kor + p[i].eng + p[i].su;
			printf("\n���� : %d\n", p[i].sum);
			p[i].avg = p[i].sum / 3;
			printf("��� : %.2lf\n", p[i].avg);
			
			return;
		}
	}
		printf("���̻� �����Ҽ� �����ϴ�.\n"); 
}

void list(Person p[]) {
	printf("\n============����Ʈ===========\n");
	//printf("%s ", p[0].name);
		int count = 0;
	for (int i = 0; i < 10; i++) {
		if (p[i].kor != 0) {

			printf("%s ", p[i].name);
			count++;
		}
		else if (count / 3 == 0) { printf("\n"); }
	}
}

void search(Person p[]) {
	char name[20];
	printf("�̸� : ");
	scanf_s("%s", name,sizeof(name));
	for (int i = 0; i < 10; i++) {
		if (strcmp(name,p[i].name)==0) { //���ڴ� ���� �ƴ϶� �ּҸ� �������� ������ strcmp�� ����Ѵ�.
			printf("�̸� : %s\n��:%d\n��:%d\n��:%d\n\n����:%d\n���:%.2lf\n", p[i].name, p[i].kor, p[i].eng, p[i].su, p[i].sum, p[i].avg);
		}
	}
}

void del(Person p[]) {
	char name[20];
	printf("���� ��� : ");
	scanf_s("%s", name, sizeof(name));
	for (int i = 0; i < 10; i++) {
		if (strcmp(name, p[i].name) == 0) {
			if (i + 1 != 9) {
				p[i] = p[i + 1];
				strcpy(p[i + 1].name, NULL);
				p[i + 1].kor = 0;
				p[i + 1].eng = 0;
				p[i + 1].su = 0;
				p[i + 1].sum = 0;
				p[i + 1].avg = 0;
			}
		}
	}
	printf("\n�ش� �л��� ���������ʽ��ϴ�.");
}

void save(Person p[]) {
	/*char path[20];
	printf("������ ��� ���� :");
	scanf_s("%s", path, sizeof(path));*/

	FILE* fp = fopen("test.txt", "w"); //�޸��� ���� hwp�� ����

	for (int i = 0; i < 10; i++) {
		fprintf(fp,"%s %d %d %d %d %lf\n", 
			p[i].name,p[i].kor, p[i].eng, p[i].su, p[i].sum, p[i].avg);
	}
	fclose(fp);
}

void load(Person p[]) {
	FILE* fp = fopen("save.txt", "r");
	for (int i = 0; i < 10; i++) {
		if (fp == NULL) {//�б��� ���н� fp���� NULL�� ��ȯ
			printf("������ �о���� ���߽��ϴ�.\n");
		}
		else {
			printf("�ҷ��� ������");
		}
	fscanf(fp, "%s %d %d %d %d %lf", p[i].name, &p[i].kor, &p[i].eng, &p[i].su, &p[i].sum, &p[i].avg);
	}

}

int main() {
	int choice;
	Person p[10] = { 0 };
	do{

		printf("========�޴�======\n");
		printf("1. �л��߰�\n");
		printf("2. �л����\n");
		printf("3. �л��˻�\n");
		printf("4. �л�����\n");
		printf("5. ����\n");
		printf("6. �ҷ�����\n");
		printf("0. ���α׷� ����\n");
		printf(">>>");
		scanf_s("%d", &choice);

		

		switch (choice){

			case 1:
				adder(p);
				break;
		
			case 2:
				list(p);
				break;
		
			case 3:
				search(p);
				break;
		
		
			case 4:
				del(p);
				break;
		
		
			case 5:
				save(p);
				break;
			
			case 6:
				load(p);
				break;
			
			case 0:
			printf("���α׷��� �����մϴ�.\n");
			break;

			default :
		printf("�߸��� ��ȣ�Դϴ�.\n");
		system("cls");
			}
		if (choice != 0) {
			system("pause");
			system("cls");
		}
		
		//system("pause");
	} while (choice != 0);
}
