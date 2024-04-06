#include <iostream>

using namespace std;
struct stu{
	int type;
	string name;
}p[100005];
int n,m,now;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>p[i].type>>p[i].name;
	while(m--){
		int x,step;
		cin>>x>>step;
		if(x+p[now].type!=1){   //ÄæÊ±Õë
			now= now+(n-step%n); 
		}else{    //Ë³Ê±Õë
			now= now+ step%n;
		} 
		now%=n;  // ·ÀÖ¹Òç³ö 	
	}
	cout<<p[now].name; 
	return 0;
}


