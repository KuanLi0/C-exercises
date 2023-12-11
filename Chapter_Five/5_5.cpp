//编写一个与第4题等效的程序，但有以下区别:
//如果在第4题中使用for循环来统计字符数，现在使用while循环。如果之前使用了while循环，现在使用for循环。
#include<iostream>
using namespace std;
#include<iomanip>


int main(){
    int i=0;//统计字符数
    char a[1001]={'\0'};//初始化
    cout<<"请输入1000以内个字符："<<endl;
    cin.getline(a,1000,'t');
    //用for循环统计字符数
    for (int j = 0; j < sizeof(a); i++)
    {
        
        if(a[i]=='\0'){
            break;
        }
        i++;
    }
    
    // while (a[i]!='\0')
    // {
    //    i++;
    // }
    cout<<"一共输入了"<<i<<"个字符！"<<endl;
    for ( i-1 ; i >=0 ; i--)//遍历数组
    {
        cout<<a[i];
    }
    cout<<endl;
    system("pause");
    return 0;

}