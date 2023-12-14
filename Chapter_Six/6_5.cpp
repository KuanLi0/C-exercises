#include<iostream>
using namespace std;
#include<iomanip>
#include <cmath>
//修改第3题，但如果一开始没有使用智能数组，这一次使用智能指针存储数组。
//聪明的学生应该已经知道不能使用低级内存分配技术……


int main(){
    int n=0;
    cout<<"请输入数组大小："<<endl;
    cin>>n;
    float sum=0;
    auto pdata{make_unique<float[]>(n)};

    for(int i=0;i<n;i++){

        pdata[i]=(float(1)/(float(i+1)*(i+1)));//需要把1强制转换
    }
    for (int i = 0; i < n; i++)
    {
        
        sum+=pdata[i];
      
    }
    sum=sum*6;
    sum=sqrt(sum);
    cout<<"最后的值为："<<sum<<endl;
    system("pause");
    return 0;

}