//创建一个程序，从键盘上读取数组的大小，对这个数组动态分配内存，以存储浮点值。
//使用指针表示法初始化数组的所有元素，使索引位置为n的元素值是1/(n+1)(n+1)。使用指针表示法计算元素的总和，对总和乘以6，
//输出结果的平方根。

#include<iostream>
using namespace std;
#include<iomanip>
#include <cmath>

int main(){

    float * f;
    int size=0;
    cout<<"请输入数组的大小："<<endl;
    cin>>size;
    f=(float*)malloc(sizeof(float)*size);
    float sum=0;
    for(int i=0;i<size;i++){

        *f=float(1)/(float(i+1)*(i+1));//需要把1强制转换
        f++;
    }
    for (int i = 0; i < size; i++)
    {
        f--;
        sum+=*f;

    }
    sum=sum*6;
    sum=sqrt(sum);
    cout<<"最后的值为："<<sum<<endl;
    system("pause");
    return 0;

}