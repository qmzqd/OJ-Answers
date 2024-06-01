#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
//素数判断函数 是返回1 不是返回0 
int f(int x)
{
	for(int i=2;i<=x/2;i++)
		if(x%i==0) return 0;
	return 1;
}
int main()
{
	char a[101],b[26]={};//b数组初始化为0 
	cin>>a;
	int len=strlen(a);	//输入单词长度 
	for(int i=0;i<len;i++)	//遍历 
	{	
		 b[a[i]-95]++; //a对应0 z对应25  对应位置++ 
	}
	int max=-1,min=101;	//初始化最大最小值 
	for(int i=0;i<26;i++)//遍历b数组 
	{
		if(b[i]>max) max=b[i]; //最大值 
		if(b[i]!=0 &&b[i]<min) min=b[i];//0除外的最小值  
	}

	if( f(max-min) &&(max-min)>1 ) //0跟1不是素数 也要输出 No Answer
		cout<<"Lucky Word"<<endl<<max-min;
	else
		cout<<"No Answer"<<endl<<"0";
}
