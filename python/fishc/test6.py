#%%
test = ['a', 'b', 'c', 'd', 'e', 'f']
test[::2]

# %%
test[:3:2]

# %%
test[::-1] #倒序输出

# %%
test[::-2]

# %%
# insert
test.append('hhh')
test.extend(['hcs', 'csh']) #参数必须是可迭代对象
test[len(test):] = [7, 8, 9] #利用切片在列表最后追加元素
test

# %%
s = [1, 3, 4, 5]
s.insert(1, 2) #insert函数在指定位置添加元素，第一个参数为index，第二个为value
s

# %%
#delete
test.remove('hcs') #删除指定值元素
test
# %%
test.pop(2) #删除指定下标
# %%
test.clear() #清空列表
test
# %%
s.sort(reverse=True)
s
# %%
s.count(1)
# %%
s.index(1)
# %%

s[s.index(1)] = 7

# %%
s_copy = s.copy()

# %%
