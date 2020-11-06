#include<stdio.h>
void func(int n1, int n2) {
	n1 += 10;
	n2 += 20;
	printf("func내부 n1=%d, n2=%d\n", n1, n2);

}
void pfunc(int* n1, int* n2) {
	*n1 += 10;
	*n2 += 20;
	printf("func내부 n1=%d, n2=%d\n", *n1, *n2);
}



int main() {
	int n1 = 10, n2 = 20; //가정한 주소 : n1=0x100 / n2=0x200
	printf("함수 호출 전 n1=%d, n2=%d\n", n1, n2);
	func(n1, n2); //call by valuse : 값을 복사해서 넘겨줌
	printf("함수 호출 후 n1=%d, n2=%d\n\n", n1, n2);

	printf("함수 호출 전 n1=%d, n2=%d\n", n1, n2);
	pfunc(&n1, &n2); //pfunc(0x100,0x200) : 주소값을 넘김 call by value
	printf("함수 호출 후 n1=%d, n2=%d\n\n", n1, n2);

	// 위의 경우는 n1,n2값의 복사본을 가져와 갖고 노는것이지만,
	// 밑의 경우는 주소를 전달한 것이기 때문에, 함수가 직접 n1,n2의 주소에
	//찾아가 연산을 한다 => *지역변수(원본)가 바뀜!

	// ※결론 : 함수에 값을 전달하면 해당 함수의 실제 원본을 '바꿀수는 없음'.
	// 함수에 주소를 전달하면 주소를 통해 실제 원본값을 찾아가 '바꿀수있음'
	// C언어는 이 방법이 아니면 원본을 바꿀수 있는 방법이 없다!!









}