//英尺转英寸
#include<iostream>
#include <iomanip>
using namespace std;
#define change 12

int main(){
    //一英尺等于12英寸
    cout<<"请输入您的选择\n:1.输入英尺转换英寸\n2.输入英寸转换英尺"<<endl;
    int flag=0;//用户选择
    cin >>flag;
    
    float l;//接受用户输入量
    cout<<"请输入数值"<<endl;
    cin>>l;
    float a;//转化量
    if (flag==1)
    {
        a=l*change;
        cout<<"化成英寸为："<<fixed<< setprecision(3)<<a<<endl;
    }
    else if (flag==2)
    {
        a=l/change;
        cout<<"化成英尺为："<<fixed<< setprecision(3)<<a<<endl;
    }
    
    system ("pause");
    return 0;

}