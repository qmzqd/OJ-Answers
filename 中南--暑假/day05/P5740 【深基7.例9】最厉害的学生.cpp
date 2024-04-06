#include <iostream>
#include <algorithm>   // 算法头部文件 
using namespace std;
struct stu{
	string name;
	int x,y,z,tol;  //tol总分 
	int id;  //编号 
}p[1005];
int n;
bool cmp(stu a,stu b){ // 自定义规则进行排序 
	if(a.tol==b.tol) //总分相同 
		return a.id<b.id;  // 编号升序
	return a.tol>b.tol;   // 总分 降序 
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i].name>>p[i].x>>p[i].y>>p[i].z;
		p[i].tol= p[i].x+p[i].y+p[i].z;  //总分 
		p[i].id= i+1;   //绑定 顺序编号 
	}
//	sort(开始位置,结束位置 )    // 快速排序 
	sort(p+0,p+n,cmp); // 0 -> n-1  cmp比较器函数 
	cout<<p[0].name<<" "<<p[0].x<<" "<<p[0].y<<" "<<p[0].z;
	return 0;
}


