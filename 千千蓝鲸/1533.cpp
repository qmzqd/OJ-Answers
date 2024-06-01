#include <iostream>
using namespace std;
int n,sum,a[20]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
string s;
int main(){
	cin>>n>>s;
	int x=1;
	for(int i=s.size()-1;i>=0;i--){
		int b;
		if(s[i]>'9')b=s[i]-'A'+10;
		else b=s[i]-'0';
		sum+=b*x;
		x*=n;
		}
	cout<<sum;
	return 0;
} 
