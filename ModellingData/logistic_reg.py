#Code for Modelling our given data

import numpy as np
import pandas as pd

data = pd.read_csv("Com_training_data.csv", sep = " ", header = None)
data = np.array(data)

#Prepare the split data into features X and labels Y
X = data[:, :-1]
Y = data[: ,-1]


from sklearn.linear_model import LogisticRegressionCV
from sklearn.model_selection import train_test_split

X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2, random_state=42)

logist = LogisticRegressionCV(cv = 5, tol = 1e-5, solver = 'liblinear')

logist.fit(X_train, Y_train)

y_class = logist.predict(X)
y_prob = logist.predict_proba(X)


print(y_class - Y)
print (y_prob)
print(y_prob[:, 0]- y_prob[:, 1])
print(logist.score(X_train, Y_train))

import matplotlib.pyplot as plt

split = Y - y_class
mispred_2 = 0;
mispred_3 = 0;
corpred = 0;

for i in split:
    if(i == 1):
        mispred_2 = mispred_2 + 1
    if(i == -1):
        mispred_3 = mispred_3 + 1
    if(i == 0):
        corpred = corpred + 1        


print("Mis_2 ",)
print(mispred_2)

print("Mis_3 ",)
print(mispred_3)

print("Pred_Correct ",)
print(corpred)

weigths = logist.coef_
print(weigths)

plt.figure(1)

'''
#plt.subplot(211)
plt.ylim(-2, 2)
plt.xticks(np.arange(0, 70, step = 2))
plt.plot(Y - y_class, "ro-")
plt.title("Correct_vs_Predicted Difference (1/-1 means is faslely predicted)")
plt.xlabel("Program Number")
plt.ylabel("Difference between Correct and Predicted Labels")
plt.legend()
'''

#plt.subplot(212)
plt.ylim(0, 1)
plt.plot (y_prob[:, 0], "go-", label = "Prob of it being in class 2")
plt.plot (y_prob[:, 1], "bo-", label = "Prob of it being in class 3")
plt.title("Predicted Probability of each Class (2 vs 3)")
plt.xlabel("Program Number")
plt.ylabel("Probability of class 2(green) or class 3(blue)")
plt.legend()

'''
#plt.subplot(121)
plt.ylim(0, 1)
plt.xticks(np.arange(0, 70, step = 2))
plt.yticks(np.arange(0, 1, step = 0.1))
plt.plot(abs(y_prob[:, 0] - y_prob[:, 1]), "co-", label = "Prob Diff")
plt.xlabel("Program Number")
plt.ylabel("Absolute Difference in Probability between class 2 and class 3")
plt.legend()
'''

plt.show()