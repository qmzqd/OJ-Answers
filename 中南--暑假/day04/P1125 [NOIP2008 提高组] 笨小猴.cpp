#include <iostream>

using namespace std;
string s;
int maxn=0,minn=1e9,p[130]; //'z' =>122
bool prime(int x){  //�����ж� 
	if(x<2) return 0;
	for(int i=2;i*i<=x;i++) //  2 - ����x 
		if(x%i==0) return 0;  // �ҵ������� 
	return 1;
} 

int main(){
	cin>>s;
	for(int i=0;i<s.size();i++)
		p[s[i]]++; // p���� s[i]�±괦 �ۼ�+1
	
	for(int i=97;i<=122;i++){
		maxn= max(maxn,p[i]);    //���ֵ 
		if(p[i])
			minn= min(minn,p[i]); //��Сֵ 
	} 
	if(prime(maxn-minn)){  //�ж����� 
		cout<<"Lucky Word"<<endl;
		cout<<maxn-minn<<endl;
	}else{
		cout<<"No Answer"<<endl;
		cout<<0<<endl;
	}
		
		 
	return 0;
}


