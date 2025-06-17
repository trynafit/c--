num = int(input("Enter a number: "))
for i in range(1, num + 1):
    if i % 2 == 0 and i % 3 == 0:
        print("Both")
    elif i % 2 == 0:
        print("Two")
    elif i % 3 == 0:
        print("Three")
    else:
        print("None")
