def fibonacci(n):
    if n==1 or n==2:
        return 1
    x1=1
    x2=1
    for i in range(n-2):
        x0=x1+x2
        x2=x1
        x1=x0
    return x0

print(fibonacci(10))
