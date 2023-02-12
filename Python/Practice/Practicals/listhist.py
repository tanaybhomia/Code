list1 = list()

def hist(list1):
    for i in list1:
        print("*"*i)

for i in range (0,5):
    list1.append(int(input("Enter a Numbe :")))

hist(list1)