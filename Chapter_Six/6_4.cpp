
//4.修改第3题，但使用在自由存储区中分配的vector容器。用超过100,000个元素测试程序,结果有什么有趣的地方吗?


#include<iostream>
using namespace std;
#include<iomanip>
#include<vector>
#include <cmath>

int main(){
    vector<float>f;
    int size=0;
    cout<<"请输入数组的大小："<<endl;
    cin>>size;
    float sum=0;
    for(int i=0;i<size;i++){

        f.push_back(float(1)/(float(i+1)*(i+1)));//需要把1强制转换
    }
    for (int i = 0; i < size; i++)
    {
        
        sum+=f[i];
      
    }
    sum=sum*6;
    sum=sqrt(sum);
    cout<<"最后的值为："<<sum<<endl;
    system("pause");
    return 0;

}