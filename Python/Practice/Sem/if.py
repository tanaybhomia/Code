# IF Else without break or Continue

print("\nIF AND ELSE\n")
x = 1
y = 2 

if (x>y):
    print("X is Greater than y")
else :
    print("Y is Greater than x")
print("\n EN \n")

# IF Else with break and Continue

print("\nCONTINUE and BREAK\n")
for i in range( 1, 10):
    if (i==2):
        continue
    elif(i==4):
        continue
    elif(i==5):
        break;
    print(i)
print("\n EN \n")