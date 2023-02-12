def armstrong(no):
	no1=no
	rev=0
	while no!=0:
		rem=no%10
		rev=rev*10+rem*rem*rem
		no=int(no/10)
	print(rev)
	if (rev==no1):
		print("The Number is Armstrong")
	else:
		print("The Number is not Armstrong")

no=int(input("Enter the Number = "))
print("Checking if the Number is Armstrong . . . .")
armstrong(no)
