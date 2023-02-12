import tkinter
from tkinter import *
from tkinter import messagebox

#creating the main window 
window=Tk()

#functions 
def square():
	x=int(entry.get())
	x=int(x)
	ans=x*x
	v=Label(window,text=ans).grid(row=2,column=2)
	
def clear():
	pass

#adding widgets 
value=Label(window,text="Find the Square : ")
value.grid(row=1,column=1)
entry=Entry(window)
entry.grid(row=1,column=2)
output=Label(window,text="Square is : ")
output.grid(row=2,column=1)
square=Button(window,text="Square",command=square,height=2,width=5)
square.grid(row=3,column=1,pady=20)
clear=Button(window,text="Clear",height=2,width=5,command=clear)
clear.grid(row=3,column=2)
window.mainloop()
