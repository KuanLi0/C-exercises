#include<iostream>
using namespace std;
#include<iomanip>
#define change 12

//定义英尺转英寸函数
double change_var(double g){

    //一英尺等于12英寸
    double l;//接受用户输入量
    l=g;
    double a;//转化量
    a=l*change;
        //cout<<"化成英寸为："<<fixed<< setprecision(3)<<a<<endl;
    return a;
}


int main(){

    double l;//搁板的长度
    double d;//搁板的深度
    int s;   //盒子的边长

    cout<<"请输入搁板的长度和深度：（英尺）"<<endl;
    cin>>l>>d;
    l=change_var(l);
    d=change_var(d);

    cout<<"请输入盒子的边长：（英寸）"<<endl;
    cin>>s;

    int l1=int(l/s); //一排最多多少个
    int d1=int(d/s);//一列最多多少个

    long result =l1*d1;

    cout<<"搁板最多可以放置： "<<result <<"个盒子！"<<endl;

    system("pause");
    return 0;

}