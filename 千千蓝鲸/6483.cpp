#include <iostream>
using namespace std;
long long s;
char a[20]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int main(){
	cin>>s;
	long long tmp=1;
	while(tmp*16<=s)tmp*=16;
	while(tmp){
		int c=s/tmp;
		cout<<a[c];
		s-=c*tmp;
		tmp/=16;
	}
	return 0;
}
