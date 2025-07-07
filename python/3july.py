import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
df = pd.read_csv(r"C:\Users\DELL\Desktop\py c\Churn_Modelling.csv")
df = pd.DataFrame(df)
print(df.head(4))
#calculating number of exited customers
pf = df[df['Exited'] == 0].value_counts()
print(pf.sum())
df.drop(columns=['RowNumber', 'CustomerId', 'Surname'], inplace=True)
df = pd.get_dummies(df, columns=['Geography' , 'Gender'], drop_first=True)
df.head()
df.replace("True = 1", "False = 0", inplace=True)
print(df.head(4))
from sklearn.model_selection import train_test_split
x = df.drop(columns=['Exited'])
y = df['Exited']
x_train, x_test, y_train, y_test = train_test_split(x,y, test_size=0.2, random_state=0)
from sklearn.preprocessing import StandardScaler
scaler = StandardScaler()
x_train = scaler.fit_transform(x_train)
x_test = scaler.transform(x_test)
print(x_train.shape)
import tensorflow as tf