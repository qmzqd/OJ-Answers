#include <iostream>
using namespace std;
int step(int n){
	if(n==1)return 1;
	else if(n==2)return 2;
	else if(n==3)return 4; 
	return step(n-1)+step(n-2)+step(n-3); 
} 
int main(){
	int n;
	cin>>n;
	cout<<step(n);
	return 0;
}
