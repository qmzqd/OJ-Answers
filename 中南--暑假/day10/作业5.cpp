#include <iostream>
#include <vector>
using namespace std;
int chun(int N,int K){
    std::vector<int>p(N+1,0);
    p[0]=1;
     for(int i=1;i<=N;i++){
        for(int j=1;j<=min(i,K); ++j) {
            p[i] =(p[i]+p[i-j]) % 100003;
        }
    }
    return p[N];
}
int main(){
    int N,K;
    cin>>N>>K;
    cout<<chun(N,K)<<endl;
    return 0;
}