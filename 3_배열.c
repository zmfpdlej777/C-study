#include<stdio.h>
//배열(array) : 같은 자료형으로 메모리상 연속된 공간
// 1) 여러 데이터를 묶어서 관리하는 형태


int main() {
	int n1=10 , n2=20;						//단일 변수 선언
	int arr[5] = {10,20,30,40,50};		    //배열 선언
	//             0  1  2  3  4              배열의 index: 순서번호
	printf("n1=%d\n", n1);					//일반 변수 참조
	printf("arr[0]=%d\n", arr[0]);			//배열의 요소 참조
	printf("arr[3]=%d\n", arr[3]);
	//printf("arr[5]=%d\n", arr[5]);		  배열의 마지막 index는 '배열크기-1'

	for (int i = 0; i < 5; i++) {			//배열의 요소를 모두 출력하려면 반복문을 사용한다
		printf("%d ", arr[i]);				// ? 파이썬에서 arr[0:5]는 없나?


	}








}