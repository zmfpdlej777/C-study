#include<stdio.h>
#include<stdlib.h>

//파일 입출력 : 파일에다 데이터를 쓰거나 읽어오는 것
//파일 출력 : 파일에 데이터를 쓰는것 (보통 개념과 반대)
//파일 입력 : 파엘에서 데이터를 가져오는 것

//*프로그램 기준
//프로그램 -> 파일 : 출력 
//파일 -> 프로그램 : 입력
int main() {
	FILE* fp; //FILE포인터 선언
	fp = fopen("test.txt","w"); // r:읽기(입력) | w:쓰기(출력) | a:추가

	fprintf(fp, "Hello,wolrd ! %d %.2lf\n",10,3.14);
	fclose(fp); //저장을 해야하기때문에 꼭 해줘야함

}