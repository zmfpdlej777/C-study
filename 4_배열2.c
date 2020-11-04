#include<stdio.h>
void printfArray(int arr[]) {
	printf("arr=");
	for (int i = 0; i < 3; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int n = 10;				   //단일 변수
	int arr[3] = { 10,20,30 }; //배열
				//  0  1  2


	printfArray(arr);		//배열을 출력하는 구문은 직접 반복으로 출력해야 한다
							// => 코드의중복 발생 => 함수로 구현
	
	n = 20;
	printf("n=%d\n", n);

	printfArray(arr);
	arr[0] = 100;

	printfArray(arr);







}