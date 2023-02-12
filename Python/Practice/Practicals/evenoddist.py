mainlist = [1,2,3,4,5,6,7,8,9]
evenlist = []
oddlist = []

for i in mainlist:
    if (i % 2==0):
        evenlist.append(i)
    elif (i%2!=0):
        oddlist.append(i)

print(evenlist)
print(oddlist)