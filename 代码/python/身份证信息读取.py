import datetime#调用时间库，获取当下时间
id=input("\n\n请输入身份证号码（id）:")
#id=[141033200201090010]
#id=[012345678901234567]

year1=int(id[6:10])
month=int(id[10:12])
day=int(id[12:14])
#数据处理和输出
print("你出生于{}年{}月{}日".format(year1,month,day))
#计算年龄
age=int(datetime.datetime.now().year-year1)
print("你的年龄为{}岁".format(age))
mysex=int(id[16])
mysex1=mysex%2#取余数奇数为男
sex=["女","男"]#新建列表，mysex视为方括号内索引值，0或1
print("你的性别为{}".format(sex[mysex1]))

print("%d,%d,%d,%d,%s"%(year1,month,day,age,sex[mysex1]))




#datetime.datetime.now().#获取当前时间
#print("你出生于{}年{}月{}日".format(year,month,day))