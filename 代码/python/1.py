def rabbit(month):
def raw_inpu():
    if month<=2:
        return 2
    else:
        return rabbit(month-1)+rabbit(month-2)
 
if __name__=="__main__":
    month=int(raw_input("请输入month："))
    for i in range(0,month):
        print rabbit(i)