#include <iostream>

using namespace std;
//高精度 用字符串接收数据
string s1,s2; 
int a[1005],b[1005],c[1005];
int main(){
	cin>>s1>>s2;// 234567
	int lena=s1.size();
	int lenb=s2.size();
	// 将s1 s2 转为整数 逆序 存储到 a b数组中 
	for(int i=0;i<lena;i++) a[i]= s1[lena-1-i]-'0';
	for(int i=0;i<lenb;i++) b[i]= s2[lenb-1-i]-'0';
	int len= max(lena,lenb);  //获取较长的 长度
	int x= 0;  //进位值 
	for(int i=0;i<len;i++){  //遍历 进行加法运算 
		c[i]= a[i]+b[i]+x;  
		x= c[i]/10;          // 下一位进位值
		c[i]%=10;            // 取余 
	} 
	if(x) c[len++]= x;  // 处理最高位进位 
	for(int i=len-1;i>=0;i--) cout<<c[i]; 
	return 0;
}


