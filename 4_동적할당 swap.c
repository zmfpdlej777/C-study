#include<stdio.h>
#include<stdlib.h>

void swap(int* n1, int* n2) {// n1, n2 : 동적할당 공간에 바로 가리킴
	int tmp;
	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void swap2(int** n1, int** n2) {// &n1, &n2 : n1,n2의 주소를 가리키고, n1,n2는 동적할당 공간을 가리키고있다. (이중포인터)
	int tmp;
	tmp = **n1;
	**n1 = **n2;
	**n2 = tmp;

}
// ※ swap2은 main의 n1도 접근가능하며 heap에도 접근가능
//	 주로 main의 n1의 값도 바뀌어야하는 경우 사용

int main() {
	int* n1 = (int*)malloc(sizeof(int));
	int* n2 = (int*)malloc(sizeof(int));

	*n1 = 10;
	*n2 = 20;

	printf("스왑 1번 전: n1=%d, n2=%d\n", *n1, *n2);
	swap(n1, n2);
	printf("스왑 1번 후: n1=%d, n2=%d\n", *n1, *n2);
	printf("\n\n");
	printf("스왑 2번 전:n1=%d, n2=%d\n", *n1, *n2);
	swap2(&n1, &n2);
	printf("스왑 2번 후:n1=%d, n2=%d\n", *n1, *n2);


	free(n1);
	free(n2);





}