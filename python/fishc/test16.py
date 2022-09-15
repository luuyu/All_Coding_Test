#%%
"""嵌套函数"""
def funa():
    x = 880
    def funb():
        x = 520
        print(f"在funcb里面，x的值为{x}")
    funb()
    print(f"在funca里面，x的值为{x}")
funa()

# %%
## gloable 可以在函数内操作全局变量，gloable x
## nonlocal 可以在操作嵌套函数中函数外部的值 nonlocal x
def func():
    x = 880
    def fund():
        x = 520
        print(f"在funcb里面，x的值为{x}")
    return fund
funny = func() # func会的到一个fund的引用，因为fund作为返回值
funny() #通过将func的结果保存下来间接调用fund，使用()就能调用嵌套函数
## 嵌套函数的外层作用域会保存下来，因此嵌套函数可以读取外层作用域的参数


# %%
def power(exp):
    def exp_of(base):
        return base ** exp
    return exp_of

square = power(2)
cube = power(3)

x = square(2)
y = square(3)

x,y
# %%
def outer():
    x,y = 0, 0
    def inner(x1, y1):
        nonlocal x,y
        x += x1
        y += y1
        print(f"现在x,y分别为{x},{y}")
    return inner
move = outer()
move(1,1) #因为使用了nonlocal所以可以保存并修改外层嵌套函数中的参数
# 可以实现角色移动等

# %%
move(1,2)
# %%

######
# 装饰器
######

import time

def time_master(func):
    def call_func():
        print("开始.....")
        start = time.time()
        func()
        stop = time.time()
        print("结束......")
        print(f"一共花费{(stop - start):.2f}秒")
    return call_func

@time_master #添加装饰器
def myfunc():
    time.sleep(2)
    print("I love u ")

myfunc()
# %%
#############
## lambda
#############
mapped = map(lambda x: ord(x) + 10, "FishC")
list(mapped)

# %%
