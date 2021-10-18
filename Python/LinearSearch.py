n=int(input("Enter no. of elements "))
arr=[]
print("Enter elements one by one ")
for i in range(0,n):
    el=int(input())
    arr.append(el)
x=int(input("Enter element to be searched for "))
flag=0
for el in arr:
    if el==x:
        flag=1
        print("Element found from position %d"%i)
        break
if flag==0:
    print("Element not found")
    
  #Contributed by Anurag
