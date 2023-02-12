def fact(no):
	fact=1
	i=1
	while i<=no:
		fact=fact*i
		i=i+1
	print(fact)

no=int(input("Enter the Number : "))
fact(no)
