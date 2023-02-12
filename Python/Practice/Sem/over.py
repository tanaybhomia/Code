class first():
    def firstfunc(self):
        print("This is Function of the First Class \n")

class second(first):
    def firstfunc(self):
        print("This is Function of the Second Class \n")


obj=second()
obj.firstfunc()