
# coding: utf-8

# In[1]:


from keras.layers import Input, Dense
from keras.models import Model
from keras.datasets import mnist
import numpy as np
import matplotlib.pyplot as plt
from keras.callbacks import ModelCheckpoint
from sklearn.preprocessing import MinMaxScaler


# In[482]:


raw_text = open("training_data.txt").read()


# In[483]:


raw_array = raw_text.split("\n")


# In[484]:


len(raw_array)


# In[485]:


#How to make some code generic to take training data of any size?
train_numeric = []
for i in range(len(raw_array)):
    train_numeric.append(raw_array[i].split(' '))


# In[486]:


train_numeric.remove(train_numeric[65])


# In[487]:


type(train_numeric[1][1])


# In[488]:


max_length = len(train_numeric[0])
min_length = len(train_numeric[0])
for i in range(len(train_numeric)):
    if(max_length < len(train_numeric[i])):
        max_length = len(train_numeric[i])
    if(min_length > len(train_numeric[i])):
        min_length = len(train_numeric[i])
    
        


# In[489]:


print(max_length)
print(min_length)


# In[490]:


for j in range(len(train_numeric)): 
    for i in range(max_length):
        if(i >= len(train_numeric[j])):
            train_numeric[j].append(0)
    


# In[491]:


for i in range(len(train_numeric) - 1):
    for j in range(len(train_numeric[i])):
        train_numeric[i][j] = int(train_numeric[i][j])


# In[492]:


training_stuff = np.array(train_numeric)


# In[493]:


training_stuff.shape


# In[494]:


a = training_stuff[0].shape


# In[495]:


a


# In[496]:


#NOW LETS FINALLY START DEFINING THE AUTOENCODER


# In[506]:


#THE SIZE OF INPUT WILL BE OUR SIZE OF CODE THAT IS MAX ACROSS ALL CODES
input_text = Input(shape=a)


# In[507]:


#THE ENCODING DIMENSION IS WHAT WE WANT TO KEEP AT THIS STAGE
#SINCE OUR MAX SIZE IS AROUND 3700, I THINK 500 SHOULD AT LEAST BE MY ENCODING DIMENTION
encoding_dim = 1000


# In[508]:


#LET US DEFINE THE DECODER AND ENCODER NOW BY GIVING A TEMPLATE FOR EACH
encoded = Dense(encoding_dim, activation='relu')(input_text)
decoded = Dense(a[0], activation='sigmoid')(encoded)


# In[509]:


#NOW LET US ACTUALLLY DEFINE THE MODEL ITSELF
encoder = Model(input_text, encoded)
encoded_input = Input(shape=(encoding_dim,))
autoencoder = Model(input_text, decoded)
decoder_layer = autoencoder.layers[-1]
decoder = Model(encoded_input, decoder_layer(encoded_input))


# In[510]:


#NOW LETS FINALLY MERGE AND COMPILE OUR AUTOENCODER ITSELF
autoencoder.compile(optimizer='adagrad', loss='mean_squared_error', metrics = ['accuracy'])


# In[511]:


#LETS RECAP BY SUMMARIZING OUR AUTOENCODER 
autoencoder.summary()


# In[512]:


#NOW WE NEED TO SET ALL OUR DATA INTO FLOAT TYPE AND NORMALIZE
train = training_stuff.astype('float32')/255

print(train)
# In[513]:


training_stuff.astype(int)


# In[514]:


#NOW FINAL PHASE IS TO TRAIN OUR AUTOENCODER
autoencoder.fit(train, train, epochs = 100, shuffle = True, validation_split = 0.2)


# In[548]:


output_file = open("features_0.txt", "w")


# In[550]:


#NOW LETS SEE TO PREDICT ENCODED FORMAT
a = train.shape
for i in range(a[0]):
    a = train[i]
    a = np.transpose([a])
    a = a.T
    enc = encoder.predict(a)
    #print(enc)
    for j in range (len(enc[0])):
        output_file.write(str(enc[0][j]))
        output_file.write(' ')
        #print ((enc[0][j]))
    output_file.write('\n')    
    #print(enc)
output_file.close()    


# In[542]:


enc[0][1]


# In[517]:


a = train[1]
a = np.transpose([a])


# In[518]:


a = a.T


# In[519]:


a.shape


# In[521]:


enc


# In[522]:


dec = decoder.predict(enc)


# In[523]:


dec


# In[524]:


dec * 255

