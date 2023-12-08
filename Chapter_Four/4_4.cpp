//4.本章前面提到寻找“年龄在21~35岁之间、拥有学士或硕士学历、未婚、说印地语或乌尔都语的女性”。
// 编写一个程序，提示用户输入自己的情况，然后输出她们是否满足这些具体的要求。
// 为此，需要定义一个整型变量age,一个字符型变量gender(用m 代表男性，用f代表女性)，
// 一个枚举类型AcadenicDegree(可能的取值包括none、associate、 bachelor、 professional、 master、 doctor)的变量degree,
// 以及三个布尔变量married speaksHindi和speaksUrdu 。模拟网上面试，要求申请人填写这些变量。
// 输入无效值的人当然不满足条件，应当尽早排除在外(即，在输入任何无效值以后立即排除他们)。

#include<iostream>
using namespace std;
#include<iomanip>
enum class AcadenicDegree {none,associate,bachelor,professional, master,doctor};
//判断年龄
bool judge_Age(int a){
    if(a>=21&&a<=35){
        return true;
    }
    return false;

}
//判断性别
bool judge_Gender(char a){
    if(a=='f'){
        return true;
    }
    return false;

}
//判断学历
bool judge_Degree( AcadenicDegree a){
    if(a==AcadenicDegree::professional||a==AcadenicDegree::bachelor){
        return true;
    }
    return false;
}
//接受枚举类型
AcadenicDegree & fun(AcadenicDegree & d,int a){

    if(a==2){

        d=AcadenicDegree::bachelor;
        return d;
    }
    else if(a==3){
        d=AcadenicDegree::professional;
        return d;
    }
    else{
        d=AcadenicDegree::none;
        return d;
    }

}
int main(){
    int age;//年龄
    char gender;//性别
    int b;//转换学历
    AcadenicDegree degree;
    bool married,speaksHindi,speaksUrdu;
    bool flag;
    cout<<"请输入您的情况："<<endl;
    cout<<"请输入您的年龄："<<endl;
    cin >> age;
    flag=judge_Age(age);
    if(flag){
        cout<<"请输入您的性别：（f或者m）"<<endl;
        cin >> gender;
        flag=judge_Gender(gender);
        if (flag)
        {
            cout<<"请输入您的学历"<<endl;
            cin>>b;
            degree=fun(degree,b);
            flag=judge_Degree(degree);
            if(flag){
                cout<<"请输入您的婚姻情况"<<endl;
                cin>>married;
                if(!married){
                    cout<<"请输入您的speaksHindi"<<endl; 
                    cin>>speaksHindi;
                    cout<<"请输入您的speaksUrdu"<<endl; 
                    cin>>speaksUrdu;
                    if (speaksHindi||speaksUrdu)
                    {
                        cout<<"恭喜你符合条件！"<<endl;
                    }
                    else{
                         cout<<"抱歉您不符合条件"<<endl;
                         return 0;
                    }
                    

                }
                else{
                    cout<<"抱歉您不符合条件"<<endl;
                    return 0;

                }

            }
            else{

                cout<<"抱歉您不符合学历"<<endl;
                return 0;

            }
        }
        else
        {
            cout<<"抱歉您不符合性别"<<endl;
            return 0;
        }
        
    }
    else
    {
        cout<<"抱歉您不符合年龄："<<endl; 
    }
    system("pause");
    return 0;

}