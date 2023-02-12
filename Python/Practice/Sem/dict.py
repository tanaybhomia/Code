oxford = {
    1:"Tanay",
    2:"Manan",
    3:"Aryan",
    4:"Sarvesha"
}

val = oxford.values()
keys = oxford.keys()

print("Printing Dictionary Values :")
print("Values in the Dictionaries are : ",val,)
print("Keys in the Dictionaries are : ",keys)


del oxford[1]
print(oxford)

oxford.popitem()
print(oxford)

oxford.clear()
print(oxford)

del oxford
print("Dictionary Is Deleted")