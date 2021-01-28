#include<iostream>
using namespace std;

class Draw {
	virtual void draw() = 0;
};

class DrawData {
private:
	int height;
	char word;
public:
	DrawData(int h, char w):height(h),word(w) {
		set_h(h);
		set_word(w);
	};
	void set_h(int n) {
		height = n;
	}
	void set_word(char a) {
		word = a;
	}
	int get_h() {
		return height;
	}
	char get_w() {
		return word;
	}

};

class Triangle:public Draw,DrawData {
public:
	Triangle(int n, char w):DrawData(n,w) {

	};
	void draw() {
		for (int i = 0; i < get_h(); i++) {
			for (int j = 0; j<= i; j++) {
					cout << get_w();
			}
			cout << endl;
		}
	}
};

class Pyramid :public Draw, DrawData {
public:
	Pyramid(int n, char w) :DrawData(n, w) {

	}
//        #
//       ###
//      #####
//     #######
//    #########
//   ###########
//  #############
// ###############
//################# 18
	void draw() {
		for (int i = 0; i < get_h(); i++) {
			for (int j = 0; j<2*get_h(); j++) {
				if (j == 2 * get_h() / 2+(i-1)&&j==2*get_h()/j==2+(i+1)&&2*get_h())
					cout << get_w();
				else cout << " ";
			}
			cout << endl;
		}
	}
};
int main(void) {
	Triangle *t = new Triangle(10,'x');
	t->draw();

	Pyramid* p = new Pyramid(9, '#');
	p->draw();


	return 0;
}