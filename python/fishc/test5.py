#%%
for i in range(10):
    print(i)

# %%
for i in range(5, 10):
    print(i)
# %%

for i in range(0, 10, 2):
    print(i)
# %%
##################
## 素数
##################
for i in range(2, 10):
    for j in range(2, i):
        if i % j == 0:
            print(i,"不是一个素数!")
            break
    else:
        print(i,"是一个素数！")

 # %%
