#%%
""" is 和 is not 是判断id是否相等的"""
""" in 和 not in 判断包含问题"""

x = 123
del x

# %%
y = [1, 2, 3, 4, 5]
y[1:4] = []
# %%
y = [1,2,3,4,5]
del y[::2]
# 使用切片法是不行的
# %%
# 字符串，元组，列表相互转换
z = list("FishC")

# %%
h = tuple(z)

# %%
s = str(z)
# %%
# min(iter, default = )
# max(iter, default = )

# %%
# len()
# sum()
# sorted() 创建一个新的对象输出结果而不改变原可迭代对象 
# sorted(iter, reverse = True)
# sorted(iter, key = len) 指定一个排序算法进行排序 
# sort() 直接改变原可迭代对象 iter.sort()
# sort()只能接收列表，sorted()可以接受任何可迭代对象参数

# %%
# reversed()函数返回的是一个迭代器，可以用list转换一下
w = [1,2,5,7,4]
list(reversed(w))
# %%
# all()判断iter里是否全为真
# any()判断iter里是否有一个为真
# enumerate() 创建一个枚举对象，可以用list转换，key-value
# zip() 得到zip object 
# 利用list将两个iter的每一对应位置的值组成一个tuple，再将所有tuple装入list

# map() 得到map object
# map(operate, iter),对每一个元素进行操作后输出，用list可以转换结果

# filter(judge, iter) 只输出结果为真的结果构成的迭代器

# %%
""" 可迭代对象可以重复使用多次， 迭代器只能使用一次
    使用iter()可以把可迭代对象转换为迭代器
    next()可以依次取出迭代器中的内容，一次取一个
"""