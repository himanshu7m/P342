#1811090
print('Programme to print sum of 1 to n integers')

def sum(n):
    s = 0
    for i in range(n+1):
        s += i
    if s == 0:
        print('Please enter the positive number')
    else:
        print(f'Sum of 1 to {n} integers is: {s}')


n = int(input('Insert the value of integer n: '))
sum(n)

sum(100)