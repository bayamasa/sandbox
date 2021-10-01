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
				errors += int(update != 0.0)
			self.errors_.append(errors)
		return self;

	# 行列の積を求める
	def net_input(self, X):
			# https://deepage.net/features/numpy-dot.html
			# dot関数: ベクトルの内積、行列の積を計算する
			return np.dot(X, self.w_[1:]) + self.w_[0]

	# 閾値を求める
	def predict(self, X):
		return np.where(self.net_input(X) >= 0.0, 1, -1)
		
