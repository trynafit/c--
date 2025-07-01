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
#  draw the histogram for salary of students


# plt.figure(figsize=(8, 5))
# sns.histplot(df['salary'], bins=10, color='skyblue')
# plt.title('salary')
# plt.xlabel('Salary')
# plt.ylabel('value')
# plt.grid()
# plt.show()


# # distribution graph for gender


# plt.figure(figsize=(8,5))
# sns.countplot(df['gender'],palette='coolwarm')
# plt.show()

# among students with science background in hsc what is placement Rate
# science_hsc = df[df['hsc_s'] == 'Science']
# print("Placement rate among students with Science background in HSC:", 
#       science_hsc['status'].value_counts(normalize=True).get('Placed', 0) * 100)
# #how many student have prior work experience
# prior_experience_count = df['workex'].value_counts().get('Yes', 0)
# print("Number of students with prior work experience:", prior_experience_count)
# #what is the minimum and maximum salary offered
# min_salary= df['salary'].min()
# max_salary = df['salary'].max()
# print("Minimum salary offered:", min_salary)
# print("Maximum salary offered:", max_salary)
# #do students with prior work experience get higher salary
# placed_students = df[df['status'] == 'Placed']
# avg_salary_with_experience = placed_students.groupby('workex')['salary'].mean()
# print("Average salary of placed students with prior work experience:\n", avg_salary_with_experience)
# #rate of placement for students with Science background in HSC
# science_students = df[df['hsc_s'] == 'Science']
# total_students_science = len(science_students)
# placed_science_students = len(science_students[science_students['status'] == 'Placed'])
# placement_rate_science = (placed_science_students / total_students_science)
# print("Placement rate for students with Science background in HSC:", placement_rate_science * 100, "%")
#cols = ['ssc_p', 'hsc_p', 'degree_p', 'etest_p', 'mba_p']
# for c in cols:
#     sns.boxplot(x= c , data = df)
#     q1 = df[c].quantile(0.25)
#     q3 = df[c].quantile(0.75)
#     qm = q3 - q1
#     upper_limit = q3 + (1.5 * qm)
#     lower_limit = q1 - (1.5 * qm)
#     df = df[(df[c] < upper_limit) & (df[c] > lower_limit)]
#     plt.show()
# encoding

from sklearn.preprocessing import LabelEncoder

le=LabelEncoder()
print(df['ssc_b'].unique())
df['ssc_b']=le.fit_transform(df['ssc_b'])
print(df['ssc_b'].unique())

print(df.columns)

col=['gender', 'hsc_b', 'hsc_s', 'degree_t', 'workex', 'specialisation','status']

for c in col:
    df[c] = le.fit_transform(df[c])
    
print(df)


# x = df.drop(columns = ['salary'])
# y = df['salary']

x=df.iloc[ :,0:-1].values
y=df.iloc[:,-1].values
print(x)
print(y)

x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.3,random_state=42)

from sklearn.preprocessing import StandardScaler
 
sc=StandardScaler()

x_train=sc.fit_transform(x_train)
print(x_train)

# perform linear regression
from sklearn.linear_model import LinearRegression
reg = LinearRegression()
reg = filter(x_train, y_train)