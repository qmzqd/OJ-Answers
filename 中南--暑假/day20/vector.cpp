#include<bits/stdc++.h>
using namespace std;
vector<int> vet;
int main(){
    for(int i=1;i<=5;i++) vet.push_back(i);
    cout<<vet.size()<<endl;//5
    cout<<vet[0]<<endl;//1
    cout<<vet[1]<<endl;//2
    cout<<vet[2]<<endl;//3
    cout<<vet[3]<<endl;//4
    cout<<vet.front()<<endl;//1
    cout<<vet.back()<<endl;//5
//begin()获取首相元素的指针 end()指向结束null
//vet.insert(指针位置,值)
    vet.insert(vet.begin()+2,666);
    for(int i=0;i<vet.size();i++){
        cout<<vet[i]<<endl;
    }
    //erase(起始位置，结束位置)删除区间元素，含头不含尾
    vet.erase(vet.begin()+1);
    vet.erase(vet.begin()+1,vet.begin()+4);
    for(int i=0;i<vet.size();i++){                            
        cout<<vet[i]<<endl;
    }
    return 0;
}