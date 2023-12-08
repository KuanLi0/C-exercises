//编写一个程序，仅使用条件运算符确定输入的整数是否是20或小于20;大于20且不大于30;大于30但不超过100;或者大于100。
#include<iostream>
using namespace std;
#include<iomanip>


int main(){
    int a;
    cout<<"请输入一个整数："<<endl;
    cin >>a;
    cout<<"这个数"<<(a==20? "=20":(a<20?"小于20":(a<30?"大于20小于30":(a<100?"大于30小于100":"大于100"))))<<endl;

    system("pause");
    return 0;

}