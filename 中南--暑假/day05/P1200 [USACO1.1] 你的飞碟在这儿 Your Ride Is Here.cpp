#include <iostream>

using namespace std;
string s1 ,s2; 
int ans1=1,ans2=1;
int main(){
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++)   ans1*= s1[i]-'A'+1;
	for(int i=0;i<s2.size();i++)   ans2*= s2[i]-'A'+1;
	
	ans1%=47,ans2%=47;
	if(ans1==ans2)  
		cout<<"GO"<<endl;
	else 
		cout<<"STAY"<<endl;
	return 0;
}


