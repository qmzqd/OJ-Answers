#include <iostream>

using namespace std;
int age(int n){
	if (n==5)   //�߽� 
		return 10;     
	return age(n+1)+2; // ���� 
}
int main(){
// ����: 1 �߽�  2 ���ƹ�ʽ 3 �ظ�����ִ��

// �ݹ�: 1 �߽�  2 ���ƹ���  3 ���� 
	cout<<age(1)<<endl;
	 
	return 0;
}


