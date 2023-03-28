index=0;

while (index<11):
    index+=1;
    if ((index%2)==0):
        print("Skipping even number");
        continue;
    print(index);
    if (index==5):
        #break;
        print("Almost exited..")
else:
    print("No operations left");
