//编写一个程序，提示用户输入两个整数，但是拒绝任何负数或0。然后，检查其中一个正数是否是另一个正数的倍数。
//例如，63是1、3、7、9、21或63的倍数。注意，应该允许用户以任意顺序输入数字。即，用户先输入大数还是小数并不重要，程序在两种情况下都应该正确工作!

#include<iostream>
using namespace std;
#include<iomanip>

//判断是否是倍数
bool fun1(int a ,int b){

    if(a>=b){  //a>b的情况
        if(a%b==0) //判断是否整除
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else{

        if(b%a==0)     //判断是否整除
        {
            return true;
        }
         else
        {
            return false;
        }

    }

}


//接受用户数据
bool fun2(){
    int a,b;
    bool flag;
    while (a<=0&&b<=0)//不合格继续输入
    {
          cout<<"请输入俩个正整数"<<endl;
          cin>>a>>b;
    }
    flag=fun1(a,b); //调用判断函数
  
   return flag;
    
}






int main(){


    bool flag;
    flag=fun2();
    if(flag){
        cout<<"可以被整除！"<<endl;
    }
    else{

        cout<<"不可以被整除！"<<endl;
    }

    system("pause");
    return 0;

}