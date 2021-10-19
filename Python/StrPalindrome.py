string=input("Enter a string ")
rev=""
for i in reversed(string):
    rev=rev+i
print("Reversed String : %s"%rev)
if rev==string:
    print("The String is Palindrome")
else:
    print("The String is Not Palindrome")
