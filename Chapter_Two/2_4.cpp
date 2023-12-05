//输出树的高度
#include <iostream>
#include<cmath>
using namespace std;
#define change 12


float cchange(float g,int flag){

    //一英尺等于12英寸
    int flag_=flag;//用户选择
    
    float l;//接受用户输入量
    l=g;
    float a;//转化量
    if (flag_==1)
    {
        a=l*change;
        //cout<<"化成英寸为："<<fixed<< setprecision(3)<<a<<endl;
    }
    else if (flag_==2)
    {
        a=l/change;
        //cout<<"化成英尺为："<<fixed<< setprecision(3)<<a<<endl;
    }
    else if(flag_==3){

         return l;

    }
    return a;

}
int main(){

    float h; //眼睛平视量角器的高度h
    float d; //自己与树之间距离d
    int   angle; //夹角
    int   flag;  //用户自己决定是否需要转化尺寸
    float real_h; //实际树高
    cout<<"请输入眼睛平视量角器的高度h（英寸）"<<endl;
    cin>>h;
    h=cchange(h,2);
    
    cout<<"请输入您的选择\n:1.输入英尺转换英寸\n2.输入英寸转换英尺\n3.输入的是英尺无需转换"<<endl;
    cin>>flag;
    cout<<"自己与树之间距离d（英寸或英尺）"<<endl;
    cin>>d;
    d=cchange(d,flag);

    cout<<"请输入夹角"<<endl;
    cin>>angle;

    real_h=h+d*tan(angle);

    cout<<"树高为："<<real_h<<"英尺"<<endl;

    system("pause");
    return 0;

}