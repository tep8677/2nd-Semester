eisodhma=int(input("Δώσε εισόδημα: "))

if (0<=eisodhma<=10000):
    foros=0.05;
elif (eisodhma<=30000): ##με την προϋπόθεση ότι ο χρήστης
    foros=0.1;        ## δεν θα εισάγει αρνητικό εισόδημα
else:
    foros=0.2;
    
print("Ο φόρος είναι:",foros*eisodhma);
