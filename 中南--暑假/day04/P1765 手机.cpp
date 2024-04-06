#include <iostream>
#include <string>
using namespace std;
int p[26]={1,2,3, 1,2,3,
		   1,2,3, 1,2,3, 1,2,3,
		   1,2,3,4,  1,2,3, 1,2,3,4
};
string s;
int ans;
int main(){
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if('a'<=s[i]&&s[i]<='z'){
			ans+= p[s[i]-'a'];  //ÀÛ¼Ó 
		}
		if(s[i]==' ') ans++;   
	}
	cout<<ans;
	return 0;
}


