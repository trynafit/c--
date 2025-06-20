import numpy as np
import pandas as pd
def get_grade(avg):
    if avg>=85:
        return 'A'
    elif avg>=70:
        return 'b'
    else:
        return 'c'
data = {
'Student ID': [101, 102, 103, 104, 105, 106, 107],
'Name': ['Alice', 'Bob', 'Charlie', 'Diana', 'Eva', 'Frank', 'Grace'],
'Gender': ['F', 'M', 'M', 'F', 'F', 'M', 'F'],
'Math': [85, 67, 90, 78, 92, 58, 73],
'Science': [88, 72, 94, 74, 91, 60, 77],
'English': [90, 65, 88, 82, 85, 70, 79],
'Attendance (%)': [96, 82, 89, 94, 99, 76, 88]
}
df = pd.DataFrame(data)
df['total'] = df['Math'] + df['English'] +df['Science']
print(df['total'])
df['average'] = (df['Math'] + df['English'] + df['Science'])/ 3
print(df[['Name', 'average']].sort_values('average', ascending=False))
print(df.head())
print(df[['Name', 'Math' , 'English']])
print(df.shape)
print(df.shape[0])
print(df.shape[1])
print(df.describe)
print(df[df['Math'] > 80][['Name', 'Math']])
print(df.groupby('Gender')[['Math' , 'Science', 'English']].mean())
print(df['English'].max())
eng = df['English'].max()
endstuf = df[df['English']==eng][['Name' , 'English']]
print(endstuf)
df['grade']= df['average'].apply(get_grade)
print(df['grade'])
df['grade'].value_counts()
print(df.groupby('grade')['Name'].count())



