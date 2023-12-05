#include<iostream>
using namespace std;


int main (){

    int a,b;
    cin>>a>>b;

    cout<<"大"<<((a+b)+abs(a-b)) / 2<<endl;
     cout<<"小"<<(a+b-abs(a-b)) / 2 <<endl;
    system("pause");
    return 0;

}