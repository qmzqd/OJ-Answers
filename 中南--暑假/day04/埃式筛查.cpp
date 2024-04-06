#include <iostream>

using namespace std;
int n,p[1000005]; 
int main(){
	cin>>n; 
//  埃式筛查法 
	for(int i=2;i*i<=n;i++){ // 2 -> 根号 n 
		if(!p[i])  // 未标记 
			for(int j=i*i;j<=n;j+=i) // i*i开始标记  
				p[j]= 1; 
	}
	for(int i=2;i<=n;i++) 
		if(!p[i]) cout<<i<<" ";	
			
	return 0;
}


