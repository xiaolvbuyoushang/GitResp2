#循环
#range 数字生成器
x=[item for item in range(1,20,3)]
print(x)
for item in range(10):
    if item == 4 or item == 7:
        continue
    print(item,end=" ")
for item in range(10):
    if item == 4 or item == 7:
        break
    print(item,end=" ")
print("循环结束")