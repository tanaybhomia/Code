n=int(input("Enter a Variable = "))
rev=0
rev=int(rev)
while (n!=0):
	rem=n%10
	rev=rev*10+rem
	n=int(n/10)
print("Reverse of the Number is : ",rev)
