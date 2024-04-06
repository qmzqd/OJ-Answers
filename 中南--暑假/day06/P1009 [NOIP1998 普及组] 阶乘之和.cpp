#include <iostream>

using namespace std;
int n,a[100]={1},b[100]={1},k=1;
void mul(int x){  // 高精乘低精 
	for(int i=0;i<k;i++) a[i]*=x;
	int m=0;
	for(int i=0;i<k;i++){
		a[i]+=m;
		m= a[i]/10;
		a[i]%=10;
	}
	while(m){  
		a[k++]= m%10;
		m/=10;
	} 
} 
void sum(){ // 高精度加法 
	int x=0;
	for(int i=0;i<k;i++){
		b[i]= b[i]+a[i]+ x;
		x= b[i]/10;   //进位值 
		b[i]%=10;
	}
	if(x) b[k++]= x; 
}
int main(){
	cin>>n;
	for(int i=2;i<=n;i++){
		mul(i);   // i的阶乘
		sum();    // 累加i的阶乘 
	}
	for(int i=k-1;i>=0;i--) cout<<b[i]; 
	return 0;
}


