import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
df = pd.read_csv(r"C:\Users\DELL\Desktop\py c\diabetes.csv")
# corr = df.corr()
# plt.figure(figsize=(10, 8))
# sns.heatmap(corr, annot=True, cmap='coolwarm')
# plt.title('Correlation Heatmap of Diabetes Dataset')
# plt.xticks(rotation=45)
# plt.yticks(rotation=45)
# plt.show()
x = df.drop('Outcome', axis=1)
# print(df.head())
y = df['Outcome']
# print(df.head())
# import pandas as pd
# import seaborn as sns
# import matplotlib.pyplot as plt
# df = pd.read_csv(r"C:\Users\DELL\Desktop\py c\diabetes.csv")
# corr = df.corr()
# sns.heatmap(corr, annot=True, cmap='coolwarm')
# plt.title('Correlation Heatmap of Diabetes Dataset')
# plt.show()
# print(df.head())
from sklearn.linear_model import LinearRegression,LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.ensemble import RandomForestClassifier
from sklearn import metrics
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2, random_state=42)
lr = LinearRegression()
lr.fit(x_train, y_train)
y_pred = lr.predict(x_test)
r2 = metrics.r2_score(y_test, y_pred)
print("R-squared:", r2)
print("metrics.mean_absolute_error:", metrics.mean_absolute_error(y_test, y_pred))
pr = LogisticRegression()
pr.fit(x_train, y_train)
pr_y_pred = pr.predict(x_test)
r3 = metrics.r2_score(y_test, pr_y_pred)
print("R-squared:", r3)
print("metrics.mean_absolute_error:", metrics.mean_absolute_error(y_test, y_pred))