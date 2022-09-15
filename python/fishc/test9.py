#%%
x = "12321"
print('是回文数') if x == x[::-1] else print('不是回文数')
# %%
x = 'I love Fish'
y = x.capitalize() #字符串是不可变对象，因此x的值不会变化，只是开辟了一个新的变量
x
# casefold() 全部变小写
# title() 单词首字母变大写
# swapcase() 大小写翻转
# upper() 全变大写
# lower() 全变小写（只能处理英文字母）
 
# %%
x = "abcdefg"
x.center(3) #参数是width，3 小于总长度直接输出x， 第二个参数为填充所用字符，默认空格
x.center(10) #大于本身长度就填充空格 
# ljust() 左对齐
# rjust() 右对齐
# zfill() 填充0
# expandtabs(n) 将tab换成space，一个tab对应n个space

# %%
a = "在吗？"
b = a.replace("在吗","想你")

# %%
table = str.maketrans("ABCDEFG", "1234567") #制作一个转换table作为转换依据
c = "I love FishC"
h = c.translate(table) #由于字符串的不可变性，c本身是无法改变的，将新值赋给h
 
# %%
