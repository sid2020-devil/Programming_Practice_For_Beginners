# Multiplication table (from 1 to 10) in Python
num = 10
# Iterate 10 times from i = 1 to 10
for i in range(1, 11):
  for j in range(1, 11):
    print(j, 'x', i, '=', j*i ,end='\t')
  print()