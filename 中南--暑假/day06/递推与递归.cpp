#include <iostream>

using namespace std;
int age(int n){
	if (n==5)   //边界 
		return 10;     
	return age(n+1)+2; // 递推 
}
int main(){
// 递推: 1 边界  2 递推公式 3 重复递推执行

// 递归: 1 边界  2 递推过程  3 回溯 
	cout<<age(1)<<endl;
	 
	return 0;
}


