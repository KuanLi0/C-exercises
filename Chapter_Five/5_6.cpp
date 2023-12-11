//创建一个vector◇容器，其元素包含从1开始到用户输入的任意上界的整数。
//输出向量中不是7或13的倍数的元素值。在每一行上输出10个值，各个值在列中对齐。



#include<iostream>
using namespace std;
#include<iomanip>
#include<vector>

int main(){

    int a;//用户输入值
    vector<int> v1{1};
    cout<<"请输入一个大于1的整数："<<endl;
    cin>>a;
    for(int i =2;i<=a;i++){

        v1.push_back(i);
    }
 
    int g=0;   //十个一换
    for(int i=0;i<v1.size();i++){
        if(v1[i]%7==0||v1[i]%13==0){
            continue;
        }
        cout<<v1[i]<<"\t";
        g++;
        if(g==10){
            cout<<endl;
            g=0;
        }
    }

    system("pause");
    return 0;

}