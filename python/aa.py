import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import plotly.express as px
# if u have unicode error use r
# if u have utf error we add ,encoding = 'latin1' at last of the path 
item_category  = pd.read_csv(r"C:\Users\DELL\Desktop\py c\annex1.csv")
wholesale = pd.read_csv(r"C:\Users\DELL\Desktop\py c\annex3.csv")
sales = pd.read_csv(r"C:\Users\DELL\Desktop\py c\annex2.csv")
loss_rate = pd.read_csv(r"C:\Users\DELL\Desktop\py c\annex4.csv")

# print(item_category,sales,wholesale,loss_rate)

# check all duplicates ,null ,describe,head,dtype,unique,


print(item_category.head())
print()
print("Checking rows & columns , Rows = {},columns= {}".format(item_category.shape[0],item_category.shape[1]))
print()
print(item_category.nunique())
print()
print("Total Null values ",item_category.isnull().sum())
print("duplicated values",item_category.duplicated().sum())
print("\n\n")

for i in item_category.columns:
    print(i)
    print("All unique items\n",item_category[i].unique())
    print("*")
print()

print(item_category.dtypes)
print()

print(item_category.describe().astype(int))
print()

print(sales.head())
print()
print("Sales",sales.dtypes)
print()
sales["Date"]=pd.to_datetime(sales["Date"]) # converting datatype to datetime
print(sales.dtypes)
print()


print(sales.isnull().sum())
print()

print(sales.duplicated().sum())
print()

print("Checking rows & columns , Rows={},Columns={}".format(sales.shape[0],sales.shape[1]))
print(sales.nunique())
print()

print(wholesale.head())
print()
print(wholesale.dtypes)
print()

print(wholesale.isnull().sum())
print()

wholesale["Date"]=pd.to_datetime(wholesale["Date"])
print(wholesale.dtypes)
print()

print(" Checking rows & columns,Rows={},Columns={}".format(wholesale.shape[0],wholesale.shape[1]))
print(wholesale.nunique())
print()

print(wholesale.duplicated().sum())
print()

for i in wholesale.columns:
    print(i)
    print(wholesale[i].unique())
    print("*")
    print()

print(wholesale.describe())
print()

print(loss_rate.head())
print()
print(loss_rate.dtypes)
print()

print(loss_rate.isnull().sum())
print()

print(loss_rate.describe().astype(int))



# Merging and combining the data

print(sales.head(2))
print()
print(wholesale.head(2))
print()
print(item_category.head(2))
print()
print(loss_rate.head(2))
print()

sales_wholesale_combine_data = pd.merge(sales,wholesale,how="left",on = ["Item Code" , "Date"])
print(sales_wholesale_combine_data.head())
print()
print(sales_wholesale_combine_data.isnull().sum())
print()
sales_wholesale_category = pd.merge(sales_wholesale_combine_data,item_category,how = "left",on = "Item Code")
print(sales_wholesale_category.head())
print()

final_data = pd.merge(sales_wholesale_category,loss_rate,how = "left",on = ["Item Code","Item Name"])
final_data["total_sales"] = final_data["Quantity Sold (kilo)"]*final_data["Unit Selling Price (RMB/kg)"]

print(final_data.head())
print()
print(final_data.isnull().sum())
print()
print(final_data["Item Name"].unique())
print()
print(final_data["Category Name"].nunique())
print()

# make a group of category name and check the total sales done by category
category_name_wise_sales=final_data.groupby(["Category Name"])["total_sales"].sum().reset_index()
category_name_wise_sales["total_sales"]=category_name_wise_sales["total_sales"].astype(int)

print(category_name_wise_sales)
print()

# creating the charts with help of  matplotlib

plt.figure(figsize=(15,5))
plt.bar(category_name_wise_sales['Category Name'],category_name_wise_sales['total_sales'])
plt.xlabel('Category Name')
plt.ylabel('Total Sales')
plt.title('category_name_wise_sales.matplotlib')
plt.xticks(rotation=45,ha='right')
plt.show()


# creating the charts with help of seaborn

plt.figure(figsize=(15,5))
sns.barplot(x='Category Name',y='total_sales',data=category_name_wise_sales)
plt.xlabel('Category Name')
plt.ylabel('Total Sales')
plt.title('category_name_wise_sales.seaborn')
plt.xticks(rotation=45,ha='right')
plt.savefig('barplt1.png')
plt.show()

# creating the charts with the help of plotly

fig = px.bar(category_name_wise_sales,x='Category Name',y='total_sales',title='category_name_wise_sales.plotly')
fig.update_layout(xaxis=dict(tickangle=45))
fig.show()


print(category_name_wise_sales)
print()

# creating pie chart with matplotlib

plt.figure(figsize=(8,8))
plt.pie(category_name_wise_sales['total_sales'],labels=category_name_wise_sales['Category Name'],autopct='%1.2f%%')
plt.title('Pie Chart.matplotlib')
plt.show()

# creating pie chart with seaborn

plt.figure(figsize=(8,8))
plt.pie(category_name_wise_sales['total_sales'],labels=category_name_wise_sales['Category Name'],autopct='%1.2f%%')
plt.title('Pie Chart.seaborn')
plt.show()

# creating pie chart with plotly

fig=px.pie(category_name_wise_sales,values='total_sales',names='Category Name',title='Plotly Pie Chart')
fig.show()



# Extract Year and Month

final_data['Year']=final_data['Date'].dt.year
final_data['Month']=final_data['Date'].dt.month_name()

print(final_data)
print()

# creating line chart with matplotlib

sales_trend=final_data.groupby(final_data['Date'].dt.year)['total_sales'].sum().reset_index()
print(sales_trend)
print()

plt.figure(figsize=(12,6))
plt.plot(sales_trend['Date'],sales_trend['total_sales'],marker='o',color='b')
plt.title('Total Sales Over Time(Matplotlib)')
plt.xlabel('Date')
plt.ylabel('Total_sales')
plt.grid(True)
plt.show()

# creating linechart with seaborn
plt.figure(figsize=(12,6))
sns.lineplot(data=sales_trend,x='Date',y='total_sales',marker='o',color='r')
plt.title('Total Sales Over Time(Seaborn)')
plt.xlabel('Date')
plt.ylabel('Total_sales')
plt.grid(True)
plt.show()

# creating line chart with plotly

fig_line = px.line(sales_trend,x='Date',y='total_sales',title='Total Sales Over Time(Plotly express)',markers=True)
fig_line.update_layout(xaxis_title='Date',yaxis_title='Total Sales')
fig_line.show()
# creating scatter plot using namplot.lib
plt.figure(figsize=(10,6))
