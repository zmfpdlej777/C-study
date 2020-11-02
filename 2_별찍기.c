#include<stdio.h>

int main() {
	int star;
	printf("찍을 별의 수 :");
	scanf_s("%d", &star);


	//---------------------------------------
	//*
	//**
	//***
	//****
	//*****
	printf("직삼각\n");
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
	printf("계단\n");
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
	printf("피라미드\n");
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

/*선생님 답안
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

/*선생님 답안
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
/*선생님 답안;
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
/*선생님 답안
for (int i=0; i<star; i++){
	for (int j=0; j<star; j++){
		if (i==j || i+j==4)	{printf("*");}
		else{printf(" ");}
	}
	printf("\n");







*/










}

