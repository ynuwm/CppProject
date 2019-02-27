//for 语句允许简单的范围迭代
#include<iostream>  
#include<string>  
#include<cctype>  
using namespace std; 
/*
int main()
{
    int my_array[5] = {1, 2, 3, 4, 5};
    // 每个数组元素乘于 2
    for (int &x : my_array)
    {
        x *= 2;
        cout << x << endl;  
    }
    // auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
    for (auto &x : my_array) {
        x *= 2;
        cout << x << endl;  
    }
}

int main()  
{  
    string str("some string");  
    // range for 语句  
    for(auto &c : str)  
    {  
        c = toupper(c);  
    }  
    cout << str << endl;  
    return 0;  
}
*/

//嵌套循环查找质数
int main ()
{
    int i, j;
    for(i=2; i<100; i++) {
        for(j=2; j <= (i/j); j++) {
            if(!(i%j)) {
                break; // 如果找到，则不是质数
            }
        }
        if(j > (i/j)) {
            cout << i << " 是质数\n";
        }
    }
    return 0;
}