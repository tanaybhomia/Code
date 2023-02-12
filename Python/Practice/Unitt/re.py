import _re 

pattern="^a.s$"
stringt="ass"
result=re.match(pattern,stringt)

if result:
	print("Successfull")
else:
	print("Unsuccessfull")
