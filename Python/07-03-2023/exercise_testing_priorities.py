a=2;
b=5;
x=10;

y=b**a-a*x+b//a+b%a  #5^2-2*10+5//2+5%2 => 25-20+2+1= 5+3 = 8 .. omg i did 25-(20+2+1) in my brain and typed 2 Q_Q The rest were correct T_T
print(y);
y=b**a-a*x+(b//a+b)%a #5^2-2*10+(5//2+5)%2 => 25-20+7%2 = 5+1=6
print(y);
y=b**a-a*x+b//(a+b)%a #25-20+0 = 5 ?
print(y);
y=b**(a-a)*x+b//(a+b)%a #1*10+0 = 10?
print(y);
