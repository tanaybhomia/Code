f=open("hello.txt","a")
f.write("\nAnother Line")
f.close()

f=open("hello.txt","r")
print(f.read())
f.close()