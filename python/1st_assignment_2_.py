a = int(input("enter a number : "))
if a%3==0 :
    if a%5==0 :
        print("fizzbuzz")
    else:
        print("fizz")
else:
    if a%5==0:
        print("buzz")