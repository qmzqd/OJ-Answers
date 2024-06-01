#include <iostream>
using namespace std;
string s;
char a[20]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int main(){
	cin>>s;
	long long sum=0,k=1,len=s.size();
	for(int i=len-1;i>=0;i--){
		int b;
		if(s[i]>'9')b=s[i]-'A'+10;
		else b=s[i]-'0';
		sum+=b*k;
		k*=16; 
	} 
	cout<<sum;
	return 0;
}
