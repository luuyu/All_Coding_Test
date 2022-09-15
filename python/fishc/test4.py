#%%
###############
## 短路逻辑： 从左往右，只有当第一个操作数的值无法确定逻辑运算的结果时，才对第二个操作数进行求值
###############
3 and 4 # 3 不能确定 and
3 or 4 # 3 可以确定or
##############
## 比较符优先于not not优先于and or
##############

# %%
print('a') if 13 > 12 else print('b')



# %%
while True:
    answer = input("123: ")
    if answer == '321':
        break #跳出循环体
    
# %%
i = 1
while i <= 10:
    i += 1
    if i % 2 == 0:
        continue
    print(i)

 # %%

i = 1
while i <= 10:
    i += 1
    if i % 5== 0:
        break
    print(i)
else:
    print('oo!')
##############
## while-else 可以连用来判断循环退出条件 else中的内容只有当退出后while的条件无法满足才会执行
##############
# %%
