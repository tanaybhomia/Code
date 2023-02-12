list1 = [1,2,3,4,5]
list2 = [7,7,7,7,5]

count = 0
count=int(count)

for i in list1:
    count = count + 1
    for j in list2:
        if (i==j):
            print("Found a Location",count)
            