#include <iostream>  
#include <string>  
#include <algorithm>  
  
bool isPrime(int n) {  
    if (n <= 1) {  
        return false;  
    }  
    if (n == 2) {  
        return true;  
    }  
    if (n % 2 == 0) {  
        return false;  
    }  
    for (int i = 3; i * i <= n; i += 2) {  
        if (n % i == 0) {  
            return false;  
        }  
    }  
    return true;  
}  
  
bool isAbsolutePrime(int n) {  
    if (n < 1) {  
        return false; // 输入值必须大于等于1  
    }  
    int reversed = 0;  
    while (n > 0) {  
        reversed = reversed * 10 + n % 10; // 使用位操作反转整数  
        n /= 10;  
    }  
    return isPrime(n) && isPrime(reversed); // 检查原始数和反转后的数是否都是质数  
}  
  
int main() {  
    int n;  
    std::cin >> n;  
    try {  
        if (isAbsolutePrime(n)) {  
            std::cout << "Yes" << std::endl;  
        } else {  
            std::cout << "no" << std::endl;  
        }  
    } catch (const std::exception& e) {  
        std::cerr << "发生异常：" << e.what() << std::endl;  
    }  
    return 0;  
}