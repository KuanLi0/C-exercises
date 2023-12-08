#include<iostream>
using namespace std;
#include<iomanip>

int main() {
	int a;//接受用户输入的i值
	cout << "请输入一个整数" << endl;
	cin >> a;
	int b = ~a; //p取反操作
	int c = b + 1; //加1

	cout << hex <<setfill('0') << setw(8) << a<<"  " << b<<"  " << c << endl;  //十进制

	cout << dec << setfill(' ')<< setw(8) << a << "  " << setw(8) << b << "  " << setw(8) << c << endl;//十六进制
	system("pause");
	return  0;

}