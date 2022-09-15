#%%
#starswith(a,[start,[end]]) 是否以a开头的字符串,start和end为可选参数 
# a 可以以元组传入 （"a","b","c"）
#endswith(b) 是否以b结尾
#istitle() 是否词首为大写
#isupper() 是否全为大写
#islower()
#isalpha() 是否全为字母
#isspace() 是否为空白字符串
#isprintable() 可打印字符
#isdecimal() 只能识别阿拉伯数字，不带任何运算的
#isdigit() 可以识别带运算的数字
#isnumeric() 可以识别罗马数字、中文数字等
#isidentifier() 是否是一个合法的标识符


# %%
#lstrip(chars = None) 去除左侧指定字符，可以传入一个字符串，去除里面的指定字符，从左往右
#rstrip()
#strip()
#removeprefix(chars) 去除前缀
#removesuffix(chars) 去除后缀

#partition(chars) 分割字符串，返回一个元组，从左到右切第一个指定位置
#rpartition(chars) 

#split(sep = None, maxsplit = -1) 从左往右，第一个参数指定分割方法，第二个参数指定分割次数
#rsplit()
#splitlines() 以换行符进行分割

# %%
".".join(["www", "baidu", "com"]) #join方法的参数是一个字符串列表，进行拼接

# %%
###############
## 格式化字符串
###############
"{name}{value}{power}".format(name = "123", value = 123, power = "346")

# %%
"{0}{1}".format("name", "value")

# %%
