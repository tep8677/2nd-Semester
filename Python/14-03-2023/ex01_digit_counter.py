inputNum=int(input("Enter a number : "));


if (10<=inputNum<=99): #we could instead use <100 here
    print("Double Digit")
    
elif(99<inputNum<=999): #and here the expression would be inputNum<1000.
    print("Triple Digit")
    
elif(999<inputNum<=9999):#but we are also testing Python's ability of writing expressions like(a<b<c)
    print("Quadrouple Digit")
    
else:print("The number doesn't belong in any of the available categories")
