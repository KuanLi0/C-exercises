#include<iostream>
using namespace std;
#include<iomanip>
#include <cmath>

int main(){
    //智能指针
    auto  f {make_unique<float>(0)};
    int size=0;
    cout<<"请输入数组的大小："<<endl;
    cin>>size;
    float sum=0;
    for(int i=0;i<size;i++){
       
        *(f.get()+i)=(float(1)/(float(i+1)*(i+1)));//需要把1强制转换
        
    }
    for (int i = 0; i < size; i++)
    {
     
        sum+=*(f.get()+i);

    }
    sum=sum*6;
    sum=sqrt(sum);
    cout<<"最后的值为："<<sum<<endl;
    system("pause");
    return 0;

}