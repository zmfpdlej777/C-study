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

int reverse_2(int n){//////////�ٽ�//////////
	int mok,result=0;
	for (; n < 0;) {
		result = result * 10 + n % 10;
		n = n / 10;
	}
	return result;
}
/*������ ���
while(n!=0){
result=result*10+n*10
n/=10;}
return result;
}
*/
int main() {
//1. ������ �Է¹޾Ƽ� ���밪�� ��ȯ�ϴ� �Լ� ���� (return O)
	int n;
	printf("���� �Է�:");
	scanf_s("%d", &n);
	n = abs(n);
	printf("���밪 : %d\n", n);

//2. �Է¹��� ���� �Ųٷ� ���� ����ϴ� �Լ� ���� (return X)
	printf("\n���� �Է� : ");
	scanf_s("%d", & n);

	reverse_1(n);

//3. �Է¹��� ���� �Ųٷ� ���� ��ȯ�ϴ� �Լ� ���� (return O)
	int result;
	printf("\n���� �Է� : ");
	scanf_s("%d", &n);
	result= reverse_2(n);
	printf("\n�Ųٷ� �� : %d\n", result);


}