#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"여러가지 함수.h"



int plus(Student s)
{
	s.sum = s.kor + s.eng + s.mat;
	return s.sum;
}
double py(Student s) {
	s.avg = (double)s.sum / 3;
	return s.avg;
}


int main() {
	//아래의 학생 변수에 값을 입력받아 합계 평균 출력
	//입력은 국영수

	Student s1;
	printf("이름 : ");
	scanf_s("%s", s1.name,sizeof(s1.name));
	printf("국어 : ");
	scanf_s("%d", &s1.kor);
	//printf("%d", s1.kor);
	printf("영어 : ");
	scanf_s("%d", &s1.mat);
	printf("수학 : ");
	scanf_s("%d", &s1.eng);
	s1.sum = plus(s1);
	printf("합계 : %d점\n", s1.sum);
	s1.avg = py(s1);
	printf("평균 : %.2lf점\n", s1.avg);


	printf("========인적기록=============\n");
	printf("이름 : %s(%d,%d,%d)\n", s1.name, s1.kor, s1.eng, s1.mat);
	printf("합계 : %d\n", s1.sum);
	printf("평균 : %.2lf\n", s1.avg);

	//스위치케이스,반복문으로 인사작성프로그램
	showinfo(s1);
//  ↑↑ 처음에 안된 이유: tpye~ Studet까지의 선언을 "여러가지함수"내의 함수가 알지를 못해서 
// 실행이 안됨 => .c파일에 .h파일을 include하면 .c파일에 .h파일의 내용을 붙여놓은것과 같지만,
// 반대로 .h파일에는 .c파일의 내용이 없기 때문에 구조체 등의 정의가 없으면 변수선언이 안됬다고 간주.


}