import hashlib
t = hashlib.new('sha')
t.update(input().encode())
print(t.hexdigest())