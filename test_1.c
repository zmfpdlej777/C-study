#include<stdio.h>

int main() {
	printf("Hello C Lang\n"); 
	printf("안녕 C언어\n");
	// C언어의 prinf()는 줄바꿈을 내포하고 있지 않다.
	// ""안에 \n은 줄바꿈(=엔터키) 역할을 한다.
	printf("집에서 실습한 내용 집에서 열기\n");
	printf("1. 실습한 Project 폴더를 챙겨간다.\n");
	printf("2. 프로젝트 또는 솔루션 열기 선택\n");
	printf("3. 가져간 Project 폴더 안의 이름.sln을 선택하여 열기\n");
	printf("** .sln을 여는 방식은 비스 버전이 다르면 잘 안열리는 경우가 있다.\n");
	printf("이럴때는 Project폴더 안의 소스코드파일(이름.c)를 챙겨 가서 새로운 프로젝트에 복붙한다.");
	return 0;
	
} //ctrl + F5 