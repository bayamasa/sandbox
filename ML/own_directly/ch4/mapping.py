import pandas as pd
from sklearn.preprocessing import LabelEncoder

df = pd.DataFrame([
	['green', 'M', 10.1, 'class2'],
	['red', 'L', 13.5, 'class1'],
	['blue', 'XL', 15.3, 'class2'],
])
df.columns = ['color', 'size', 'price', 'classlabel']

class_le = LabelEncoder()
y = class_le.fit_transform(df['classlabel'].values)
print(y)
