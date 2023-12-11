//创建一个程序，使用while循环累加用户输入的数字(个数随机)的整数和。在每次迭代后，询问用户是否完成数字的输入。
//最后输出所有数字的总和和浮点数类型的平均值。
#include<iostream>
using namespace std;
#include<string>
int main() {

	int a = 0;//用户输入值
	int sum = 0;//总和
	float pingtun = 0;//平均值
	int i = 0;//记录输入多少个数字
	int flag = 1;//判断是否结束输入
	while (1)//把0~a之间的数遍历一个编
	{
		cout << "请您输入一个整数：" << endl;
		cin >> a;
		sum += a;
		i++;
		cout << "请问是否结束输入？0：结束 1：继续" << endl;
		cin >> flag;
		if (flag == 0) {
			break;
		}
	}
	pingtun = float(sum)/float(i);
	cout << "输入完毕！" << endl;
	cout << "sum为：" << sum << endl;
	cout << "平均值为：" << pingtun << endl;
	system("pause");
	return 0;

}