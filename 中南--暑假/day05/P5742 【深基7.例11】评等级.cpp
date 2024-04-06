#include <iostream>

using namespace std;
struct stu{
	int id,x,y,z;
}p[1005];
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i].id>>p[i].x>>p[i].y;
		p[i].z= (p[i].x*7+p[i].y*3)/10.0;
		if(p[i].x+p[i].y>140&&p[i].z>=80)
			cout<<"Excellent"<<endl;
		else
			cout<<"Not excellent"<<endl;
	}
	return 0;
}


