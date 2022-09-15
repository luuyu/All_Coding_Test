#%%
#--------------------------#
# 写入文件
#--------------------------#
f = open("test.txt", "w")
f.write("I love python! ")


# %%
f = open("test.txt", "w") # r+ 模式为既可以读取也可以写入
a = "\nI love my wife.\n"
b = "I love u. "
f.writelines([a, b])
f.close()

# %%
f = open("test.txt", "r+")
for each in f:
    print(each)


# %%
f.read() # 默认有size = -1 参数，返回一定大小的内容，从文件指针开始到EOF结束
# ------- read未指定参数时返回剩余位置所有内容 -------#
f.tell() # 返回当前文件对象的指针
f.seek(0) # 将指针移到0处

# %%
f.readline()
f.tell()
f.seek(0)

# %%
f.write("wifi! ") #从当前指针处开始写起，会覆盖原来的内容
f.flush() #执行更新操作

# %%
f.seek(10)
# %%
f.truncate(27) #从指针处到参数指针处截断 
f.close()

# %%
