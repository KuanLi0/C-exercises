#include<iostream>
using namespace std;
//
float kg(float a){

    float kg1 =a/2.2;
    return kg1;
}
float cchange(float g,int flag){

    //一英尺等于12英寸
    int flag_=flag;//用户选择
    
    float l;//接受用户输入量
    l=g;
    float a;//转化量
  
     if (flag_==1)
    {
        a=l/12;
        //cout<<"化成英尺为："<<fixed<< setprecision(3)<<a<<endl;
          
    }
    else if(flag_==2){

         return l;

    }
     return a;
}
//
float yingch(float a){
    int   flag;  //用户自己决定是否需要转化尺寸
    float height=a;
    cout<<"请输入身高（英尺）\n:1.输入英寸转换英尺\n2.输入的是英尺无需转换"<<endl;
    cout<<"请先输入选择："<<endl;
    cin>>flag;
    height=cchange(height,flag);
    height=height*0.3048;
    return height;

}
int main(){

    float weight;
    float height;
    float bmi;

    cout<<"请输入体重（磅）"<<endl;
    cin>>weight;
    weight = kg(weight);

   
    cout<<"输入身高："<<endl;
    cin>>height;
    height=yingch(height);

    bmi=weight/(height*height);
    cout<<"bmi值为："<<bmi<<endl;

    system("pause");
    return 0;
}