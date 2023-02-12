import random
Lucky_number = random.randint(1,200)
print(". . . . Welcome to a Lucky Draw . . . .")
list = []
for i in range(1): #For first digit
    list.append(random.randint(1,200))

x = ''
for each in list:
    x += str(each)
    
Combination = int(x)
print("YOUR NUMBER - ",Combination)
print("Lucky number is : ", Lucky_number)
if (Lucky_number == Combination):
    print("Congratulation! You are a winner.")
else :
    print("Sorry! Try your luck next time. :)")
