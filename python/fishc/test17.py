#%%
"""生成器"""

def counter():
    i = 0
    while i < 5:
        yield i 
        i += 1

counter() 
#yield生成了一个生成器，每次执行yield语句都会保留一个状态 
# 生成器是一种特殊的迭代器，不走回头路，支持next()

# %%
for i in counter():
    print(i)

# %%
t = (i ** 2 for i in range(10)) #元组推导式得到的是一个生成器对象
next(t)
# %%
next(t)

# %%
###########
## 递归
###########
