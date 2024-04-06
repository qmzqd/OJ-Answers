#include <iostream>

using namespace std;
int p[50],n;
int main(){
	cin>>n;
	p[n]= 1;
	for(int i=n-1;i>=1;i--)
		p[i]= (p[i+1]+1)*2;
	cout<<p[1];
	return 0;
}


