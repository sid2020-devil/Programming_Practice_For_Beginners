# Give the number of rows of the diamond pattern as static input and store it in a variable.
diamondrows = 5

for m in range(1, diamondrows+1):
   
    for n in range(1, diamondrows - m + 1):
      
        print(end=' ')
  
    for l in range(0, (2 * m) - 1):
     
        print('*', end='')
    
    print()

for m in range(1, diamondrows):
  
    for n in range(1, m+1):
      
        print(end=' ')
  
    for l in range(1, (2 * (diamondrows - m))):
       
        print('*', end='')
  
    print()
