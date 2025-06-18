import pandas as pd
list1 = ["lavish" , "madhav"]
list2 = ["november" , "march"]
dataset = list(zip(list1 , list2))
d = pd.DataFrame(data = dataset , columns=['names' , 'birth'])
print(d)