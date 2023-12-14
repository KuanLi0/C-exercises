//1.编写一个程序，声明并初始化一个数组，其中包含前50个奇数。使用指针表示法输出该数组中的数字，每一行显示10个数字。
//再使用指针表示法以逆序输出这些数字。


#include<iostream>
using namespace std;
#include<iomanip>


int main(){

    int arr[50];//定义
   
    int j=1;//奇数
    for (int i = 0; i < 50; i++)//初始化
    {
       arr[i]=j;
       j+=2;
    }
    int *a=arr;
   for(int i=1;i<=50;i++){//输出
        
        cout<<setw(5)<<*a;
      
       if(i%10==0){//十个一行
           cout<<endl;
        }
        a=a+1;//遍历数组下一个元素
     } 
     a=a-1;
   for(int i=1;i<=50;i++){//逆序输出
        
        cout<<setw(5)<<*a;
      
       if(i%10==0){//十个一行
           cout<<endl;
        }
      a=a-1;//遍历数组下一个元素
     } 

    system("pause");
    return 0;

    }