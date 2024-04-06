#include <iostream>

using namespace std;
//高精度 用字符串接收数据
string s1,s2; 
int a[1005],b[1005],c[1005];
int main(){
	cin>>s1>>s2;// 234567
	int lena=s1.size();
	int lenb=s2.size();
	if(lena<lenb|| lena==lenb&&s1<s2 ){  // s1小于 s2 
		cout<<"-";
		swap(s1,s2);     //swap(a,b) 交换 a,b中的数据
		swap(lena,lenb);  
	}
	// 将s1 s2 转为整数 逆序 存储到 a b数组中 
	for(int i=0;i<lena;i++) a[i]= s1[lena-1-i]-'0';
	for(int i=0;i<lenb;i++) b[i]= s2[lenb-1-i]-'0';
	int x= 0; //借位值 
	for(int i=0;i<lena;i++){
		a[i]-=x;  //扣除退位值
		if(a[i]<b[i]){  // 不够减 
			c[i]=a[i]+10 -b[i];  // 去借 
			x= 1;   //借位值 为 1 
		}else{   // 够减 
			c[i]= a[i]-b[i];
			x= 0;
		}	 	
	} 
	while(c[lena-1]==0&&lena-1>0) lena--;  // 去除前导 0 
	 
	for(int i=lena-1;i>=0;i--) cout<<c[i]; 
	return 0;
}


