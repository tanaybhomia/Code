class dog():
	def __init__(self,name,breed,age):
		self.name = name
		self.breed = breed
		self.age = age

	def display(self):
		print("Name , Breed and Age of Your Dog is :",self.name," ",self.breed," ",self.age)
		

name = input("Insert Name of Your Dog :")
breed = input("Insert Name of Your Dog :")
age = input("Insert Name of Your Dog :")

obj = dog(name,breed,age)

obj.display()

