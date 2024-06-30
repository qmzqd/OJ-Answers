#include <bits/stdc++.h>
using namespace std;

int main() {
    // 声明一个字符串数组来存储4行文本
    string l[4];

    // 声明一个整型数组来计数每一个大写字母的出现次数
    int cnt[26] = {0};

    // 从标准输入读取4行文本
    for (int i = 0; i < 4; i++) {
        getline(cin, l[i]);

        // 循环每一行文本中的字符
        for (char c : l[i]) {
            // 如果字符是大写字母，则在cnt数组中对应的计数加1
            if (isupper(c)) {
                cnt[c - 'A']++;
            }
        }
    }

    // 找到cnt数组中的最大计数，并将其存储在maxcnt变量中
    int maxcnt = *max_element(cnt, cnt + 26);

    // 打印直方图
    // 循环从maxcnt到1，逐行地打印
    for (int i = maxcnt; i > 0; i--) {
        // 循环每一个大写字母
        for (int j = 0; j < 26; j++) {
            // 如果cnt数组中当前字母的计数大于或等于当前行，则打印一个'*'
            if (cnt[j] >= i) {
                cout << "* ";
            }
            // 否则，打印一个空格
            else {
                cout << "  ";
            }
        }
        // 转到下一行
        cout << endl;
    }

    // 打印x轴（大写字母）的标签
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << " ";
    }
    cout << endl;

    // 返回0表示程序执行成功
    return 0;
}