print('Program to find factorial of integer n')

def factorial(n):
    if n < 0:
        print('Factorial is not define for negative number')
    else:
        f = 1
        for i in range(1,n+1):
            f = f*i
        print(f'Factorial of {n}: {f}')


n = int(input('Enter integer n: '))
factorial(n)
