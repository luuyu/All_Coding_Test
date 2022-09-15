#%%
set({1,1,2,3,4}) #可以实现去重

# %%
s = set("FishC")
h = set("python")
s.isdisjoint(h) #验证是否有交集

# %% 
# issubset() 是否为子集 <号也可以
# issuperset() 是否为超集 >号也可以
# union() 得到并集 |号也可以
# intersection() 得到交集 &号也可以实现
# update() 传入可迭代对象更新set中的内容
# add() 传入对象，不需要像可迭代对象一样拆开
# remove() 非静默删除，会报错； 
# discard() 静默处理，不会报错； 
# pop(),随机弹出，set无序
# clear() 清空


# %%
############
## frozenset() 中的内容是不可变的
# 不可用update更新其中的内容



# %%
# 可变对象无法计算hash值
