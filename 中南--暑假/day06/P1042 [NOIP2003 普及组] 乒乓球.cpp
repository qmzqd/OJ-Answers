#include <iostream>
#include <cmath> 
using namespace std;
char p[70000],ch; 
int k,cnt1,cnt2; 
int main(){
	while(cin>>ch&&ch!='E'){ // ���������� ����E���� 
		p[k++]= ch;
	}
	for(int i=0;i<k;i++){  // 11����
	 	if(p[i]=='W') cnt1++;
	 	else  cnt2++;
		if((cnt1>=11||cnt2>=11)&&abs(cnt1-cnt2)>=2){ 
			cout<<cnt1<<":"<<cnt2<<endl;
			cnt1=0,cnt2=0;
		}		
	}
	cout<<cnt1<<":"<<cnt2<<endl; //ʣ�������
	cout<<endl; //����
	cnt1=0,cnt2=0;  //���� 
	for(int i=0;i<k;i++){  // 21����
	 	if(p[i]=='W') cnt1++;
	 	else  cnt2++;
		if((cnt1>=21||cnt2>=21)&&abs(cnt1-cnt2)>=2){ 
			cout<<cnt1<<":"<<cnt2<<endl;
			cnt1=0,cnt2=0;
		}		
	}
	cout<<cnt1<<":"<<cnt2<<endl; //ʣ�������
	 
	return 0;
}


