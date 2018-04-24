l = [56, 12, 1, 99, 1000, 234, 33, 55, 99, 812]

d = []

l.sort()

a = 0

for i in l:
    a += i
    d.append(a)

print(d)
print(sum(d[:-1])/10)
