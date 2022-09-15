#%%
"""directory"""

y = {"name":"张三", 
     "value":"123"}

y["name"]

# %%
b = dict(name = "123", value = "123")

# %%
c = dict([("name", "123"), ("value", "123")])

# %%
d = dict(zip(["name","value"], ["123", "123"]))

# %%
e = dict.fromkeys("name", 250) #适用于从无到有快速初始化

# %%
e.pop("m")

# %%
e.popitem() #直接pop最后一个

# %%
del d["value"] # 删除指定元素

# %%
d.clear() #清空字典

# %%
test = dict.fromkeys("FishC", 100)

# %%
test["F"] = 250
test.update({"i":120, "h":130}) #里面装字典{}
test.update( i = 7, C = 10)

# %%
test.get('c', "这里没有c") #第二个参数用来指明当字典里没有某个元素时返回的默认信息

# %%
test.setdefault('m', "给m设置了一个默认值，并在里面添加了m")
#如果元素存在，则返回元素的值

# %%
#########
#字典可以转换为list,使用list() 函数， list(test);list(test.values())
# 可以转换成iter，使用iter()函数，可以使用next()进行遍历

# %%
#####
##字典可以嵌套字典，序列 将value赋为序列和字典
y.items()
yy = {v:k for k,v in y.items()} #字典推导式，将key和value倒置

# %%
x = {x:ord(x) for x in "FishC"}

# %%
