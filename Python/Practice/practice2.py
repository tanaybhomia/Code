# Even or Odd 
c=int(input("Enter a Number : "))
if (c%2==0):
	print("Number is even")
else:
	print("Number is Odd")
print("\n")
	
# Fibonnaci Series 
no=0
no1=1
n=int(input("Enter a Number for Printing Fibonnaci Series : "))
i=1
print(no)
print(no1)
while (i<=n-2):
	sumi=no+no1
	no=no1
	no1=sumi
	print(sumi)
	i=i+1
print("\n")

# Reverse Function 
number=int(input("Enter a Number for Reversing : "))
rev=0
while (number!=0):
	rem=number%10
	rev=rev*10+rem
	number=int(number/10)
print(rev)
print("\n")

# Histogram of the numbers 369
l=['*']
print(l*3)
print(l*6)
print(l*9)
print("\n")

#Printing the List which is less than 5
l=[1,2,3,47,8,9,0]
i=1
for i in l:
	if(i<=5):
		print(i)
	else:
		continue

# 
