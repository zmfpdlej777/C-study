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
			printf("이름 : ");
			scanf_s("%s", p[i].name, sizeof(p[i].name));
			printf("국어 : ");
			scanf_s("%d", &p[i].kor);
			printf("영어 : ");
			scanf_s("%d", &p[i].eng);
			printf("수학 : ");
			scanf_s("%d", &p[i].su);
			p[i].sum = p[i].kor + p[i].eng + p[i].su;
			printf("\n총합 : %d\n", p[i].sum);
			p[i].avg = p[i].sum / 3;
			printf("평균 : %.2lf\n", p[i].avg);
			
			return;
		}
	}
		printf("더이상 저장할수 없습니다.\n"); 
}

void list(Person p[]) {
	printf("\n============리스트===========\n");
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
	printf("이름 : ");
	scanf_s("%s", name,sizeof(name));
	for (int i = 0; i < 10; i++) {
		if (strcmp(name,p[i].name)==0) { //문자는 값이 아니라 주소를 가져오기 때문에 strcmp를 써야한다.
			printf("이름 : %s\n국:%d\n영:%d\n수:%d\n\n총점:%d\n평균:%.2lf\n", p[i].name, p[i].kor, p[i].eng, p[i].su, p[i].sum, p[i].avg);
		}
	}
}

void del(Person p[]) {
	char name[20];
	printf("삭제 대상 : ");
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
	printf("\n해당 학생은 존재하지않습니다.");
}

void save(Person p[]) {
	/*char path[20];
	printf("저장할 경로 선택 :");
	scanf_s("%s", path, sizeof(path));*/

	FILE* fp = fopen("test.txt", "w"); //메모장 말고 hwp도 가능

	for (int i = 0; i < 10; i++) {
		fprintf(fp,"%s %d %d %d %d %lf\n", 
			p[i].name,p[i].kor, p[i].eng, p[i].su, p[i].sum, p[i].avg);
	}
	fclose(fp);
}

void load(Person p[]) {
	FILE* fp = fopen("save.txt", "r");
	for (int i = 0; i < 10; i++) {
		if (fp == NULL) {//읽기모드 실패시 fp에는 NULL이 반환
			printf("파일을 읽어오지 못했습니다.\n");
		}
		else {
			printf("불러온 데이터");
		}
	fscanf(fp, "%s %d %d %d %d %lf", p[i].name, &p[i].kor, &p[i].eng, &p[i].su, &p[i].sum, &p[i].avg);
	}

}

int main() {
	int choice;
	Person p[10] = { 0 };
	do{

		printf("========메뉴======\n");
		printf("1. 학생추가\n");
		printf("2. 학생목록\n");
		printf("3. 학생검색\n");
		printf("4. 학생삭제\n");
		printf("5. 저장\n");
		printf("6. 불러오기\n");
		printf("0. 프로그램 종료\n");
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
			printf("프로그램을 종료합니다.\n");
			break;

			default :
		printf("잘못된 번호입니다.\n");
		system("cls");
			}
		if (choice != 0) {
			system("pause");
			system("cls");
		}
		
		//system("pause");
	} while (choice != 0);
}
