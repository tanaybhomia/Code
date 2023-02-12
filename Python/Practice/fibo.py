def fibo(no):
	no1=0
	no2=1
	i=1
	while i<=no-2:
		sum1=no1+no2	
		print(sum1)	
		no1=no2
		no2=sum1
		i=i+1

no=int(input("Enter the Number = "))
no1=0
no2=1
print(no1)
print(no2)
fibo(no)
