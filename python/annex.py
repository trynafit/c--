import numpy as np
import pandas as pd

# if u have unicode error use r
# if u have utf error we add ,encoding = 'latin1' at last of the path 
item_category  = pd.read_csv(r"C:\Users\KRISH\OneDrive\Desktop\Python(STC)\CSv files\annex1.csv")
sales = pd.read_csv(r"C:\Users\KRISH\OneDrive\Desktop\Python(STC)\CSv files\annex2.csv")
wholesale = pd.read_csv(r"C:\Users\KRISH\OneDrive\Desktop\Python(STC)\CSv files\annex3.csv")
loss_rate = pd.read_csv(r"C:\Users\KRISH\OneDrive\Desktop\Python(STC)\CSv files\annex4.csv")

# check all duplicates ,null ,describe,head,
print(item_category.head())
for i in item_category.columns:
    print(i)
    print("All unique items\n",item_category[i].unique())
    print("*")
    print("No. of al unique items\n",item_category[i].nunique())
    print("",end = "\n\n")

print("Total Null values ",item_category.isnull().sum())
print("duplicated values",item_category.duplicated().sum())
print(item_category.describe())
print("shape", item_category.shape)
print("type : ", type(item_category))

print("\n\n")


print(sales.head())
for i in sales.columns:
    print(i)
    print("All unique items\n",sales[i].unique())
    print("*")
    print("No. of al unique items\n",sales[i].nunique())
    print("",end = "\n\n")

print("Total Null values ",sales.isnull().sum())
print("duplicated values",sales.duplicated().sum())
print(sales.describe())
print("shape", sales.shape)
print("type : ", type(sales))

print("\n\n")

print(wholesale.head())
for i in wholesale.columns:
    print(i)
    print("All unique items\n",wholesale[i].unique())
    print("*")
    print("No. of al unique items\n",wholesale[i].nunique())
    print("",end = "\n\n")

print("Total Null values ",wholesale.isnull().sum())
print("duplicated values",wholesale.duplicated().sum())
print(wholesale.describe())
print("shape", wholesale.shape)
print("type : ", type(wholesale))

print("\n\n")

print(loss_rate.head())
for i in loss_rate.columns:
    print(i)
    print("All unique items\n",loss_rate[i].unique())
    print("*")
    print("No. of al unique items\n",loss_rate[i].nunique())
    print("",end = "\n\n")

print("Total Null values ",loss_rate.isnull().sum())
print("duplicated values",loss_rate.duplicated().sum())
print(loss_rate.describe())
print("shape", loss_rate.shape)
print("type : ", type(loss_rate))

print("\n\n")