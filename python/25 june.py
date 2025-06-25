import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
sales_data = pd.read_csv(r"C:\Users\DELL\Desktop\py c\sales_data.csv")
print(sales_data.head())
quantity = sales_data['Quantity']
print("quantity:\n",quantity)
price = sales_data['Price']
print("price:\n",price)
total_revenue = quantity * price
print("Total Revenue:\n", total_revenue)
revenue = sales_data['Revenue']
print("Revenue:\n", revenue)
print("Total Revenue:\n", revenue.sum())
print("null values \n",sales_data.isnull().sum())
top2_products = sales_data.groupby('Product')['Revenue'].sum().head(2)
print("Top 2 Products by Revenue:\n", top2_products)
top2products = sales_data.groupby('Product')['Quantity'].sum().head(2)
print("Top 2 Products by Quantity:\n", top2products)
#create line chart for total revenue over time
plt.figure(figsize = (12,6))
plt.plot(sales_data['Date'], sales_data['Revenue'] , marker='o')
plt.title('Total Revenue by Date')
plt.xlabel('Date')
plt.ylabel('Total Revenue')
plt.grid(True)
plt.xticks(rotation=45) 
plt.yticks(rotation=90)
plt.show()
plt.bar(sales_data['Product'], sales_data['Revenue'], color='skyblue')
plt.title('Total Revenue by Product')
plt.xlabel('Product')
plt.ylabel('Total Revenue')
plt.grid(axis='y')
plt.show()
sns.boxplot(x='Revenue', y='Region', data=sales_data, palette='pastel')
plt.title("Boxplot of Revenue by Region")
plt.show()
# Create a heatmap to visualize the correlation between numerical features
sns.heatmap(sales_data.corr(), annot=True, cmap='coolwarm', fmt='.2f')
plt.title('Correlation Heatmap')
plt.show()