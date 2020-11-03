#include<stdio.h>
int abs(int n) {
	int abs;
	if (n > 0) { abs=n; }
	else { abs=n * -1; }
	return abs;

}

void reverse_1(int n){
	int mok;
	for (; n > 0;) {
		mok = n % 10;
		n = n / 10;
		printf("%d", mok);
	}
}

int reverse_2(int n){//////////다시//////////
	int mok,result=0;
	for (; n < 0;) {
		result = result * 10 + n % 10;
		n = n / 10;
	}
	return result;
}
/*선생님 답안
while(n!=0){
result=result*10+n*10
n/=10;}
return result;
}
*/
int main() {
//1. 정수를 입력받아서 절대값을 반환하는 함수 구현 (return O)
	int n;
	printf("정수 입력:");
	scanf_s("%d", &n);
	n = abs(n);
	printf("절대값 : %d\n", n);

//2. 입력받은 수의 거꾸로 수는 출력하는 함수 구현 (return X)
	printf("\n정수 입력 : ");
	scanf_s("%d", & n);

	reverse_1(n);

//3. 입력받은 수의 거꾸로 수를 반환하는 함수 구현 (return O)
	int result;
	printf("\n정수 입력 : ");
	scanf_s("%d", &n);
	result= reverse_2(n);
	printf("\n거꾸로 수 : %d\n", result);


}