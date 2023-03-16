# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
print("Hello World","What a great day",sep="\\");
print("New line?",end="\\");
print("Or maybe not")

a,b,c,d=input("Enter your numbers, separated by a comma: ").split(",")
print(a,b,c,d)

#a,b,c,d=input("Enter your numbers, separated by a \: ").split("\\")
#print(a,b,c,d)

print("The value of a is %d while b is %.3f" % (int(a), int(b)*0.35 ) );


a=("The value of a is {1} while b is {0}".format(0.35*int(b),a))
print(a);

print(len(a)); #length of string
