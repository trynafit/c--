import pandas as pd
import numpy as np
data  = np.array([1,2,3,4,5,6])
k = pd.Series(data)
print(k)
m = pd.Series(data , index=["a" , "b" , "c" , "d" , "e" , "f"] , dtype = float)
print(m[1:4])
print(m["e"])
print(m["a":"f"])