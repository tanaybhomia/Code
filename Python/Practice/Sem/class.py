class student ():
    def __init__(self,rid,name):
        self.id = rid
        self.name = name

    def display(self):
        print("Your ID is Not Applicable ",self.id)
        print("Sorry ",self.name," Apply Next Time")

obj = student(3,"Manan")
obj.display()
