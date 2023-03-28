vathmos=float(input("Δώσε βαθμό μαθητή (0-20): "));

if(0<=vathmos<=9.5):
    print("ΚΑΚΩΣ");
elif(vathmos<=13):
    print("ΜΕΤΡΙΑ");
elif(vathmos<=16):
    print("ΚΑΛΑ");
elif(vathmos<=18):
    print("ΠΟΛΥ ΚΑΛΑ");
else:
    print("ΑΡΙΣΤΑ");
    
    ##Προϋποθέτουμε ότι ο χρήστης δεν εισάγει βαθμούς <0 ή >20
