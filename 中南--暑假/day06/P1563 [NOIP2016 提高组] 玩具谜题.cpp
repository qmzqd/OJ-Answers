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
		if(x+p[now].type!=1){   //��ʱ��
			now= now+(n-step%n); 
		}else{    //˳ʱ��
			now= now+ step%n;
		} 
		now%=n;  // ��ֹ��� 	
	}
	cout<<p[now].name; 
	return 0;
}


