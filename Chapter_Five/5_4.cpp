//使用std:cin.getline(...)，让用户输入最多有1000个字符的C样式字符串。
//使用合适的循环统计用户输入的字符数。然后，编写另外一个循环，按照相反的顺序逐个输出所有字符。
#include<iostream>
using namespace std;
#include<iomanip>


int main(){
    int i=0;//统计字符数
    char a[1001]={'\0'};//初始化
    cout<<"请输入1000以内个字符："<<endl;
    cin.getline(a,1000,'t');
    while (a[i]!='\0')
    {
       i++;
    }
    cout<<"一共输入了"<<i<<"个字符！"<<endl;
    for ( i-1 ; i >=0 ; i--)//遍历数组
    {
        cout<<a[i];
    }
    cout<<endl;
    system("pause");
    return 0;

}