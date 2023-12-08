//编写一个程序，提示用户输入一个字母。使用标准库函数判断它是否为元音字母，是否为小写字母，输出结果。
//最后，输出小写字母，再把其字符编码输出为一个二进制值。
//大写字符A到Z的ASCII代码分别是065到090，字符加一，代码加一。
//小写字符a到z的ASCII代码分别是097到122，依旧是字符加一，代码加一。

#include<iostream>
using namespace std;
#include<iomanip>


int main(){

    char i;
    cout<<"请输入一个字符："<<endl;
    cin>>i;
    if(int(i)>=97&&int(i)<=122){

        if(int(i)==97||int(i)==101||int(i)==105||int(i)==111||int(i)==117){

            cout<<"这是一个元音字符二进制为："<<endl;
        
            for (int a = 7; a>=0; a--)
            {
          
                cout<<((i>>a)&0x01);
               
            }
            
        }
        else{

            cout<<"这是一个小写"<<endl;
        }


    }else{

        cout<<"这是一个大写"<<endl;
    }

    system("pause");
    return 0;

}