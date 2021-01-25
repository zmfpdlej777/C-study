//����3.Score Ŭ������ �������� ����.
//- private �������
//�̸�, �˰���, �ΰ�����, �̻����, ����, ��� - �Ϲ� ����
//�˰���_�Ѱ�, �ΰ�����_�Ѱ�, �̻����_�Ѱ� - static ����
//����_�Ѱ�, ���_�Ѱ�, �л���_ī��Ʈ - static ����
//- public ����Լ�
//������ - ������� �ʱ�ȭ
//showData - ������� ���� ���
//showTotal - ����������� �Ѱ� ���, static �Լ�
#include<iostream>
using namespace std;
class Score {
private:
	char* name;
	int ar, ai, math, sum; //������ �ٲ�� ����,�Ѱ赵 �ٲ��� �� = ����ƽ����?
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

	void shData() {//��� ���� ���� ���
		cout << name << "\t" << ar << "\t" << ai << "\t" << math << "\t" << this->get_sum() << "\t" << this->get_avg() << endl;
	}
	static void shTotal() {//��� �������� �Ѱ� ���, static �Լ�

	}

};

//static
int Score::allsum =0;
int Score::num = 0;

int main(void) {
Score s1("�嵿��", 100, 100, 100);
s1.shData();
//Score s2("����", 98, 78, 100);
//Score s3("������", 28, 78, 30);
//Score s4("�Ѱ���", 100, 92, 82);



	return 0;
}


//(��� ���)	
//�̸�		�˰���		�ΰ�����		�̻����		����		���
//--------------------------------------------------------------
//�嵿��		100			100			100			300		100
//����		98			78			100			276		92
//������		28			78			30			136		45.3333
//�Ѱ���		100			92			82			274		91.3333
//==============================================================
//�Ѱ�		326			348			312			986		82.1667