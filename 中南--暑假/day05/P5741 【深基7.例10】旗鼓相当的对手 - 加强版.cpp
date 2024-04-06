#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;
struct stu{
	string name;
	int x,y,z,tol;
}p[1005];
int n; 
bool check(int a,int b){
	if( abs(p[a].x-p[b].x)>5) return false;
	if( abs(p[a].y-p[b].y)>5) return false;
	if( abs(p[a].z-p[b].z)>5) return false;
	if( abs(p[a].tol-p[b].tol)>10) return false;
	return true;
}
bool cmp(stu a,stu b){
	return a.name<b.name;   //√˚◊÷…˝–Ú≈≈¡– 	
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i].name>>p[i].x>>p[i].y>>p[i].z;
		p[i].tol= p[i].x+p[i].y+p[i].z;
	}
	sort(p,p+n,cmp);  //≈≈–Ú 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(check(i,j))
				cout<<p[i].name<<" "<<p[j].name<<endl;
		}
	}
	return 0;
}


