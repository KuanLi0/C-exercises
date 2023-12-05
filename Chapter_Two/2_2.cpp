//计算圆的面积改进
#include<iostream>
#include <iomanip>
using namespace std;
#define  PI  3.141592653589793283 

int main(){
    double flag=0;//精确度
    cout<<"请输入您想要的精确度"<<endl;
    cin  >> flag;

    double r=0;//圆的半径
    cout<<"请输入圆的半径"<<endl;
    cin  >> r;

    double area;//计算圆的面积
    area=PI*r*r;
   
    cout <<"圆的面积为："<< fixed<< setprecision(flag) << area <<endl;//50.2500

    system("pause");
    return 0;
}