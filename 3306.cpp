    #include<bits/stdc++.h>
    using namespace std;
    stack<char>s;
    string a;
    bool f=0;
    int main(){
        cin>>a;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='(')s.push(a[i]);
            if(a[i]==')')
            {
                if(s.empty())f=1;
                else
                {
                    if(s.top()=='(')s.pop();
                    else f=1;
                }
            }
        }
        if(f||!s.empty())cout<<"NO";
        else cout<<"YES";
        return 0;
    }