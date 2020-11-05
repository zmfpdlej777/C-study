#include<stdio.h>
	//배열의 이름은 상수공간이다.
	//const : 상수화하는 키워드
int main() {
	int num = 10; //변수 num
	const int cnum = 10; // 상수 const
	num = 20;
	//cnum = 20; => 상수 공간은 변경 불가능
	printf("num=%d, cnum=%d\n", num,cnum);

	//배열의 이름은 상수공간이다.
	//배열의이름은 주소값을 가진다.
	int arr[5] = { 10,20,30,40,50 };
	printf("arr=%d\n", arr); //배열이름 출력 : 배열의 메모리 주소를 찾는방법 
	printf("arr=%p\n", arr); //%p = 16진수
	
	//pointer : 주소값에 찾아가 값을 넣어주는 역할

	char word[10] = "apple";
	printf("word=%s\n", word); //%s는 해당 주소부터 null문자전까지 출력하는 서식문자
	printf("word=%p\n", word);
	
	//*배열은 처음부터 const로 되어 있어서 수정이 안되는거임!
	





}