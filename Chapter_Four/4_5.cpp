//在Ex4_06.cpp中，在main()函数的末尾添加一些代码，输入一条额外消息。如果只有一只老鼠，输入这种形式的一条消息:
// It is a brown/white mouse。如果有多只老鼠，则编写一条语法上正确的消息，形式如下: Of these mice,N is alare brown mouse/mice。
//如果没有老鼠，则不需要输出新消息。恰当地混合使用条件运算符和ifielse语句。




#include<iostream>
using namespace std;
#include<iomanip>


int main(){

    int mice ;// count of all mice
    int brown ;//count of brown mice
    int white ;//count of white mice
    cout <<"How many brown mice do you have? ";
    cin >> brown;
    cout <<"How many white mice do you have? ";
    cin>> white;
    mice = brown + white;
    if(mice==1){

        cout << "It is a " <<(brown == 1? " brown" : "white")<<" mouse" <<endl;
    }
    else if(mice>1)
    {

         cout << "Of these mice,  "<<brown <<(brown == 1? " a" : "are")<<(brown == 1?" mouse":"mice") <<endl;
    }
    
    system("pause");
    return 0;

}