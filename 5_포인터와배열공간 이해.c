#include<stdio.h>

//변수 : 데이터를 저장하는 공간
//배열 : 같은 자료형으로 '메모리상 연속'된 공간
//포인터변수 : 주소를 저장하는 공간

int main() {
	int num = 10;
	int* pnum = &num;

	int arr[5] = { 10,20,30,40,50 }; //20byte짜리 공간
	int* parr = arr;	//배열의 이름은 시작 주소가 된다. 배열은 &필요없다.
	
	printf("arr=%p\n", arr);
	printf("arr+1=%p\n", arr+1); //주소 연산은 자료형 크기만큼 곱해서 더해진다.
								 // 즉 +1은 x*4이 되어 4가 늘어남 : 1칸에 4byte이기 때문!

	printf("*arr=%d\n", *arr); //시작주소값의 변수를 가져옴
	printf("*arr+1=%d\n", *arr+1); //*arr을 10으로 가져온 뒤, 1을 더하기 때문에 11이 나옴
	printf("*(arr+1)=%d\n", *(arr+1)); //*arr을 가져오기 전에(=arr[1]) 1(4byte)를 더해 20(=*arr[2])이 나온다

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	//주소연산으로 배열 출력
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(arr+i));
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		printf("%d ", *(parr + i));
	} //parr은 arr의 시작주소를 저장해놨기 때문에 가능!


}