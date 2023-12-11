// 7.创建一个程序，读取并存储与产品相关的任意记录序列。每个记录都包含3项——整型的产品号、数量和单价，
// 例如产品号是1001、数量是25、单价是$9.95。因为现在还没有介绍复合类型，所以只需要使用3个不同的、
// 类似数组的序列来代表这些记录。程序应在单独一行上输出每个产品，包括总成本。在最后一行输出所有产品的总成本。
// 列应对齐，输出如表5-1所示。


#include<iostream>
using namespace std;
#include<iomanip>
#include<vector>

int main(){

    vector<int> v1;//存储产品号
    vector<int> v2;//存储数量
    vector<float> v3;//存储单价
    v1.push_back(1001);
    v1.push_back(1003);
    v2.push_back(25);
    v2.push_back(10);
    v3.push_back(9.95);
    v3.push_back(15.50);
    cout<<"\t产品\t"<<"\t数量\t"<<"\t单价\t"<<"\t成本\t"<<endl;
    for(int i=0;i<2;i++){
        cout<<"    "<<v1[i]<<"    \t\t"<<v2[i]<<"    \t\t"<<v3[i]<<"\t\t"<<v2[i]*v3[i]<<endl;

    }
    cout<<"       \t\t\t\t\t\t\t"<<v2[0]*v3[0]+v2[1]*v3[1]<<endl;
    system("pause");
    return 0;

}