import tkinter
from tkinter import *
from tkinter import messagebox
 
# creating the main window 
window=Tk()
window.title("Finding the Square")

# creating functtions 
# Square Button
def sq():
	
	no=l1.get()
	no=int(no)
	ans=no*no
	squaree.set
	

# Clear Button
def cl():
	l1.set("")
	squaree.set("")
	
# adding widgets 
# Entry
l1=Label(window,text="Enter the Number ")
l1.grid(row=1,column=1)
# Square 
squarel=Label(window,text="Square of the number ")
squarel.grid(row=2,column=1)
squaree=Label(window,text=" Hello ")
squaree.grid(row=2,column=2)

# Square Buttton
l2=Button(window,text="Square")
l2.grid(row=3,column=1)

# Clear Button
l3=Button(window,text="Clear")
l3.grid(row=3,column=2)
window.mainloop()
