#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
//�����жϺ��� �Ƿ���1 ���Ƿ���0 
int f(int x)
{
	for(int i=2;i<=x/2;i++)
		if(x%i==0) return 0;
	return 1;
}
int main()
{
	char a[101],b[26]={};//b�����ʼ��Ϊ0 
	cin>>a;
	int len=strlen(a);	//���뵥�ʳ��� 
	for(int i=0;i<len;i++)	//���� 
	{	
		 b[a[i]-95]++; //a��Ӧ0 z��Ӧ25  ��Ӧλ��++ 
	}
	int max=-1,min=101;	//��ʼ�������Сֵ 
	for(int i=0;i<26;i++)//����b���� 
	{
		if(b[i]>max) max=b[i]; //���ֵ 
		if(b[i]!=0 &&b[i]<min) min=b[i];//0�������Сֵ  
	}

	if( f(max-min) &&(max-min)>1 ) //0��1�������� ҲҪ��� No Answer
		cout<<"Lucky Word"<<endl<<max-min;
	else
		cout<<"No Answer"<<endl<<"0";
}
