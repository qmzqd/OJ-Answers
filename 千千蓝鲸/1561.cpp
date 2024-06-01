#include <iostream>
using namespace std;
typedef long long ll;
char a[2005];
string s;
int main(){
	cin>>s;
	ll len=s.size();
	string s2;
	if(len%3==0)s2=s;
	else if(len%3==1){
		len+=2;
		s2="00"+s;
	}else{
		len++;
		s2="0"+s;
	}
	
	
	for(int i=len-1;i>=0;i--)a[i]=s2[len-i-1];
	string s3="";
	for(int i=0;i<len;i+=3){
		int x=0;
		if(a[i]=='1')x+=1;
		if(a[i+1]=='1')x+=2;
		if(a[i+2]=='1')x+=4;
		s3+=x+'0';
	}
	for(int i=s3.size()-1;i>=0;i--)cout<<s3[i];
	return 0;
}
