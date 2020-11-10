#include<stdio.h>
#include<stdlib.h>

//변수 : 데이터를 저장하는공간
//배열 : 같은 자료형으로 메모리상 연속된 공간
//구조체 : '다른 자료형'을 모아서 새로 만들어낸 자료형 (사용자정의 자료형)

	struct people { //헤더파일에 만들면 쌉가능
		char name[20]; //문자배열
		int age;	   //정수
		double ki; //실수

	};
	typedef struct people People; //클래스 앞글자는 대문자 국룰

	void showpeople(People someone) {
		printf("이름 : %s, 나이 : %d, 키 : %.1lf\n", someone.name, someone.age, someone.ki);
	}


int main() {
	char name[20] = "홍길동";
	int age = 15;
	double ki = 176.6;

	struct people p1 = { "홍길동",15,180.1 };
	struct people p2 = { "야스오",18,175.6 };
	People p3 = { "요네",20,178.8 };

	printf("%s,%d,%.1lf\n", p1.name,p1.age,p1.ki);
//	↑↑ 구조체를 출력하는 방법 ↓↓
//  = 멤버변수(구조체 내부 변수)를 참조할때는 '구조체.(dot)멤버변수'로 출력한다.
//  ㄴ> 출력구문이 번거로우니 함수화 시키자!
	showpeople(p2);
	showpeople(p3);
	
	


}