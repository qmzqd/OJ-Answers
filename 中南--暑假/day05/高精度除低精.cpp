#include <iostream>

using namespace std;
string s;
int m,c[1005]; 
int main(){
	cin>>s;
	cin>>m;
	int x=0,len=s.size(); //ำเสý 
	for(int i=0;i<len;i++){
		int n= x*10+s[i]-'0';
		c[i]= n/m;  // ษฬ 
		x = n%m;    // ำเสý 
	}
	int j=0;
	while(c[j]==0&&j<len-1) j++;
	for(j;j<len;j++) cout<<c[j]; 
	return 0;
}


