#include<bits/stdc++.h>
using namespace std;
vector<int> p;
int n,m;
int main(){
    while(cin>>n>>m){
        p.clear();
        for(int i=1;i<=2*n;i++) p.push_back(i);//编号
        int k=0;
        for(int i=0;i<n;i++){
            k=(k+m-1)%p.size();//删除元素的位置
            p.erase(p.begin()+k);
        }
        int j=0;
        for(int i=1;i<=2*n;i++){
            if(i==p[j]){
                cout<<"G";
                j++;
            }else{
                cout<<"B";
            }
        }
    }
    return 0;
}

