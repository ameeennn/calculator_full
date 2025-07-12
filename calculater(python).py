import math
print("\n\n***************\n\nthis is a calculator version very similar to normal app(not scientific) made  by \033[1mMuhammed Ameen M\033[0m\n\ninsta id: ameee.nnn\n*\n*****  read this [important] ^ *********\n\n")
def main():
    num1=float(input("enter first number     in case you need previous result as a operand enter it here\n"))
    num2=float(input("enter second number\n"))
    choice=input("enter operation number : addition(+)= 1 , subtraction(-)= 2 , multiplication(*)= 3  , division(/)= 4 \n")
    def switch(a):
        match a:
            case "1":
                print(num1+num2)
            case "2":
                print(num1-num2)
            case "3":
                print(num1*num2)
            case "4":
                if num2>0:
                    print(num1/num2)
                else:
                    print("second no. cant be zero")
    switch(choice)

def Tfun():
    choice = input("enter operation sin = 1  , cos = 2  , tan = 3  , cosec = 4  , sec = 5  , cot = 6  \n")
    val=float(input("enter value : \n"))
    match choice:
        case "1":
            print(math.sin(val))
        case "2":
            print(math.cos(val))
        case "3":
            print(math.tan(val))
        case "4":
            print(1/math.sin(val))
        case "5":
            print(1/math.cos(val))
        case "6":
            print(1/math.tan(val))
def access():
    option=input("Normal(arithmetic)==1 or Trigonometric==2\n")
    if option=="1":
        main()
    else:
        Tfun()
access()
choice2=input("do you want to continue ? y/n \n")
if choice2 == "y":
    access()
elif choice2 == "Y":
    access()

