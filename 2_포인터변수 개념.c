#include<stdio.h>

int main() {
	int num = 10;
	int num2 = 20;
	
	printf("num의 주소 : %p\n", &num);
	printf("num의 값 : %d\n", *&num); //<=이게 되네 ; 간접참조 : 주소를 통해서 값에 접근
	printf("num=%d\n", num);	//직접참조 : 변수 이름을 통해서 직접 값에 접근
	//int* pnum = &num;

	//정적 할당 : 언어로 미리 공간을 고정해두고 할당
	//동적 할당 : 프로그램을 실행한 상태에서 유동적으로 크기를 추가/제거할 수 있는 공간

	int* pnum; //빈 포인터 변수
	// *pnum=&num;
	pnum = &num; //pnum이라는 포인터 변수에 num의 주소를 할당할때 작성법.
				// 위의 *pnum은 에러! 조심!

	printf("*pnum=%d\n", *pnum); //''pnum자체가 이미 num의 주소이기 떄문에 num의 값을 보고싶으니까 참조연산을 붙이는겨''

	pnum = &num2;
	printf("*pnum=%d\n", *pnum); // pnum의 값이 바뀌니까 값이 가르키고 있는 변수의 값도 바뀔수밖에..
	//**포인터 변수는 변수이기 때문에 마지막에 저장된 값을 저장한다


	*pnum = 200; //pnum이 가리키는 변수에 값을 200으로 바꿔라
	printf("num2=%d\n", num2);

	pnum = &num; //다시 pnum의 값을 num의 주소로 바꿈 => num2가 아님!
	*pnum = 1000;
	printf("num=%d\n", num);









}