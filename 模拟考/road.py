import math   
n, d = map(int, input().split())  
v = list(map(int, input().split()))  
a = list(map(int, input().split()))  
dp = [0] * n  
dp[0] = 0  
for i in range(1, n):  
    dp[i] = min(dp[i-1], dp[i-1] + a[i-1] * math.ceil(v[i-1] / d))  
print(dp[n-1])