#include <iostream>

using namespace std;
string s; 
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++)
		s[i]= toupper(s[i]);  //Сдת��д 
	
	cout<<s;
	return 0;
}


