A = int(input())
B = int(input())
C = int(input())

tmp = str(A*B*C)

for n in range(10):
    print(tmp.count(str(n)))