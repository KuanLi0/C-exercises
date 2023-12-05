//计算圆的面积
#include<iostream>
using namespace std;
#define  PI  3.14
int main(){
    int r=0;//圆的半径
    cout<<"请输入圆的半径"<<endl;
    cin  >> r;
    int area =PI*r*r;//计算圆的面积
    cout<<"圆的面积为："<<area<<endl;
    system("pause");
    return 0;
}