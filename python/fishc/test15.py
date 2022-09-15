#%%
from ast import arg


def fun1(name):
    for i in range(3):
        print(f"my name is {name}")
    return name

fun1("liudalang")

# %%
##############
## 位置参数必须在关键字参数之前
#############

def fun_t(a, b, c):
    return f"{a}是{b}的{c}"
    # return "".join((a,"shi",b,"de",c))

#fun_t(a = "wo", "ni", "die")
fun_t("wo", b="ni",c="die")
# %%
help(abs) #斜杠左侧只能是位置参数，不能是关键字参数
# *右边只能是关键字参数
# def fun_te(a, /, b, c):
# def fun_ts(a, *, b, c):

# %%
# 收集参数， 可多可少
def shouji(*args):
    print(f"有{len(args)}个参数")
    print(f"第2个参数是：{args[1]}")
shouji("aaa", "bbb")

# %%
#######
## 返回多个参数实际上函数对返回的参数进行了打包，成为了元组
#######
def ttes(*args, a, b):
    print(args, a, b)
    
ttes(1, 2, 3, a=1, b=2) #只能用关键字参数进行传递
# %%
def ttos(**args):
    print(args)
#######字典形式的收集参数，必须用关键字参数进行赋值
ttos(x=1, y=2)

# %%
#########解包参数
args = (1, 2, 3, 4)
def funcv(a, b, c, d):
    print(a, b, c, d)

kwargs = {'x':1, 'y':2, 'z':3}
def funcw(x, y, z):
    print(x,y,z)

funcv(*args)
funcw(**kwargs)
# %%
