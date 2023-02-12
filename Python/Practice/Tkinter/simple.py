import tkinter
from tkinter import *
from tkinter import messagebox

#creating the main window 
window=Tk()

#functions
def submition():
	messagebox.showinfo("Message Box","Entry Submitted")

def clear():
	entry1.set(" ")
	entry.set(" ")

#creating the window 
#Name 
name=Label(window,text="Name : ")
name.grid(row=0,column=0)
entry=Entry(window)
entry.grid(row=0,column=1)

#Roll No
name1=Label(window,text="Roll : ")
name1.grid(row=1,column=0)
entry1=Entry(window)
entry1.grid(row=1,column=1)

#Submit Button 
submit=Button(window,text="Submit",command=submition,height=3,width=10)
submit.grid(row=2,column=0,padx=20,pady=20)

#Submit Button 
submit1=Button(window,text="Clear",command=clear,height=3,width=10)
submit1.grid(row=2,column=1,padx=20,pady=20)

window.mainloop()
