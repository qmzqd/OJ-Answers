#include <iostream>

using namespace std;
string s1,s2; 
int cnt;
int main(){
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;i<s1.size();i++)
		s1[i]= tolower(s1[i]);
	for(int i=0;i<s2.size();i++)
		s2[i]= tolower(s2[i]);
	
	s1=" "+s1+" ";   // 单词查找 
	s2=" "+s2+" ";   
	int pos= s2.find(s1);
	if(pos==-1){  //说明没有找到 
		cout<<-1;
		return 0; 
	} 
	while(pos!=-1){ //找得到 
		cnt++;
		pos= s2.find(s1,pos+1);  //继续往后查找 
	}
	cout<<cnt<<" "<<s2.find(s1)<<endl;
	
	return 0;
}


