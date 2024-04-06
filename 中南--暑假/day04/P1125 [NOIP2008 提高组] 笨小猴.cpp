#include <iostream>

using namespace std;
string s;
int maxn=0,minn=1e9,p[130]; //'z' =>122
bool prime(int x){  //质数判断 
	if(x<2) return 0;
	for(int i=2;i*i<=x;i++) //  2 - 根号x 
		if(x%i==0) return 0;  // 找到了因数 
	return 1;
} 

int main(){
	cin>>s;
	for(int i=0;i<s.size();i++)
		p[s[i]]++; // p数组 s[i]下标处 累加+1
	
	for(int i=97;i<=122;i++){
		maxn= max(maxn,p[i]);    //最大值 
		if(p[i])
			minn= min(minn,p[i]); //最小值 
	} 
	if(prime(maxn-minn)){  //判断质数 
		cout<<"Lucky Word"<<endl;
		cout<<maxn-minn<<endl;
	}else{
		cout<<"No Answer"<<endl;
		cout<<0<<endl;
	}
		
		 
	return 0;
}


