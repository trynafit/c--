product = 1
addition = 0
count = 0

while True:
    inp = input("Enter value: ")
    if inp == "q":
        break
    inp = int(inp)
    count = count + 1
    product = product * inp
    addition = addition + inp

if count > 0:
    print("Product =", product)
    print("Avg =", addition / count)
else:
    print("No numbers entered.")

