#include <iostream>

using namespace std;
string s1,s2;
int a[1001],b[1001],c[1001];
int main(){
//  1 �����޷��洢������ֻ��ͨ���ַ�������
	cin>>s1>>s2; 
	int lena=s1.size(),lenb=s2.size();
//  2 �����ַ��� �������ַ�תΪ���� ����洢�� ����������
	for(int i=0;i<lena;i++) a[i]= s1[lena-1-i]-'0';
	for(int i=0;i<lenb;i++) b[i]= s2[lenb-1-i]-'0';
//  3  �������� ���г˷����� 
	for(int i=0;i<lena;i++){  // a���� ÿһλ 
		int x=0;  //��λֵ 
		for(int j=0;j<lenb;j++){ // b���� ÿһλ 
			c[i+j]= c[i+j] +a[i]*b[j] +x;
			x= c[i+j]/10;  //��λֵ
			c[i+j]%=10;    // ȡ���� 
		}
		c[i+lenb]= x;    // ���λ��λ 
	}
	int len= lena+lenb;  // �˷����λ
	while(c[len-1]==0&&len-1>0) len--;   //ȥ��ǰ�� 0 
	for(int i=len-1;i>=0;i--) cout<<c[i]; 
	return 0;
}


