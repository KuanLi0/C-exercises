//编写一个程序，提示用户输入介于0美元和10美元之间的钱款(允许使用小数)。其他任何数额都会被拒绝。
//判断输入的钱款分别包含多少个25美分、10美分、5美分和1美分。读者需要知道1美元(8)等于100美分(c)。
//把该信息输出到屏幕上，并确保输出结果在语法上是正确的(例如，如果只需要1美元，输出就应写为1 dollar，而不是1 dollars)。

#include<iostream>
using namespace std;
#include<iomanip>


int main(){
    float d;//美元
    int dc;//美分
    int d25c;//25
    int d10c;//10
    int d5c;//5
    cout<<"请输入您的财富:(0~10)"<<endl;
    cin>>d;
    if(d>=0&&d<=10){
        dc=d*100;
        d25c=dc/25;
        d10c=dc/10;
        d5c=dc/5;
        cout<<"您的财富为："<<d<<(d==1?"dollar":"dollars")<<"\t"<<d25c<<"个25美分"<<"\t"<<d10c<<"个10美分"<<"\t"<<d5c<<"个5美分"<<endl;

    }


    system("pause");
    return 0;

}