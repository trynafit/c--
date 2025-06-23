import numpy as np
import string
import pandas as pd
# Python Coding Assignment 
"""
1. Score Validation & Classification (If-Else, Looping) 
Write a Python program that: 
• Continuously asks the user to enter a score (0-100). 
• If the score is outside this range, keep asking until a valid score is entered. 
• Classify the score as: 
o "Fail" (below 40) 
o "Pass" (40-59) 
o "Merit" (60-79) 
o "Distinction" (80 or above) 
"""
def classify_score(score):
    if score < 40:
        return "Fail"
    elif 40 <= score < 60:
        return "Pass"
    elif 60 <= score < 80:
        return "Merit"
    else:
        return "Distinction"


while True:
    try:
        score = float(input("Enter a score (0-100): "))
        if 0 <= score <= 100:
            print(score)
            break
        else:
            print("Score must be between 0 and 100. Please try again.")
            classify_score(score)
    except ValueError:
        print("Invalid input. Please enter a numeric value.")
        classify_score(score)
 
 
 
"""
2. Number Spiral Pattern (Loops & Nested Loops) 
Write a Python program that generates the following pattern based on an input n: 
Example for n = 4: 
 
1   2   3   4   
12  13  14  5   
11  16  15  6   
10  9   8   7   
The numbers should be filled in a spiral order.
""" 






""" 
3. Employee Data Sorting (Dictionaries & Lists) 
Create a Python program that: 
• Accepts details of n employees (name, department, salary) and stores them in a 
dictionary. 
• Sorts and displays the employees by salary in descending order. 
• Finds and prints the department of the employee with the highest salary. 
 """
n = int(input("Total no. of employees : "))
employees = []
for i in range(n):
    name = input(f"Enter name of employee {i+1}: ")
    department = input(f"Enter department of employee {i+1}: ")
    salary = float(input(f"Enter salary of employee {i+1}: "))
    employees.append({"name": name, "department": department, "salary": salary})

print("\nEmployees sorted by salary in descending order:")
employees.sort(key=lambda x: x['salary'], reverse=True)
for emp in employees:
    print(f"Name: {emp['name']}, Department: {emp['department']}, Salary: {emp['salary']}") 

highest_salary_employee = employees[0]
for emp in employees:
    if emp['salary'] > highest_salary_employee['salary']:
        highest_salary_employee = emp
        
print(f"\nEmployee with the highest salary: {highest_salary_employee['name']} from {highest_salary_employee['department']} department with a salary of {highest_salary_employee['salary']}")

 
""""4. Word Frequency Analysis (Strings & Dictionaries) 
Write a program that: 
• Takes a paragraph as input. 
• Removes punctuation and converts everything to lowercase. 
• Creates a dictionary where keys are words and values are their frequencies. 
• Displays the top 3 most frequently occurring words (excluding common words like 
"the", "is", "and", "to"). 
"""
paragraph = input("Enter a paragraph: ")
# Remove punctuation and convert to lowercase
translator = str.maketrans('', '', string.punctuation)
cleaned_paragraph = paragraph.translate(translator).lower()
words = cleaned_paragraph.split()
common_words = {"the", "is", "and", "to"}
word_count = {}
for word in words:
    if word not in common_words:
        if word in word_count:
            word_count[word] += 1
        else:
            word_count[word] = 1
# Sort the dictionary by frequency and get the top 3 words
top_words = sorted(word_count.items(), key=lambda x: x[1], reverse=True)[:3]
print("Top 3 most frequently occurring words (excluding common words):", top_words)

"""5. Recursive Sum of Digits 
Write a recursive function sum_of_digits(n) that computes the sum of the digits of n. 
Example: 
sum_of_digits(987) → 9 + 8 + 7 = 24   
"""

