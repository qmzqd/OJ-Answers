#include <iostream>
#include <cmath> 
using namespace std;
char p[70000],ch; 
int k,cnt1,cnt2; 
int main(){
	while(cin>>ch&&ch!='E'){ // 不定长输入 输入E结束 
		p[k++]= ch;
	}
	for(int i=0;i<k;i++){  // 11分制
	 	if(p[i]=='W') cnt1++;
	 	else  cnt2++;
		if((cnt1>=11||cnt2>=11)&&abs(cnt1-cnt2)>=2){ 
			cout<<cnt1<<":"<<cnt2<<endl;
			cnt1=0,cnt2=0;
		}		
	}
	cout<<cnt1<<":"<<cnt2<<endl; //剩余分数比
	cout<<endl; //换行
	cnt1=0,cnt2=0;  //重置 
	for(int i=0;i<k;i++){  // 21分制
	 	if(p[i]=='W') cnt1++;
	 	else  cnt2++;
		if((cnt1>=21||cnt2>=21)&&abs(cnt1-cnt2)>=2){ 
			cout<<cnt1<<":"<<cnt2<<endl;
			cnt1=0,cnt2=0;
		}		
	}
	cout<<cnt1<<":"<<cnt2<<endl; //剩余分数比
	 
	return 0;
}


