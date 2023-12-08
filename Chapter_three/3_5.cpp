#include<iostream>
using namespace std;
#include<iomanip>
//枚举
int main(){

    enum  class Color :unsigned long long{Red=0xFF0000,Green=0x00FF00,Yellow=0xFFFF00,Purple=0xA020F0,Blue=0x0000FF
    ,Black=0x000000,White=0xFFFAFA};

    Color c1 =Color::Yellow;
    Color c2 =Color::Purple;
    Color c3 =Color::Green;
   
    cout<<"黄色："<<hex<<static_cast<unsigned long long>(c1)<<endl;
    cout<<"紫色："<<hex<<static_cast<unsigned long long>(c2)<<endl;
    cout<<"绿色："<<hex<<static_cast<unsigned long long>(c3)<<endl;

    system("pause");

    return 0;
}