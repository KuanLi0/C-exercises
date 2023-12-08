#include<iostream>
using namespace std;
#include<iomanip>



int main(){
 
    char a[5];//接受字符
    int result;//最终接受
    cout<<"请输入四个字符："<<endl;
    cin>>a;

    result = *(int*)a;//将字符串变为int
    cout<<hex<<result<<endl;
    auto q {255u};//取出数的后八位用
    int temp;//一位位接受result的值
    for(int i=0;i<=3;i++){
        temp= (result >> (i * 8)) & q;//分解字节
        //result = (q<<=a)&result;
        cout<<hex<<temp<<endl;

    }
    system("pause");
    return 0;
}

