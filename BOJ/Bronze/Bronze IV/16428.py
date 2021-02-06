a, b = map(int, input().split())
n, m = divmod(a,b)

if a!=0 and b<0:
    n+=1
    m-=b

print(n)
print(m)