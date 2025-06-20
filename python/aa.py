import numpy as np
import pandas as pd

# if u have unicode error use r
# if u have utf error we add ,encoding = 'latin1' at last of the path 
item_category  = pd.read_csv(r"C:\Users\DELL\Desktop\py c\annex1.csv")
wholesale = pd.read_csv(r"C:\Users\DELL\Desktop\py c\annex3.csv")
sales = pd.read_csv(r"C:\Users\DELL\Desktop\py c\annex2.csv")
loss_rate = pd.read_csv(r"C:\Users\DELL\Desktop\py c\annex4.csv")

# check all duplicates ,null ,describe,head,
print(item_category.head())
for i in item_category.columns:
    print(i)
    print("All unique items\n",item_category[i].unique())
    print("*")
    print("",end = "\n\n")

print("No. of al unique items\n",item_category[i].nunique())
print("Total Null values \n",item_category.isnull().sum())
print("duplicated values \n",item_category.duplicated().sum())
print("\n",item_category.describe())
print("Checking Rows and columns , Rows = {} ,Columns = {}\n".format(item_category.shape[0], item_category.shape[1]))
print("type : ", item_category.dtypes)
print("type : ", item_category.describe().astype(int)) # gives stats of numerical vlaues of columns


print("\n\n")


# sales  
print(sales.head())
print(sales.dtypes)
sales["Date"] = pd.to_datetime(sales["Date"])
print(sales.dtypes) 
print(sales.isnull().sum())
print(sales.duplicated().sum())
print("Checking Rows and columns , Rows = {} ,Columns = {}\n".format(sales.shape[0], sales.shape[1]))
print(sales.nunique())

print(sales.head())

#  Whole sales 
print(wholesale.head())
print(wholesale.dtypes)
print(wholesale.isnull().sum())
wholesale["Date"] = pd.to_datetime(sales["Date"])
print(wholesale.dtypes) 
print(wholesale.isnull().sum())
print(wholesale.duplicated().sum())
print("Checking Rows and columns , Rows = {} ,Columns = {}\n".format(wholesale.shape[0], wholesale.shape[1]))
print(wholesale.nunique())

for i in wholesale.columns : 
    print(i)
    print(wholesale[i].unique())
    print("*")
# print(wholesale.describe().astype(int))

# loss_rate

print(loss_rate.head())
print(loss_rate.dtypes)
print(loss_rate.describe().astype(int))

# Merging and combining the data

print(sales.head(2))
print(wholesale.head(2))
print(item_category.head(2))
print(loss_rate.head(2))

sales_wholesale_combine_data = pd.merge(sales,wholesale,how="left",on = ["Item Code" , "Date"])
sales_wholesale_combine_data.head()
sales_wholesale_combine_data.isnull().sum()
sales_wholesale_category = pd.merge(sales_wholesale_combine_data,item_category,how="left",on="Item Code")
final_data = pd.merge(sales_wholesale_category,loss_rate,how="left",on=["Item Code","Item Name"])
final_data.head()
final_data["total_sales"]=final_data["Quantity Sold (kilo)"]*final_data["Unit Selling Price (RMB/kg)"]
final_data.head()
final_data.isnull().sum()
final_data["Item Name"].nunique()
final_data["Category Name"].nunique()