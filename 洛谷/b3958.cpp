#include <bits/stdc++.h> // 包含标准C++库，bits/stdc++.h是一个非标准头文件，包含了所有标准库的头文件
using namespace std;      // 使用标准命名空间

int n, i, j, c = 0, a1, b1; // 定义全局变量，n为测试用例数量，i和j为循环变量，c用于计数，a1和b1分别存储两个字符串的长度
string a, b;               // 定义两个字符串变量a和b

int main()
{
    cin >> n; // 读取测试用例数量
    for (i = 1; i <= n; i++)
    {
        cin >> a >> b; // 读取两个字符串a和b
        if (a.size() < b.size()) // 如果a的长度小于b的长度，则交换它们
            swap(a, b);
        a1 = a.size(); // 存储a的长度
        b1 = b.size(); // 存储b的长度
        c = 0;         // 初始化计数器c为0
        if (a1 == b1) // 如果两个字符串长度相同
        {
            for (j = 0; j < a1; j++) // 遍历字符串
            {
                if (a[j] != b[j]) // 如果对应位置的字符不同
                    c++; // 增加计数器
            }
        }
        else if (a1 - b1 > 1) // 如果a的长度比b的长度大1以上
            c = 2; // 直接设置c为2
        else // 如果a的长度只比b的长度大1
        {
            for (j = 0; j < b1; j++) // 遍历b的长度
            {
                if (a[j] != b[j]) // 如果对应位置的字符不同
                {
                    a.erase(j, 1); // 从a中删除一个字符
                    if (a == b) // 如果删除后a和b相同
                        c = 0; // 设置c为0
                    else
                        c = 2; // 否则设置c为2
                    break; // 跳出循环
                }
            }
        }

        if (c <= 1) // 如果c的值小于等于1
            cout << "similar" << endl; // 输出"similar"
        else
            cout << "not similar" << endl; // 否则输出"not similar"
    }
    return 0; // 程序结束
}