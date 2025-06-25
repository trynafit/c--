import pandas as pd
df = pd.DataFrame({
    'Name': ['Alice', 'Bob', "none"] , 'age': [25,None,30]})
df_cleaned = df.dropna()
print(df_cleaned)