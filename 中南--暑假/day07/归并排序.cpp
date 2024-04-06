#include<bits/stdc++.h>
using namespace std;
int n,p[100005],f[100005];
void qmerge(int L,int R){//L-R鍖洪棿 鏁版嵁杩涜?屾帓搴?
    if(L==R) return;
    int mid=(L+R)/2;
    //递归
    qmerge(L,mid);//左边
    qmerge(mid+1,R);//右边
    //合并
    int i=L,j=mid+1,k=L;//i j 左右子序列 队首位置
    while(i<mid&&j<=R){//左右子序列不为空
        if(p[i]<p[j]) f[k++]=p[i++];
        else f[k++]=p[j++];
    }
    while (i<=mid) f[k++]=p[i++];
    while (j<=R) f[k++]=p[j++];
    for(int i=L;i<=R;i++) p[i]=f[i];
}
//2 嚓?
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>p[i];
    return 0;
    
}