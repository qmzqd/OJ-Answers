#include <iostream>

using namespace std;
//�߾��� ���ַ�����������
string s1,s2; 
int a[1005],b[1005],c[1005];
int main(){
	cin>>s1>>s2;// 234567
	int lena=s1.size();
	int lenb=s2.size();
	// ��s1 s2 תΪ���� ���� �洢�� a b������ 
	for(int i=0;i<lena;i++) a[i]= s1[lena-1-i]-'0';
	for(int i=0;i<lenb;i++) b[i]= s2[lenb-1-i]-'0';
	int len= max(lena,lenb);  //��ȡ�ϳ��� ����
	int x= 0;  //��λֵ 
	for(int i=0;i<len;i++){  //���� ���мӷ����� 
		c[i]= a[i]+b[i]+x;  
		x= c[i]/10;          // ��һλ��λֵ
		c[i]%=10;            // ȡ�� 
	} 
	if(x) c[len++]= x;  // �������λ��λ 
	for(int i=len-1;i>=0;i--) cout<<c[i]; 
	return 0;
}


