//3.创建一个程序，使用do-while循环计算用户在一行上输入的非空白字符的个数。
//在第一次遇到输入中的#字符时，停止计数。


#include<iostream>
using namespace std;
#include<iomanip>


int main(){

    char r;
    int i=0;
    do{

        cout<<"请您输入一个字符："<<endl;
        cin>>r;
        i++;
    }while (r!='#');
   cout<<"一共输入了"<<i<<"个字符！"<<endl;


    system("pause");
    return 0;

}