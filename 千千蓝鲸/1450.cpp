#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isAbsolutePrime(int n)
{
    if (n < 1)
    {
        return false; 
    }
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10; 
        n /= 10;
    }
    return isPrime(n) && isPrime(reversed); 
}

int main()
{
    int n;
    cin >> n;
    try
    {
        if (isAbsolutePrime(n))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    catch (const exception &e)
    {
        cerr << "�����쳣��" << e.what() << endl;
    }
    return 0;
}