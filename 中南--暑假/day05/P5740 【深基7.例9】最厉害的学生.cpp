#include <iostream>
#include <algorithm>   // �㷨ͷ���ļ� 
using namespace std;
struct stu{
	string name;
	int x,y,z,tol;  //tol�ܷ� 
	int id;  //��� 
}p[1005];
int n;
bool cmp(stu a,stu b){ // �Զ������������� 
	if(a.tol==b.tol) //�ܷ���ͬ 
		return a.id<b.id;  // �������
	return a.tol>b.tol;   // �ܷ� ���� 
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i].name>>p[i].x>>p[i].y>>p[i].z;
		p[i].tol= p[i].x+p[i].y+p[i].z;  //�ܷ� 
		p[i].id= i+1;   //�� ˳���� 
	}
//	sort(��ʼλ��,����λ�� )    // �������� 
	sort(p+0,p+n,cmp); // 0 -> n-1  cmp�Ƚ������� 
	cout<<p[0].name<<" "<<p[0].x<<" "<<p[0].y<<" "<<p[0].z;
	return 0;
}


