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

# what is avg of ssc_p

# print(df['ssc_p'].mean())

#  max marks in ssc_p
# print(df['ssc_p'].max())

# how many toppers are there in ssc_p

# print(df[df['ssc_p']==df['ssc_p']].max().shape[0])

# Is the student who got highest  hsc_p is placed or not

# print(df[df['hsc_p']== df['hsc_p'].max()]['status'])

#  how many students are placed or unplaced

# print(df['status'].value_counts())


#  most common degree of placed students
# print(df['status'])
# print(df[df['status']=='Placed']['degree_t'].value_counts().head())


# most unique degree of placed students 

print(df['degree_p'].nunique())

# correlation b/w ssc or hsc

print(df[['ssc_p','hsc_p']].corr())

print(df.isnull().sum())
print(df.dtypes)

numeric_df=df.select_dtypes(include=['number']).corr()
print(numeric_df)

#  drop

df=df.drop('sl_no',axis=1)
print(df)

df.fillna(0,inplace=True)
print(df.isnull().sum())

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

# sns.pairplot(df,hue='status',palette='coolwarm')
# plt.show()


#  1 july 2025

#  draw the histogram for salary of students


# plt.figure(figsize=(8, 5))
# sns.histplot(df['salary'], bins=10, color='skyblue')
# plt.title('salary')
# plt.xlabel('Salary')
# plt.ylabel('value')
# plt.grid()
# plt.show()


# distribution graph for gender


# plt.figure(figsize=(8,5))
# sns.countplot(df['gender'],palette='coolwarm')
# plt.show()

# among students with science background in hsc, what is the placement rate

science_students = df[df['hsc_s'] == 'Science']

total_science = len(science_students)
placed_science = len(science_students[science_students['status'] == 'Placed'])
placement_rate = (placed_science / total_science) * 100

print(placement_rate)


# how many students have prior work experience

workex_counts = df['workex'].value_counts()
print(workex_counts)

# what is min and max salary offered
min_salary=df['salary'].min()
max_salary=df['salary'].max()
print("MAX",max_salary)
print("MIN",min_salary)

# do students with prior work experience get  higher salary

placed_students=df[df['status']=='Placed']
avg_salary_by_workex = placed_students.groupby('workex')['salary'].mean()
print(avg_salary_by_workex)


# outliers 
cols=['ssc_p','hsc_p','etest_p','mba_p','salary','degree_p']
for c in cols:
    sns.boxplot(y=c,data= df)
    q1= df[c].quantile(0.25)
    q3=df[c].quantile(0.75)
    iqr= q3-q1
    upper_limit = q3+(1.5*iqr)
    lower_limit = q1 - (1.5*iqr)
    df=df[(df[c] < upper_limit) & (df[c] > lower_limit)]
    plt.show()


for c in df.select_dtypes(include='number').columns:
    # Plot original boxplot
    plt.figure(figsize=(6, 4))
    sns.boxplot(y=df[c])
    plt.title(f"Boxplot of {c} (with outliers)")
    plt.show()


print("Damn Again")

cols=[ 'ssc_p', 'hsc_p', 'etest_p',  'mba_p', 'salary','degree_p']
for c in cols:
    sns.boxplot(y=c,data=df)
    plt.show()


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

# Drop rows where salary is NaN
df = df.dropna(subset=['salary'])

# Then reassign x and y
x = df.drop(columns=['salary'])
print(x.head(10))
y = df['salary'].values

x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.3,random_state=42)

from sklearn.preprocessing import StandardScaler
 
sc=StandardScaler()

x_train=sc.fit_transform(x_train)
print("x_train",x_train)
print()

x_test=sc.transform(x_test)
# linear regression

reg=LinearRegression()
reg.fit(x_train,y_train)

y_pred=reg.predict(x_test)
print("y_pred",y_pred)

r2_score=metrics.r2_score(y_test,y_pred)

print("r2_score",r2_score)

print (" mean absolute error ",metrics.mean_absolute_error(y_test,y_pred))

mse=metrics.mean_squared_error(y_test,y_pred)
print("mean squared error ",mse)

# extract independent and dependent status variables 

x=df.drop(['status','salary'],axis=1).values
print(x)

x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.1,random_state=42)

from sklearn.preprocessing import StandardScaler
 
sc=StandardScaler()

x_train=sc.fit_transform(x_train)
print("x_train",x_train)
print()

x_test=sc.transform(x_test)

#  logistic regression 

classifier=LogisticRegression()
classifier.fit(x_train,y_train)
x_train=sc.fit_transform(x_train)
x_test=sc.transform(x_test)


y_pred=classifier.predict(x_test)
print(y_pred)

from sklearn.metrics import accuracy_score
print(accuracy_score(y_test,y_pred))