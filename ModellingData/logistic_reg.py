#Code for Modelling our given data

import numpy as np
import pandas as pd

data = pd.read_csv("Com_training_data.csv", sep = " ", header = None)
data = np.array(data)

#Prepare the split data into features X and labels Y
X = data[:, :-1]
Y = data[: ,-1]


from sklearn.linear_model import LogisticRegressionCV

logist = LogisticRegressionCV(cv = 5, tol = 1e-5, solver = 'liblinear')

logist.fit(X, Y)

y_class = logist.predict(X)
y_prob = logist.predict_proba(X)


print(y_class - Y)
print (y_prob)
print(y_prob[:, 0]- y_prob[:, 1])
print(logist.score(X, Y))

import matplotlib.pyplot as plt

plt.figure(1)

#plt.subplot(211)
#plt.ylim(-2, 2)
#plt.plot(Y - y_class, "ro-")
#plt.title("Correct_vs_Predicted Difference (1/-1 means is faslely predicted)")
#plt.xlabel("Program Number")
#plt.ylabel("Difference between Correct and Predicted Labels")
#plt.legend()

#plt.subplot(212)
#plt.ylim(0, 1)
#plt.plot (y_prob[:, 0], "go-", label = "Prob of it being in class 2")
#plt.plot (y_prob[:, 1], "bo-", label = "Prob of it being in class 3")

#plt.title("Predicted Probability of each Class (2 vs 3)")
#plt.xlabel("Program Number")
#plt.ylabel("Probability of class 2(green) or class 3(blue)")
#plt.legend()

#plt.subplot(121)
plt.ylim(0, 1)
plt.xticks(np.arange(0, 70, step = 2))
plt.yticks(np.arange(0, 1, step = 0.1))
plt.plot(abs(y_prob[:, 0] - y_prob[:, 1]), "co-", label = "Prob Diff")
plt.xlabel("Program Number")
plt.ylabel("Absolute Difference in Probability between class 2 and class 3")
plt.legend()

plt.show()