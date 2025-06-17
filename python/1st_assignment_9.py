size = input("Enter pizza size (small/medium/large): ").lower()
pepperoni = input("Do you want pepperoni? (yes/no): ").lower()
cheese = input("Do you want extra cheese? (yes/no): ").lower()

bill = 0

if size == "small":
    bill = 100
    if pepperoni == "yes":
        bill += 30
elif size == "medium":
    bill = 200
    if pepperoni == "yes":
        bill += 50
elif size == "large":
    bill = 300
    if pepperoni == "yes":
        bill += 50
else:
    print("Invalid size")

if cheese == "yes":
    bill += 20

if bill > 0:
    print("Your total bill is Rs.", bill)
