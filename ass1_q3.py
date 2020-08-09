#1811090
#Programme to find sum of 1 + 1/2 + 1/3 + ... till sum does not change by more than 0.001

sum = 0
i = 1
while (1/i) > 0.001:
    sum += (1/i)
    i += 1
    
print(f'Sum over 1 + 1/2 + 1/3 + ... till sum does not change by more than 0.001 is found to be "{sum}"')

