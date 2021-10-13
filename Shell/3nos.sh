echo "Enter the nos"
read num1 num2 num3
if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]
then
    echo $num1 "is greater than" $num2 and $num3
else if [ $num2 -gt $num3 ]
then
    echo $num2 "is greater than" $num1 and $num3
else   
    echo $num3 "is greater than" $num1  and $num2
fi
fi