num1,num2,num3=(input('Δώσε 3ις αριθμούς χωρισμένους με ",": ').split(','));

#Turning to int type
num1=int(num1);
num2=int(num2);
num3=int(num3);

#Variables we are going to use
summ=num1+num2+num3;
mult=num1*num2*num3;
avg=summ/3;

#1ος τρόπος
print('Το άθροισμα τους είναι: ',summ,sep="",end=". ");
print('Το γινόμενο τους είναι: ',mult,sep="",end=". ");
print('Ο μέσος όρος τους είναι: ',avg,sep="",end=". \n");


#2ος τρόπος - the C way
print('Το άθροισμα τους ειναι: %d.\
 Το γινόμενο τους ειναι: %d.\
 O μέσος όρος τους ειναι: %0.2f.' % (summ,mult,avg));

#3ος τρόπος - .format 
print('Το άθροισμα τους ειναι: {0}.\
 Το γινόμενο τους ειναι: {1}.\
 Ο μέσος όρος τους ειναι: {2}.' .format(summ,mult,avg));
