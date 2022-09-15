#%%
import imp


i = 0
while i < 1:
    print(i)
    i = i + 0.1
    
#%%
import decimal
a = decimal.Decimal('0.1')
b = decimal.Decimal('0.2')
print(a + b)

# %%

x = 1 + 2j
y = x.real
z = x.imag
h = abs(x) #作用在复数上就是复数的模
s = complex("1+3j")
#s = complex("1 + 3j") #如果有空格将会报错


# %%
-3 // 2
#地板除， 向下取整
divmod(-3 , 2)
#结果中第一个是地板除结果 ， 第二个是余数

# %%
pow(2, 3)
2 ** 3 
#pow 与 ** 的区别就在于 pow支持第三个参数来实现先幂后取余的操作
pow(2, 3, 5)

# %%
bool(1)
bool(0)
bool(False)
bool(True)
bool("")
bool(' ')
###############
## 定义为false的几种类型：None,False,表示0的数,空的数据对象
###############

# %%
3 < 4 and 4 < 5
3 < 4 or 4 > 5
not True

# %%
