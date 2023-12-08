//编写一个程序，提示用户输入两个整数，然后使用if-else语句输出一条消息，说明这两个整数是否相等。
#include<iostream>
using namespace std;
#include<iomanip>


void  fun1(){

    int a;
    int b;
    cout<<"请输入两个整数:"<<endl;

    cin>>a>>b;
    if(a==b){
        cout<<"这两个数相等！"<<endl;
    }
    else{
        cout<<"这两个数不相等。"<<endl;

    }
    
}
int main(){

    fun1();
    system("pause");
    return 0;

}