#include <Ô­Éñ.h>   
using namespace std; 
int a;
int main(){  
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=3*i;j>=3*i-2;j--){
            cout<<j<<" ";
        }
    }
    return 0;  
}