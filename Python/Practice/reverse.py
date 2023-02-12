i=1
rev=0
n=int(input("Enter a Number :"))
while n!=0:
    rem=n%10
    rev=rev*10+rem
    n=int(n/10)
print(rev)