#include <iostream>

using namespace std;
const int N=1e7;
int p[N]; 
int main(){
//  WA �𰸴���  TEl��ʱ   RE���鳬��   512MB
//  ������ʱ 1s=>1000ms  ѭ������������2000W 
	int p[10]={5,7,3,2,9,4,1,8,6,0};  
//  Ͱ���� : ���������±��������  ���ݴ�С 1KW   ʱ�临�Ӷ�O n 
//  ð������: �����ȶ���   ʱ�临�Ӷ�  O n^n 
//	for(int i=1;i<10;i++){   // ���ѭ������  
//		bool flag= true;
//		for(int j=0;j<10-i;j++) //  �ڲ�   ���бȽ�  1  �Ż� 
//			if(p[j]>p[j+1]){  // ���� > 
//				swap(p[j],p[j+1]); //����
//				flag= false;  // �޸ı�� 
//			}
//		if(flag) break;  // 2 �Ż�  
//	}

//  ѡ������  ȱ�㲻�ȶ�   ʱ�临�Ӷ� O n^n 
//	for(int i=0;i<10;i++){
//		int k=i,minn=p[i];  // k minn λ�� ֵ
//		for(int j=i+1;j<10;j++){  // i ���Ҳ����� 
//			if(p[j]<minn){  //�ҵ���С�� 
//				minn= p[j]; // ���� 
//				k= j;       // ��¼ 
//			}
//		} 
//		swap(p[k],p[i]);  //���� 
//	} 
//  ��������  �ŵ� �����ȶ���   ʱ�临�Ӷ� O n^n 
	for(int i=0;i<10;i++){
		int k=i,minn=p[i];
		for(int j=i-1;j>=0;j--){  // i ��������� 
			if(p[j]>minn){   //�ҵ��� minn�� 
				swap(p[j],p[k]); // ���� 
				k= j;            // ���� λ�� 
			}else break;
		}
	}
//  ��������
//	�㷨ͷ�ļ� algorithm sort(��ʼλ,����λ,������) 
	
	
	
//  �鲢����
//  ������ 
	for(int i=0;i<10;i++) cout<<p[i]<<" ";
	return 0;
}


