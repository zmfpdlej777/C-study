#include<stdio.h>
#include<stdlib.h>
typedef struct car { char name[10]; int �ü�; int age; } Car;


void PrintCar(Car c) {
	printf("�𵨸� : %s\n", c.name);
	printf("�ü� : %dkm/h\n", c.�ü�);
	if (c.age > 1) {
		printf("���� : %dyears\n", c.age);
	}
	else if (c.age==1){ printf("���� : %dyear\n", c.age); }
}
void printList(Car* c) {
	for (int i = 0; i < 3; i++) {//Car�迭 ������
		PrintCar(c[i]);
		printf("\n");

	}
}
int main() {
	Car cars[5] = {
		{"R8",250,1}, //0
		{"Kamaro",240,2},//1
		{"RAm",270,5} //2
	};

	//�迭 ��� ���� : index���
	//����ü ��� ���� : ��������(.), ��������(->)

	printf("0���� �� : %s\n", cars[0].name);
	printf("0���� �ü� : %dkm/h\n\n", cars->�ü�);
	printf("1���� �ü� : %dkm/h\n", cars[1].�ü�);
	printf("1���� ���� : %d\n\n", (cars+1)->age);
	printf("2���� ���� : %d\n", cars[2].age);
	printf("2���� �ӵ� : %dkm/h\n\n", (*(cars+2)).�ü�);

	PrintCar(cars[0]); //�ڵ��� �ϳ��� ����ϴ� �Լ�
	printf("\n============Car�迭 ��� ���=============\n");
	printList(&cars); //������ �迭�� &�̰� ������ ���� �ּҵ��°Ŷ� ���X, ���������͸� ���̴ٸ���.
					  //**�迭�� �̸��� �ּҴ�

	//���� for���� printList()��� �Լ��� ����




}