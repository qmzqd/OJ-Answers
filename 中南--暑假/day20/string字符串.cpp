#include <bits/stdc++.h>
using namespace std;
int main()
{

    // getchar()接收单个字符串输入

    // getline(cin,s)接受带空格回车字符
    // a.find(起始位置，结束位置，子串)查找子串
    // 找到返回地址  找不到返回string::npos等于-1
    // a.substr(起始位置，长度) 截取字符串
    // insert(位置，值)字符串插入
    string s = "abcdefg";
    s.insert(s.begin() + 2, 'i');
    s.erase(s.begin() + 5);
    cout << s;
    return 0;
}
