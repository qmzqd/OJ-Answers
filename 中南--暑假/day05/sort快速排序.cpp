#include <iostream>
#include <algorithm>
using namespace std;
int p[10]={5,3,2,8,6,1,4,7,0,9};
//         0 1 2 3 ....
bool cmp(int a,int b){
	return a>b;  // ÉıĞò 
} 
int main(){
	sort(p,p+10,cmp);  //Ä¬ÈÏÉıĞò 
	for(int i=0;i<10;i++) cout<<p[i]<<" ";
	return 0;
}


