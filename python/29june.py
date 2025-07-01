import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

from sklearn.linear_model import LinearRegression,LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.ensemble import RandomForestClassifier
from sklearn import metrics


df=pd.read_csv(r"C:\Users\DELL\Desktop\py c\Placement_Data.csv")

# print(df.head(4))

# print(df.columns.tolist())

# print(df.shape)

# print(df.info())

# # what is avg of ssc_p

# print(df['ssc_p'].mean())

# #  max marks in ssc_p
# print(df['ssc_p'].max())

# # how many toppers are there in ssc_p

# print(df[df['ssc_p']==df['ssc_p']].max().shape[0])


# Is the student who got highest  hsc_p is placed or not

# print(df[df['hsc_p']== df['hsc_p'].max()]['status'])

#  how many students are placed or unplaced

# print(df['status'].value_counts())


#  most common degree of placed students
# print(df['status'])
# print(df[df['status']=='Placed']['degree_t'].value_counts().head())



# most unique degree of placed students 

# print(df['degree_p'].nunique())

# correlation b/w ssc or hsc

# print(df[['ssc_p','hsc_p']].corr())

# print(df.isnull().sum())
# print(df.dtypes)

# numeric_df=df.select_dtypes(include=['number']).corr()
# print(numeric_df)

# # drop

# df=df.drop('sl_no',axis=1)
# print(df)

# df.fillna(0,inplace=True)
# print(df.isnull().sum())

#  draw a scatter plot b/w 10 and 12th

# plt.figure(figsize=(8,4))
# sns.scatterplot(x='ssc_p',y='hsc_p',data=df,hue='status',palette='coolwarm',alpha=0.4)
# plt.title('Scatter plot of SSC vs HSC percentage')
# plt.xlabel('SSC Percentage')
# plt.ylabel('HSC Percentage')   
# plt.show()

# draw a boxplot
# sns.set_theme("paper")
# sns.set_style("ticks")
# plt.figure(figsize=(10,2))
# sns.boxplot(x=df['hsc_p'])
# plt.title("hsc percentage")
# plt.xlabel(" %%%% ")
# plt.tight_layout()
# plt.show()

# pairplot

sns.pairplot(df,hue='status',palette='coolwarm')
plt.show()