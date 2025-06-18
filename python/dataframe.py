import pandas as pd
import numpy as np
a  = np.array(["apple" ,"ball" , "cat" , " dog"])
b = {
    'Name': ['Alice', 'Bob', 'Charlie'],
    'Age': [24, 27, 22],
    'City': ['Delhi', 'Mumbai', 'Kolkata']}
k = pd.DataFrame(a,index=[1 , 2 , 3 , 4 ] , columns = ["name"])
#print(k)
m = pd.DataFrame(b,index=[1 , 2 , 3])
print(m[['Name' , 'Age']])