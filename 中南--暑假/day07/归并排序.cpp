#include<bits/stdc++.h>
using namespace std;
int n,p[100005],f[100005];
void qmerge(int L,int R){//L-R区间 数据进�?�排�?
    if(L==R) return;
    int mid=(L+R)/2;
    //�ݹ�
    qmerge(L,mid);//���
    qmerge(mid+1,R);//�ұ�
    //�ϲ�
    int i=L,j=mid+1,k=L;//i j ���������� ����λ��
    while(i<mid&&j<=R){//���������в�Ϊ��
        if(p[i]<p[j]) f[k++]=p[i++];
        else f[k++]=p[j++];
    }
    while (i<=mid) f[k++]=p[i++];
    while (j<=R) f[k++]=p[j++];
    for(int i=L;i<=R;i++) p[i]=f[i];
}
//2 ��?
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>p[i];
    return 0;
    
}