age = input("Hey employee, Enter your age")
age = int(age)
sex = input("Sex(M or F) :")
Marital_status = input("Marital status (Yor N):")
if(age< 20 or age > 60):
       print("Age Error")
elif(sex == "F"):
       print("Can only work in Urban Areas.")
elif(sex == "M" and (20 <= age < 40)):
       print("Can work anywhere.")
elif(sex == "M" and (40 <= age < 60)):
       print("Can only work in Urban Areas.")
else:
       ("Some data is wrong")