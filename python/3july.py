import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
df = pd.read_csv(r"C:\Users\DELL\Desktop\py c\Churn_Modelling.csv")
print(df.head(4))
#calculating number of exited customers
pf = df[df['Exited'] == 0].value_counts()
print(pf.sum())
