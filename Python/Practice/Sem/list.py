l = list()
l = [1,2,3,4,5]

l.append(6)
print(l)

l1 = list()
l1 = [34,5,6]

l.extend(l1)
print(l)

print("Deleting Values \n")

x = l.pop(0)
print(x)

del l[2]
print(l)

l.remove(34)
print(l)
