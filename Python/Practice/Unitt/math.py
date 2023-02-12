lv=['a','b',48,50]
lv1=[]
for i in lv:
	i=str(i)
	if i.isalpha():
		lv1.extend(i)
print(lv1)	
