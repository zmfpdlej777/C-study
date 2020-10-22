#include<stdio.h>

int main()
{
	int it;
	char ch;
	float fl;
	double db;
	//위의 변수 순서대로 입력받아 출력해보세요
	//it =10 ch=c fl=1.2 db=3.1415
	// *주의) 소수점 제어는 출력문에서 한다!
	printf("정수 입력하십쇼:");
	scanf("%d", &it);
	printf("it = %d\n", it);

	rewind(stdin);

	printf("한글자 입력하십쇼:");
	scanf("%c", &ch);
	printf("ch = %c\n", ch);

	rewind(stdin);

	printf("소수 입력하십쇼:");
	scanf("%f", &fl);
	printf("fl = %.1f\n", fl);

	rewind(stdin);

	printf("더블 입력하십쇼:");
	scanf("%lf", &db);
	printf("db = %.4lf\n", db);
	///한번에 입력
	printf("it=%d, ch=%c, fl = %.1f, db= %.4lf\n",it,ch,fl,db);
	//하지만 제대로 출력되지 않음 => **rewind(stdin)의 중요성
	





}