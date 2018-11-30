
# coding: utf-8

# In[2]:


raw_code = open("code.c").read()


# In[3]:


#Let us remove all spaces from this raw input
refined_code = []
for i in raw_code:
    if((i == '\t') or (i == '\n') or (i == ' ')):
        continue
    refined_code.append(i)    


# In[4]:


#print(refined_code)


# In[7]:


#Now to create an equivalent ASCII form of the entire text
numeric_format = []
for i in refined_code:
    numeric_format.append(ord(i))


# In[9]:


for i in numeric_format:
    print i ,

