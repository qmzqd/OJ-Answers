#include <iostream>
using namespace std;
int f(int n){//�ϲ���������  
	if(n==1)return 1;
	else if(n==2)return 1;
	return f(n-1)+f(n-2);
}
int main(){
    int n;
    cin>>n;
	cout<<f(n);
	return 0;
}
