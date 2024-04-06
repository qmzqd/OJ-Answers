n = int(input())  
m = 0 
p = 0  
for i in range(n):
    v=int(input())
    if v>m:
        m=v
        p=i+1
print(p)  
print(m)