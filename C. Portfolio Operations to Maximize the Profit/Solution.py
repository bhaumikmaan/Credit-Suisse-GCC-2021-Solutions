### KNOWLEDGE IS POWER  ###

#!/bin/python3

import math
import os
import random
import re
import sys

def portfolio_profit_maximisation(maxSum, a, b):
    # Write your code here
    no_of_selection = 0
    list_sum = a + b
    list_sum.sort()
    
    for integer in list_sum:
        if maxSum - integer > 0:
            maxSum -= integer
            no_of_selection += 1
            
        else:
            break
    return no_of_selection

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    maxSum = int(first_multiple_input[2])

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = portfolio_profit_maximisation(maxSum, a, b)

    print(result)
