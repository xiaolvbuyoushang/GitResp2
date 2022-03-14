for i in range(1,10):
    for j in range(1,i+1):
        a=int(i*j)
        print(j,"*",i,end="=%02d;   "%(a))
    print()

