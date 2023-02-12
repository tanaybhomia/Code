def name(t):
	print("This is a Recursive Function : Yes")
	t=t-1
	while t<=10: 
		name(t)
		t=t+1
		
name(1)
