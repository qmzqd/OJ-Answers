#include <iostream>

using namespace std;
int n,p[1000005]; 
int main(){
	cin>>n; 
//  ��ʽɸ�鷨 
	for(int i=2;i*i<=n;i++){ // 2 -> ���� n 
		if(!p[i])  // δ��� 
			for(int j=i*i;j<=n;j+=i) // i*i��ʼ���  
				p[j]= 1; 
	}
	for(int i=2;i<=n;i++) 
		if(!p[i]) cout<<i<<" ";	
			
	return 0;
}


