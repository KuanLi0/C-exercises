//1.编写一个程序，输出从1开始到用户输入的数字之间所有奇数的平方。

#include<iostream>
using namespace std;
#include<string>
int main() {

	cout << "请您输入一个整数：" << endl;
	int a=0;//用户输入值
	cin >> a;
	int i = 0;//让i去逼近a
	while (i<=a)//把0~a之间的数遍历一个编
	{
		if (i % 2 != 0) {//判断是否为奇数。
			cout << i * i << endl;
		}
		i++;
	}
	cout << "输出完毕！" << endl;
	system("pause");
	return 0;

}