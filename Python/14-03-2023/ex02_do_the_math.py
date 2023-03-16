
numOne,numTwo,praksh=input\
                    ("Δώσε 2 αριθμούς και έναν τελεστή\
                        \n ('+' ή '-' ή '*' ή '/')\
                        \n χωρισμένους με ',': ")\
                        .split(",");
numOne=float(numOne);
numTwo=float(numTwo);
#numOne,numTwo=float(numOne),float(numTwo);

if (praksh=='+'):
    print(numOne+numTwo)
elif (praksh=='-'):
    print(numOne+numTwo)
elif (praksh=='*'):
    print(numOne*numTwo)
elif (praksh=='/'):
    print(numOne/numTwo);
else:
    print("Hello? Not valid.")
