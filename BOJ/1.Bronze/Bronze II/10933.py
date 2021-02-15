import hashlib
t = hashlib.new('ripemd160')
t.update(input().encode())
print(t.hexdigest())