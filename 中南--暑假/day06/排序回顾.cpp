#include <iostream>

using namespace std;
const int N=1e7;
int p[N]; 
int main(){
//  WA 答案错误  TEl超时   RE数组超限   512MB
//  比赛限时 1s=>1000ms  循环次数不超过2000W 
	int p[10]={5,7,3,2,9,4,1,8,6,0};  
//  桶排序 : 利用数组下标进行排序  数据大小 1KW   时间复杂度O n 
//  冒泡排序: 具有稳定性   时间复杂度  O n^n 
//	for(int i=1;i<10;i++){   // 外层循环次数  
//		bool flag= true;
//		for(int j=0;j<10-i;j++) //  内层   进行比较  1  优化 
//			if(p[j]>p[j+1]){  // 满足 > 
//				swap(p[j],p[j+1]); //交换
//				flag= false;  // 修改标记 
//			}
//		if(flag) break;  // 2 优化  
//	}

//  选择排序  缺点不稳定   时间复杂度 O n^n 
//	for(int i=0;i<10;i++){
//		int k=i,minn=p[i];  // k minn 位置 值
//		for(int j=i+1;j<10;j++){  // i 的右侧区域 
//			if(p[j]<minn){  //找到更小的 
//				minn= p[j]; // 保存 
//				k= j;       // 记录 
//			}
//		} 
//		swap(p[k],p[i]);  //交换 
//	} 
//  插入排序  优点 具有稳定性   时间复杂度 O n^n 
	for(int i=0;i<10;i++){
		int k=i,minn=p[i];
		for(int j=i-1;j>=0;j--){  // i 的左侧区域 
			if(p[j]>minn){   //找到比 minn大 
				swap(p[j],p[k]); // 交换 
				k= j;            // 更新 位置 
			}else break;
		}
	}
//  快速排序
//	算法头文件 algorithm sort(起始位,结束位,规则函数) 
	
	
	
//  归并排序
//  堆排序 
	for(int i=0;i<10;i++) cout<<p[i]<<" ";
	return 0;
}


