#include <iostream>

using namespace std;
//�߾��� ���ַ�����������
string s1,s2; 
int a[1005],b[1005],c[1005];
int main(){
	cin>>s1>>s2;// 234567
	int lena=s1.size();
	int lenb=s2.size();
	if(lena<lenb|| lena==lenb&&s1<s2 ){  // s1С�� s2 
		cout<<"-";
		swap(s1,s2);     //swap(a,b) ���� a,b�е�����
		swap(lena,lenb);  
	}
	// ��s1 s2 תΪ���� ���� �洢�� a b������ 
	for(int i=0;i<lena;i++) a[i]= s1[lena-1-i]-'0';
	for(int i=0;i<lenb;i++) b[i]= s2[lenb-1-i]-'0';
	int x= 0; //��λֵ 
	for(int i=0;i<lena;i++){
		a[i]-=x;  //�۳���λֵ
		if(a[i]<b[i]){  // ������ 
			c[i]=a[i]+10 -b[i];  // ȥ�� 
			x= 1;   //��λֵ Ϊ 1 
		}else{   // ���� 
			c[i]= a[i]-b[i];
			x= 0;
		}	 	
	} 
	while(c[lena-1]==0&&lena-1>0) lena--;  // ȥ��ǰ�� 0 
	 
	for(int i=lena-1;i>=0;i--) cout<<c[i]; 
	return 0;
}


