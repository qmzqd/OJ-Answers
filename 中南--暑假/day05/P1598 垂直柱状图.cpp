#include <iostream>

using namespace std;
int p[26],maxn;
string s;
int main(){
	for(int i=1;i<=4;i++ ){  // 4���ַ��� 
		getline(cin,s);  //  
		for(int j=0;j<s.size();j++){
			if('A'<=s[j]&&s[j]<='Z')  // ��д 
				p[s[j]-'A']++;    //
		} 
	}
	for(int i=0;i<26;i++) maxn= max(maxn,p[i]);  //���ֵ
	for(int i=maxn;i>0;i--){    // ����п�ʼ 
		for(int j=0;j<26;j++){  //���� p����  
			if(p[j]>=i)   
				cout<<"*";
			else cout<<" ";
			cout<<" "; 
		}
		cout<<endl; 
	} 
	for(char i='A';i<='Z';i++) cout<<i<<" ";
	 
	return 0;
}


