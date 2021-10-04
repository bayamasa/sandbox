import os
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import perceptron

s = 'https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data'
print('URL:', s)

df = pd.read_csv(s,
                 header=None,
                 encoding='utf-8')

df.tail()
# select setosa and versicolor
y = df.iloc[0:100, 4].values
y = np.where(y == 'Iris-setosa', -1, 1)

# extract sepal length and petal length
X = df.iloc[0:100, [0, 2]].values

ppn = perceptron.Perceptron(eta=0.1, n_iter=10)
ppn.fit(X, y);

# x = range 1からerrorの配列の要素+1(エラー回数) y = エラー量 (どれだけ実値とpredictが離れていたか)
plt.plot(range(1, len(ppn.errors_) + 1), ppn.errors_, marker= 'o')

plt.xlabel('Epochs')
plt.ylabel('Number of Update')

plt.show()
