def min_cost(m, stores):
    stores.sort(key=lambda x: x[0])
    total_cost = 0 
    for a, b in stores:
        to_buy = min(b, m)
        total_cost += a * to_buy
        m -= to_buy
        if m <= 0:
            break
    return total_cost
m, n = map(int, input().split())
stores = []
for _ in range(n):
    a, b = map(int, input().split())
    stores.append((a, b))
print(min_cost(m, stores))

#9554