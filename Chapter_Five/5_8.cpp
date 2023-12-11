// 著名的Fibonacci序列是一系列整数，前两个值是1，后续的值是前两个值之和。所以，它开始于1、1、2、3、5、8、13，等等。
// 它不仅仅是数学方面的问题，在生物环境中也十分常见。它与贝壳以螺旋方式生长有关，许多花的花瓣数就是这个序列中的一个数。
// 创建包含93个元素的 amay<>容器，将Fibonacci序列中的前93个数存储在数组中，接着每行输出一个数，各个值在列中对齐。
// 读者是否知道我们为什么要求生成93个Fibonacci 数字，而不是100个或其他大小?


#include<iostream>
using namespace std;
#include<iomanip>
#include<vector>

int main(){

    vector<unsigned long long> v1{1,1};

    for(int i =2;i<93;i++){

       unsigned long long temp=v1[i-1]+v1[i-2];
        v1.push_back(temp);
        cout<<v1[i]<<endl;

    }
    cout<<"因为第94个的数值已经超出了最大表示范围"<<endl;
    system("pause");
    return 0;

}