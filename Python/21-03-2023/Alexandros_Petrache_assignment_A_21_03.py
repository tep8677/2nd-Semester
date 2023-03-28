counter=0;
athroisma=0;
average=0;

while True:
    inputNum=input("Δώσε αριθμό ή γράψε q' όταν τελειώσεις:");
    if(inputNum=="q'"):
        break;
    inputNum=float(inputNum);
    counter+=1;
    athroisma+=inputNum;
if(counter>0):average=athroisma/counter;
print("Δώθηκαν συνολικά {} αριθμοί.\
\nΤο άθροισμα τους ειναι {}.\
\nΟ μέσος όρος είναι %0.2f.".format(counter,athroisma) %(average));
    
