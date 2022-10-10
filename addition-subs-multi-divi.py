print("1. Addition")
print("2. Substraction")
print("3. Multiplication")
print("4. Division")
print("enter a choice")
choice=int(input())
match choice:

 case 1:
    print("enter a two number")
    a,b=int(input()),int(input())
    c=a+b
    print("Sum is ",c)
 case 2:
    print("enter a two number") 
    a,b=int(input()),int(input())
    c=a-b
    print("Substraction is ",c)
 case 3:
    print("enter a two number")
    a,b=int(input()),int(input())
    c=a*b
    print("Multiplication is ",c)
 case 4:
    print("enter a two number")
    a,b=int(input()),int(input())
    c=a/b
    print("Division is ",c)

 case _:
    print("invailid number")
