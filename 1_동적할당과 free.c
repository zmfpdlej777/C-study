#include<stdio.h>
#include<stdlib.h>

//동적 할당 : 프로그램이 실행 중에도 동적으로 메모리를 추가구성할 수 있는것.
//순서 
// 1) 공간 생성 : malloc()
// 2) malloc()은 생선한 공간의 주소를 반환 => 포인터 변수에 저장
// 3) malloc()앞에 'void*, int* ..' 형식으로 반환 => 꼭 포인터 자료형에 맞게 형변환 해야한다.

int main() {

	int* ptr = (int*)malloc(4); //4byte만큼 heap영역에 공간 생성
// [   2   ]    [3 ][	1    ]  //**main변수의 자료형과 heap변수의 자료형을 꼭 맞출것**
//  => heap내에 공간이 할당된 주소를 main의 ptr변수에 저장한다.

	*ptr = 10; //heap에 만들어놓은공간에 '10'이 들어간다.
	printf("%d\n", *ptr);

	//ptr은 main의 지역변수 : 함수가 종료되면 사라진다.
	//하지만 heap영역에 동적할당된 공간은 제거되지 않는다.

	free(ptr); //free(주소); : 동적할당된 공간을 삭제시켜준다. (동적할당 해제)


	printf("%d\n", ptr); //주소는 기억하는데 heap안에 있던 값이 없어서 쓰레기값이 출력됨












}