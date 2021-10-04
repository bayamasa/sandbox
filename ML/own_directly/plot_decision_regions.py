from matplotlib import colors
from matplotlib.colors import ListedColormap
import numpy as np
import matplotlib.pyplot as plt

# coding: utf-8

import numpy as np
import os
import pandas as pd
import matplotlib.pyplot as plt
from matplotlib.colors import ListedColormap

class Perceptron(object):
	# eta : Learning rate
	def __init__(self, eta=0.01, n_iter=50, random_state=1):
		self.eta = eta
		self.n_iter = n_iter
		self.random_state = random_state

	def fit(self, X, y):
		rgen = np.random.RandomState(self.random_state)
		self.w_ = rgen.normal(loc=0.0, scale=0.01, size=1 + X.shape[1])
		self.errors_ = []
	
		for _ in range(self.n_iter):
			errors = 0
			# zip関数は２つの配列に対して、反復を行う。
			# 要素数に差がある場合は、要素数が小さい方が反映する
			# Xの要素がxiで、yの要素がtarget(目的関数)
			for xi, target in zip(X, y):
				# ここがパーセプトロンの学習規則の関数
				update = self.eta * (target - self.predict(xi))
				# index 1以降の値 [0, 1, 2, 3] とあった時、[1, 2, 3]を取得
				self.w_[1:] += update * xi
				# 重みの更新
				self.w_[0] += update
				# 重みの更新が0でない場合は誤分類としてカウント
				# 結局predictの部分が、targetと一致していないということは、値が間違っているということ。
				# updateの値が負に傾いたら、振り子のように次は正の方向に向かって重みが更新される。
				errors += int(update != 0.0)
			self.errors_.append(errors)
		return self;

	# 行列の積を求める
	def net_input(self, X):
			# https://deepage.net/features/numpy-dot.html
			# dot関数: ベクトルの内積、行列の積を計算する
			# 重みの転置行列と各要素の積 + 閾値
			return np.dot(X, self.w_[1:]) + self.w_[0]

	# 閾値を求める
	def predict(self, X):
		return np.where(self.net_input(X) >= 0.0, 1, -1)
		

def plot_decision_regions(X, y, classifier, resolution=0.02):
	# マーカーとカラーマップの準備
    # setup marker generator and color map
    markers = ('s', 'x', 'o', '^', 'v')
    colors = ('red', 'blue', 'lightgreen', 'gray', 'cyan')
    cmap = ListedColormap(colors[:len(np.unique(y))])

    # plot the decision surface
    x1_min, x1_max = X[:, 0].min() - 1, X[:, 0].max() + 1
    x2_min, x2_max = X[:, 1].min() - 1, X[:, 1].max() + 1
    xx1, xx2 = np.meshgrid(np.arange(x1_min, x1_max, resolution),
                           np.arange(x2_min, x2_max, resolution))
    Z = classifier.predict(np.array([xx1.ravel(), xx2.ravel()]).T)
    Z = Z.reshape(xx1.shape)
    plt.contourf(xx1, xx2, Z, alpha=0.3, cmap=cmap)
    plt.xlim(xx1.min(), xx1.max())
    plt.ylim(xx2.min(), xx2.max())

    # plot class examples
    for idx, cl in enumerate(np.unique(y)):
        plt.scatter(x=X[y == cl, 0], 
                    y=X[y == cl, 1],
                    alpha=0.8, 
                    c=colors[idx],
                    marker=markers[idx], 
                    label=cl, 
                    edgecolor='black')

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

ppn = Perceptron(eta=0.1, n_iter=10)
ppn.fit(X, y);
plot_decision_regions(X, y, classifier=ppn)
plt.xlabel('sepal length [cm]')
plt.ylabel('petal length [cm]')
plt.legend(loc='upper left')


# plt.savefig('images/02_08.png', dpi=300)
plt.show()