def sum_of_digits(n):
    if n == 0:
        return 0
    else:
        return n % 10 + sum_of_digits(n // 10)
n = int(input("Enter a number to compute the sum of its digits: "))
result = sum_of_digits(n)
print(f"The sum of the digits of {n} is: {result}")
 
""" 
6. Matrix Operations (Lists & Loops) 
Write a program that: 
• Takes a 3x3 matrix as input from the user. 
• Computes the sum of each row and stores it in a list. 
• Computes the sum of each column and stores it in another list. 
• Prints both lists. 
Example Input: 
 
1 2 3   
4 5 6   
7 8 9   
Example Output: 
less 
 
Row sums: [6, 15, 24]   
Column sums: [12, 15, 18]   
""" 
# Initialize an empty matrix
matrix = []

# Input the 3x3 matrix from the user
print("Enter the 3x3 matrix (row by row):")
for i in range(3):
    row = []
    for j in range(3):
        value = int(input(f"Enter value for row {i+1}, column {j+1}: "))
        row.append(value)
    matrix.append(row)

# Calculate row sums
row_sums = []
for row in matrix:
    total = 0
    for num in row:
        total += num
    row_sums.append(total)

# Calculate column sums
col_sums = []
for col in range(3):
    total = 0
    for row in matrix:
        total += row[col]
    col_sums.append(total)


print("Row sums:", row_sums)
print("Column sums:", col_sums)




"""
7. Prime Number Identification (Functions & Loops) 
Write a function is_prime(n) that returns True if n is prime and False otherwise. 
Then, write a program that: 
• Accepts a number N from the user. 
• Finds and prints all prime numbers from 2 to N. 
"""

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

N = int(input("Enter a number N: "))
print("Prime numbers from 2 to", N, "are:")
for num in range(2, N + 1):
    if is_prime(num):
        print(num)





""" 
8. Finding Unique Elements (Lists & Sets) 
Write a program that: 
• Accepts a list of numbers from the user. 
• Finds and displays only the unique elements (i.e., removes duplicates). 
Example Input: 
csharp 
 
[1, 2, 2, 3, 4, 4, 5, 6]   
Example Output: 
less 
 
Unique elements: [1, 2, 3, 4, 5, 6]   
""" 

def find_unique_elements(numbers):
    unique_elements = list(set(numbers))
    return unique_elements 
numbers = input("Enter a list of numbers separated by spaces: ")
numbers = list(map(int, numbers.split()))
unique_numbers = find_unique_elements(numbers)
print("Unique elements:", unique_numbers)



"""
9. Reverse Words in a Sentence (String Manipulation) 
Write a Python program that: 
• Takes a sentence as input. 
• Reverses the order of words without reversing individual words. 
• Prints the modified sentence. 
Example Input: 
 
 
"The quick brown fox"   
Example Output: 
 
 
"fox brown quick The"  

"""

def reverse_words(sentence):
    words = sentence.split()
    reversed_sentence = ' '.join(reversed(words))
    return reversed_sentence
sentence = input("Enter a sentence: ")
reversed_sentence = reverse_words(sentence)
print("Reversed sentence:", reversed_sentence)



""" 
10. Student Marks Analysis (Lists, Loops, Functions) 
Write a program that: 
• Accepts marks of n students in a list. 
• Computes and prints: 
o Average Marks 
o Highest and Lowest Marks 
o Number of students scoring above the average 
"""

def student_marks_analysis(marks):
    average = sum(marks) / len(marks)
    highest = max(marks)
    lowest = min(marks)
    above_average_count = sum(1 for mark in marks if mark > average)
    
    return average, highest, lowest, above_average_count

n = int(input("Enter the number of students: "))
marks = []  
for i in range(n):
    mark = float(input(f"Enter marks for student {i + 1}: "))
    marks.append(mark)
average, highest, lowest, above_average_count = student_marks_analysis(marks)
print(f"Average Marks: {average}")
print(f"Highest Marks: {highest}")
print(f"Lowest Marks: {lowest}")
print(f"Number of students scoring above average: {above_average_count}")