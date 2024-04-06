#include <iostream>

using namespace std;
string s1,s2;
int a[1001],b[1001],c[1001];
int main(){
//  1 变量无法存储大数，只能通过字符串接收
	cin>>s1>>s2; 
	int lena=s1.size(),lenb=s2.size();
//  2 遍历字符串 ，将在字符转为整数 逆序存储在 整数数组中
	for(int i=0;i<lena;i++) a[i]= s1[lena-1-i]-'0';
	for(int i=0;i<lenb;i++) b[i]= s2[lenb-1-i]-'0';
//  3  遍历数组 进行乘法运算 
	for(int i=0;i<lena;i++){  // a数组 每一位 
		int x=0;  //进位值 
		for(int j=0;j<lenb;j++){ // b数组 每一位 
			c[i+j]= c[i+j] +a[i]*b[j] +x;
			x= c[i+j]/10;  //进位值
			c[i+j]%=10;    // 取余数 
		}
		c[i+lenb]= x;    // 最高位进位 
	}
	int len= lena+lenb;  // 乘法最高位
	while(c[len-1]==0&&len-1>0) len--;   //去除前导 0 
	for(int i=len-1;i>=0;i--) cout<<c[i]; 
	return 0;
}


