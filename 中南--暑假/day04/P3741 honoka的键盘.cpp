#include <iostream>

using namespace std;
string s;
int n,cnt; 
int main(){
	cin>>n;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='V'&&s[i+1]=='K'){ //找到了 VK 
			cnt++;
			s[i]=s[i+1]= '*';
		}
	}
	if(s.find("VV")!=-1||s.find("KK")!=-1) // VV 或 KK 找的到 
		cnt++;
	
	cout<<cnt; 
	return 0;
}


