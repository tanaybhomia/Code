def reversing(no):
	rev=0
	no1=no
	while no!=0:
		rem=no%10
		rev=rev*10+rem
		no=int(no/10)
	print("Reverse of the Number is :",rev)
	if (rev==no1):
		print("The Number is Pallindrome")
n=int(input("Enter the Number : "))
reversing(n)
