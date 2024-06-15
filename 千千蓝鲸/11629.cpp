#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string longest, shortest;
    int longest_size = 0, shortest_size = 105;
    for (int i = 0; i < n; ++i)
    {
        string word;
        cin >> word;
        if (word.size() > longest_size)
        {
            longest = word;
            longest_size = word.size();
        }
        if (word.size() < shortest_size)
        {
            shortest = word;
            shortest_size = word.size();
        }
    }
    cout << longest << endl;
    cout << shortest << endl;
    return 0;
}