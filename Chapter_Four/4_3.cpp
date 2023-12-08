//3.创建一个程序，提示用户输入一个介于1和100之间的数字(允许输入小数)。
//使用嵌套的if语句判断该数字是否在设定的范围之内。如果是，再判断该数字是否大于、小于或等于50。程序应输出相应的信息。

#include<iostream>
using namespace std;
#include<iomanip>

//判断函数
void fun1(){
    float a;
    bool flag;
    cout<<"请输入一个1～100的数："<<endl;
    cin>>a;
    if(a>=1&&a<=100){
        if (a>50)
        {
            cout<<"a>50"<<endl;
        }
        else if(a==50){
            cout<<"a==50"<<endl;

        }
        else{
            cout<<"a<50"<<endl;
        }
    }
    else {
        cout<<"不在范围内！"<<endl;
    }
    
  

    
}
int main(){


    fun1();
    system("pause");
    return 0;

}