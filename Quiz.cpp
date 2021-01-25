//문제3.Score 클래스를 디자인해 보자.
//- private 멤버변수
//이름, 알고리즘, 인공지능, 이산수학, 총점, 평균 - 일반 변수
//알고리즘_총계, 인공지능_총계, 이산수학_총계 - static 변수
//총점_총계, 평균_총계, 학생수_카운트 - static 변수
//- public 멤버함수
//생성자 - 멤버변수 초기화
//showData - 멤버변수 내용 출력
//showTotal - 멤버변수들의 총계 출력, static 함수
#include<iostream>
using namespace std;
class Score {
private:
	char* name;
	int ar, ai, math, sum; //점수가 바뀌면 총점,총계도 바뀌어야 함 = 스태틱쓰라?
	double avg;
	static int ar_sum, ai_sum, math_sum;
	static int allsum, num;
	static double avgavg;
public:
	Score(const char* name, int ar, int ai, int math):name(new char[strlen(name)+1]),ar(0),ai(0),math(0) {
		set_name(name);
		set_ar(ar);
		set_ai(ai);
		set_math(math);
		this->set_sum();
		this->set_avg();
		num++;
	}
	~Score() {
		delete[] name;
	}
	//set
	void set_name(const char *name) {
		if (this->name) delete[] this->name;
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name)+1, name);
	}
	void set_ar(int n) {
		ar = n;
	}
	void set_ai(int n) {
		ai = n;
	}
	void set_math(int n) {
		math = n;
	}
	void set_sum(){
		sum=ar+ai+math;
	}
	void set_avg() {
		avg = sum / num;
	}
	//get
	char* get_name() {
		return name;
	}
	int get_ar() {
		return ar;
	}
	int get_ai() {
		return ai;
	}
	int get_math() {
		return math;
	}
	int get_sum() {
		return sum;
	}
	double get_avg() {
		return avg;
	}

	void shData() {//멤버 변수 내용 출력
		cout << name << "\t" << ar << "\t" << ai << "\t" << math << "\t" << this->get_sum() << "\t" << this->get_avg() << endl;
	}
	static void shTotal() {//멤버 변수들의 총계 출력, static 함수

	}

};

//static
int Score::allsum =0;
int Score::num = 0;

int main(void) {
Score s1("장동건", 100, 100, 100);
s1.shData();
//Score s2("원빈", 98, 78, 100);
//Score s3("김태희", 28, 78, 30);
//Score s4("한가인", 100, 92, 82);



	return 0;
}


//(출력 결과)	
//이름		알고리즘		인공지능		이산수학		총점		평균
//--------------------------------------------------------------
//장동건		100			100			100			300		100
//원빈		98			78			100			276		92
//김태희		28			78			30			136		45.3333
//한가인		100			92			82			274		91.3333
//==============================================================
//총계		326			348			312			986		82.1667