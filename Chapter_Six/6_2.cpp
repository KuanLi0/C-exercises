//修改第1题，在第一次输出数组的值时，不使用循环计数器访问数组值，而是使用指针递增(使用++运算符)遍历数组。
//之后，使用指针递减(使用--运算符)以逆序遍历数组。

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
        a++;//遍历数组下一个元素
     } 
     a--;
   for(int i=1;i<=50;i++){//逆序输出
        
        cout<<setw(5)<<*a;
      
       if(i%10==0){//十个一行
           cout<<endl;
        }
        a--;//遍历数组下一个元素
     } 



    system("pause");
    return 0;

}