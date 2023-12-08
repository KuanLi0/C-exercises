#include<iostream>
using namespace std;


int main(){

    int a =10;
    int b =11;
    cout<<"交换前a："<<a<<"\tb:"<<b<<endl;


        a+=b;  //a=a+b
        b=a-b; //b=a+b-b=a
        a-=b;   //a=a+b-b
     cout<<"交换后a："<<a<<"\tb:"<<b<<endl;
    system("pause");
    return 0;
}