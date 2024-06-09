# 程序结构

## 顺序结构

- 程序代码按照编写的顺序，从上到下依次执行。

## 分支结构

- `if` 条件语句：根据条件是否满足来决定执行不同的代码块。
- `else` 条件语句：与`if`配合使用，当`if`中的条件不满足时执行。
- `switch` 多条件选择：允许根据一个变量的值选择多个执行路径之一。
- 三目运算符：`condition ? value_if_true : value_if_false`，用于基于条件的快速选择。

## 循环结构

- 根据给定条件重复执行一段代码，直到条件不再满足。

# 数据类型

## 整数

- `short`: 占用 2 字节的存储空间，通常有 16 位整数。
- `int`: 占用 4 字节的存储空间，是最常见的整数类型。
- `long long`: 占用 8 字节的存储空间，提供更大的整数范围。

## 浮点数

- `float`: 单精度浮点数，占用 4 字节，适用于需要小数的计算。
- `double`: 双精度浮点数，占用 8 字节，提供更高的精度。

## 字符

- `char`: 用于存储单个字符，占用 1 字节。

## 布尔

- `bool`: 存储逻辑值`true`或`false`，通常占用 1 字节。

# 数据类型转换

## 隐式转换

- 在不需要用户干预的情况下，编译器自动进行的类型转换。

## 强制转换

- 需要用户明确指定的类型转换，可以通过类型转换函数或操作符实现。

# 算法与排序

## 桶排序

- 将数组的元素分布到有限数量的桶里，每个桶再分别排序。

```c
int* tong(int *arr, int n) {
    int i;
    int maxValue = arr[0]; // 找到数组中的最大值
    for (i = 1; i < n; i++) {
        if (arr[i] > maxValue) maxValue = arr[i]; // 更新最大值
    }

    // 设置桶的数量和大小
    const int bucketCnt = 10;
    vector<int> buckets[bucketCnt];
    int bucketSize = 1;
    while (maxValue) {
        maxValue /= 10;
        bucketSize *= 10;
    }
    bucketSize /= 10;

    // 将元素分配到桶中
    for (int i = 0; i < n; i++) {
        int idx = arr[i] / bucketSize;
        buckets[idx].push_back(arr[i]);
    }

    // 对每个桶进行排序（这里使用插入排序）
    for (int i = 0; i < bucketCnt; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // 合并桶中元素
    int k = 0;
    for (int i = 0; i < bucketCnt; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[k++] = buckets[i][j];
        }
    }
    return arr;
}
```

## 冒泡排序

- 通过重复遍历要排序的数列，比较并交换相邻元素以实现排序。

```c
void maopao(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
```

## 插入排序

- 通过构建有序序列，对未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。

```c
void charu(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
```

# 输入输出

## scanf

- 用于从标准输入读取格式化数据。

# 字符串操作

- find: 在字符串中查找子串或字符。
- toupper / tolower: 转换字符串中字符的大小写。
- swap: 交换两个变量的值。
- sort: 对字符串中的字符进行排序。

# 栈操作

## stack

- 栈是一种后进先出（LIFO）的数据结构。

# 数制转换

## 二进制转换

- 十六进制转二进制：1 位十六进制数转换为 4 位二进制数。
- 八进制转二进制：1 位八进制数转换为 3 位二进制数。

# 位运算

- 按位与(`&`)：参与运算的两个位都为 1 时，结果为 1。
- 按位或(`|`)：参与运算的两个位中至少有一个为 1 时，结果为 1。

# 类型转换操作符

- static_cast：用于非多态类型的转换。
- floor：向下取整到最接近的整数。
- ceil：向上取整到最接近的整数。

# 其他

- length()：返回字符串的长度。
- \_\_gcd()：计算两个数的最大公约数。

# 错误代码

- WA: Wrong Answer，表示答案错误。
- TLE: Time Limit Exceeded，表示程序运行超时。
- RE: Runtime Error，表示运行时错误。
