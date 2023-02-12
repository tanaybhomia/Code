import tkinter as tk

def Addition():
    no1 = E1.get()
    no1=int(no1)
    no2 = E2.get()
    no2=int(no2)
    ans = int(no1 + no2)
    ans=int(ans)
    ans1=tk.Label(Main,text=ans)
    ans1.grid(row=5,column=1)

def Subtraction():
    no1 = int(E1.get())
    no2 = int(E2.get())
    ans = int(no1) - int(no2)
    L3.config('Subtraction - ',ans)

def Multiplication():
    no1 = int(E1.get())
    no2 = int(E2.get())
    ans = int(no1) * int(no2)
    L3.config('Multiplication - ',ans)

def Division():
    no1 = int(E1.get())
    no2 = int(E2.get())
    ans = int(no1) / int(no2)
    L3.config('Division - ',ans)

Main = tk.Tk()
Main.title("Calculation")

L1 = tk.Label(Main, text = 'Enter First Number - ')
L1.grid(row = 0, column = 0)

E1 = tk.Entry(Main)
E1.grid(row = 0, column = 1)

L2 = tk.Label(Main, text = 'Enter Second Number - ')
L2.grid(row = 1, column = 0)

E2 = tk.Entry(Main)
E2.grid(row = 1, column = 1)

B1 = tk.Button(Main, text = 'ADD', command = Addition)
B1.grid(row = 2, column = 0)

B2 = tk.Button(Main, text = 'SUB', command = Subtraction)
B2.grid(row = 2, column = 1)

B3 = tk.Button(Main, text = 'MULTI', command = Multiplication)
B3.grid(row = 3, column = 0)

B4 = tk.Button(Main, text = 'DIV', command = Division)
B4.grid(row = 3, column = 1)

L3 = tk.Label(Main, text = ' ')
L3.grid(row = 4, column = 0)

L4=tk.Label(Main,text="Ans is :")
L4.grid(row=5,column=0)

Main.mainloop()