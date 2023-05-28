#include <iostream>
#include <vector>
#include <string>
using namespace std;




class UI {
private:
	int i4 = 0;
	int i5 = 0;
	int q6 = 0;
	int q7 = 0;
	int q8 = 0;
public:
	void seti4(bool a) {
		i4 = a;
	}
	void seti5(bool a) {
		i5 = a;
	}
	bool geti4(int a) {
		return i4;
	}
	bool geti5(int a) {
		return i5;
	};
	void setq6(bool a) { q6 = a; }
	void setq7(bool a) { q7 = a; }
	void setq8(bool a) { q8 = a; }
	bool getq6(int a) {
		return q6;
	}
	bool getq7(int a) {
		return q7;
	}
	bool getq8(int a) {
		return q8;
	}
};




class Container {
private:
	int i1;
	int i2;
	int i3;
	int i4;
	char n;
public:
	void cina() {
		int n1;
		int n2;
		int n3;
		int n4;
		cout << "details in 1 container: ";
		cin >> n1;
		cout << endl;
		seti1(n1);

		cout << "details in 2 container: ";
		cin >> n2;
		cout << endl;
		seti2(n2);

		cout << "details in 3 container: ";
		cin >> n3;
		cout << endl;
		seti3(n3);
		//Set_N3Res();

		cout << "details in 4 container: ";
		cin >> n4;
		cout << endl;
		seti4(n4);
	}

	int a1;
	int a2;
	int a3;
	int a4;
	
	
	void setn(char v) {
		n = v;
	}
	char getn() {
		return n;
	}
	void seti1(int a) { i1 = a; }
	void seti2(int a) { i2 = a; }
	void seti3(int a) { i3 = a; }
	void seti4(int a) { i4 = a; }
	int geti1() { return i1; }
	int geti2() { return i2; }
	int geti3() { return i3; }
	int geti4() { return i4; }
	//void Set_N3Res() {
	//	n3res = n3;
	//}
	//int Get_N3Res() {
	//	return n3res;
	//}
};




class Sensor {
private:
	int i0;
	int i1;
	int i2;
	int i3;
public:
	void seti0(bool a) {i0 = a;}
	void seti1(bool a) {i1 = a;}
	void seti2(bool a) {i2 = a;}
	void seti3(bool a) {i3 = a;}
	bool geti0() { return i0;}
	bool geti1() { return i1;}
	bool geti2() { return i2;}
	bool geti3() { return i3;}
};




class Conveyor {
private:
	int q0;
	int q1;
	int q2;
	int q3;
public:
	void setq0(char a) { q0 = a; }
	void setq1(char a) { q1 = a; }
	void setq2(char a) { q2 = a; }
	void setq3(char a) { q3 = a; }
	char getq0() { return q0; }
	char getq1() { return q1; }
	char getq2() { return q2; }
	char getq3() { return q3; }
};




class Controller{
public:
	UI ui{};
	Container cntr{};
	Sensor sens{};
	Conveyor cnvr{};
	void shag1() {
		int n;
		cntr.cina();
		cout << "press 1 to start: ";
		cin >> n;
		if (n == 1) {
			ui.seti4(1);
			cnvr.setq0(1);
			//Rec("1)");
			shag2();
		}
	}
	void shag2() {
		ui.seti4(0);
		if (cntr.geti1() != 0) {
			cntr.seti1(cntr.geti1() - 1);
			cntr.setn(1);
			shag2b();
		}
		else if (cntr.geti2() != 0) {
			cout << "container 1 is empty. " << endl;
			cntr.seti2(cntr.geti2() - 1);
			cntr.setn(2);
			shag2b();
		}
		else shag2a();
	}
	void shag2a() {
		cnvr.setq0(0);
		sens.seti1(0);
		ui.setq6(1);
		ui.setq7(0);
		ui.setq8(1);
		cout << "container is empty. " << endl;
		cout << "stop coveyor. " << endl;
		cout << "end of the cycle. " << endl;
		//Rec("2a)");

	}
	void shag2b() {
		sens.seti1(1);
		cnvr.setq1(1);
		//Rec("2b)");
		if (cntr.getn() == 1) {
			cout << "Container is not empty. In container num 1 " << cntr.geti1() << " details." << endl;
			cnvr.setq1(1);

			shag3();
		}
		else {
			cout << "Container is not empty. In container num 2 " << cntr.geti2() << " details." << endl;
			cnvr.setq1(1);
			shag3();
		}
	}
	void shag3() {
		sens.seti0(0);
		sens.seti1(0);
		cnvr.setq1(0);
		cout << "on the way to printing " << endl;
		shag4();
		//Rec("3)");
	}
	void shag4() {
		sens.seti3(1);
		cnvr.setq3(1);
		cout << "Printing. " << endl;
		//Rec("4)");
		shag5();
	}
	void shag5() {
		sens.seti3(0);
		cnvr.setq3(0);
		cout << "Moving forward along the conveyor. " << endl;
		//Rec("5)");
		shag6();
	}
	void shag6() {
		cout << "The end of the conveyor. " << endl;
		sens.seti0(1);
		cnvr.setq2(1);
		//Rec("6)");
		shag7();
	}
	void shag7() {
		sens.seti0(0);
		cnvr.setq2(0);
		if (cntr.geti4() != 0 && cntr.getn() != 3) {
			shag7b();
		}
		else shag7a();
	}
	void shag7a() {
		cnvr.setq0(0);
		sens.seti2(2);
		ui.setq6(0);
		ui.setq7(1);
		ui.setq8(1);
		//Rec("7a)");
		cout << "Container is full. " << endl;
		cout << "End of the cycle. " << endl;
	}
	void shag7b() {
		sens.seti0(0);
		cntr.seti4(cntr.geti4() - 1);
		if (cntr.geti4() == 0) { shag7a(); }
		else{
			cout << "Container is not full. Container 4 can fit " << cntr.geti4() << " more details" << endl;
			//Rec("7b)");
			shag2();
		}
		
	}
	void shag8() {
		cout << "Stop of the process. " << endl;
	}
	void shag9() {
		cout << "Unknown state. The cycle needs to be stopped." << endl;

	}
	
};



int main() {
	
	Controller controller{};
	controller.shag1();

	return 0;
};