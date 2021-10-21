endpt=int(input("How many numbers in fibonacci sequence you wish to print "))
first=0
second=1
third=0
print("%d\n%d"%(first,second))
for i in range(0,endpt):
    third=first+second
    first=second
    second=third
    print("%d"%third)
    
  #Contributed by Anurag
