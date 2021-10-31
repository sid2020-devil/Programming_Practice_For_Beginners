# Recursive function to return gcd of a and b
def GCD(a, b):
  
    # Everything divides 0
    if (a == 0):
        return b
    if (b == 0):
        return a
  
    # base case
    if (a == b):
        return a
  
    # a is greater
    if (a > b):
        return GCD(a-b, b)
    # b is greater
    else:
        return GCD(a, b-a)

print(GCD(24,18))
# prints 6 in terminal