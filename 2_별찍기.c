#include<stdio.h>

int main() {
	int star;
	printf("���� ���� �� :");
	scanf_s("%d", &star);


	//---------------------------------------
	//*
	//**
	//***
	//****
	//*****
	printf("���ﰢ\n");
	for (int j = 1; j <= star; j++) {
		for (int i = 1; i <= j; i++) {
			if (i <= j) {
				printf("*");
			}
			else { printf(" "); }
		}
		printf("\n");
	}
	printf("\n\n");
//---------------------------------------
//    *
//   **
//  ***
// ****
//*****
	printf("���\n");
	for (int j = 1; j <= star; j++) {
		for (int i = 1; i <= star; i++) {
			if (j > star - i) {
				printf("*");
			}
			else {
				printf(" ");
			}

		}
			printf("\n");
	}

	printf("\n\n");


//---------------------------------------
//    *1                          *1
//   ***3                        ***3
//  *****5                      *****5
// *******7
//*********9
	printf("�Ƕ�̵�\n");
	for (int j = 1; j <= star; j++) {
		for (int i = 1; i <= 2*star-1; i++) {
			if (j > star - i && i<=j) {
				printf("*");
			}
			else if (j < star - i) {
				printf(" ");
			}
			else {
				printf(" ");
			}

		}
		printf("\n");
	}

/*������ ���
for (int i =0; i<star; i++){
for (int j=0; j<star-1-i; j++) {
printf(" ");
}
for int(j=0; j<=i*2; j++){
printf("*");
}
printf("\n");
}*/





//---------------------------------------
//*****    
//*   *
//*   *
//*   *
//*****

/*������ ���
for (int i =1; i<star; i++){
	for (int j=1; j<star; j++) {
		if (i==0 || i==star || j==0 || j==star)
		{printf("*");}

		else{printf(" ");}
}
printf("\n");
}
*/

//---------------------------------------
//  *    
//  *  
//*****
//  * 
//  * 
/*������ ���;
for (int i=1; i<star; i++){
	for (int j=1; j<star; j++) {
		if (i==star/2 || j==star/2)
		{printf("*");}

		else{printf(" ");}
}
printf("\n");
}
*/
//---------------------------------------
//*   *    
// * *  
//  *
// * * 
//*   * 
/*������ ���
for (int i=0; i<star; i++){
	for (int j=0; j<star; j++){
		if (i==j || i+j==4)	{printf("*");}
		else{printf(" ");}
	}
	printf("\n");







*/










}

