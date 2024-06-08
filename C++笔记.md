# 程序结构
## 顺序结构
- 程序代码自上而下的执行。

## 分支结构
- `if` 条件语句
- `else` 条件语句的补充
- `switch` 多条件选择
- 三目运算符:condition ? value_if_true : value_if_false !

## 循环结构
- 根据条件重复执行代码块。

# 数据类型
## 整数
- `short`:2字节
- `int`:4字节
- `long long`:8字节

## 浮点数
- `float`:单精度，4字节，有效位7位
- `double`:双精度，8字节，有效位15位

## 字符
- `char`:1字节

## 布尔
- `bool`:1字节

# 数据类型转换
## 隐式转换
- 程序自动进行类型转换。

## 强制转换
- 通过函数或类型转换操作符进行转换。

# 算法与排序
## 桶排序
- 利用数组下标排序，适用于数据大小约1KW，时间复杂度O(n)。
int* tong(int *arr, int n) {
    int i;
	int maxValue = arr[0];
	for (i = 1; i < n; i++) 
		if (arr[i] > maxValue)  // 输入数据的最大值
			maxValue = arr[i]; 
	
	// 设置10个桶，依次0，1，，，9
	const int bucketCnt = 10;
	vector<int> buckets[bucketCnt];
	// 桶的大小bucketSize根据数组最大值确定：比如最大值99， 桶大小10
	// 最大值999，桶大小100
	// 根据最高位数字映射到相应的桶，映射函数为 arr[i]/bucketSize
	int bucketSize = 1;
	while (maxValue) {		//求最大尺寸 
		maxValue /= 10;
		bucketSize *= 10;
	}
	bucketSize /= 10;		//桶的个数 
	// 入桶
	for (int i=0; i<n; i++) {
		int idx = arr[i]/bucketSize;			//放入对应的桶 
		buckets[idx].push_back(arr[i]);
		// 对该桶使用插入排序(因为数据过少，插入排序即可)，维持该桶的有序性
		for (int j=int(buckets[idx].size())-1; j>0; j--) {
			if (buckets[idx][j]<buckets[idx][j-1]) {
				swap(buckets[idx][j], buckets[idx][j-1]);
			}
		}
	}
	// 顺序访问桶，得到有序数组
	for (int i=0, k=0; i<bucketCnt; i++) {
		for (int j=0; j<int(buckets[i].size()); j++) {
			arr[k++] = buckets[i][j];
		}
	}
	return arr;
}

## 冒泡排序
- 稳定性，时间复杂度O(n^2)。
void maopao(int a[], int n){
   int i, j, temp;
   for (i = 0; i < n - 1; i++){
      for (j = 0; j < n - 1 - i; j++){
         if (a[j] > a[j + 1]){
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
         }
      }
   }
}
## 插入排序
- 稳定性，时间复杂度O(n^2)。

# 输入输出
## scanf
- 格式:`%d`, `%ld`, `%f`, `%lf`, `%.2f`, `%.2lf`, `%c`

# 字符串操作
- find:查找子串。
- toupper / tolower:大小写转换。
- swap:交换元素。
- sort:快速排序。

# 栈操作
## stack
- 创建:`stack<int>;`
- 判断空:`s.empty()`
- 获取大小:`s.size()`
- 获取栈顶:`s.top()`
- 插入元素:`s.push()`
- 删除栈顶:`s.pop()`

# 数制转换
## 二进制转换
- 十六进制转二进制:1位占4位。
- 八进制转二进制:1位占3位。

# 位运算
- 按位与 `&`
- 按位或 `|`

# 类型转换操作符
- static_cast
- floor
- ceil

# 其他
- length():获取字符串长度。
- __gcd():获取最大公因数。

# 错误代码
- WA:答案错误
- TLE:超时
- RE:数组超限