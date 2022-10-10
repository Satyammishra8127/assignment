def f1(n):
    
    if n==0:
     return 0
      
    s=f1(n-1)
    print(n)
    return s
r=f1(9)
print(r)

