
using namespace std;
typedef int ElemType;// 自定义了一个数据类型Elemtype，这里定义的Elemtype和int型是一样的
//定义
#define MAXSIZE 100
typedef struct//typedef是定义类型的意思， 
{
ElemType *elem;//存储空间的基地址 ， 用“elemtype”代表所有可能的数据类型，简单明了的概括了整体。在算法中，除特别说明外，规定ElemType的默认是int型。
int length;//当前长度 
}SqList;//sqlist代表上面的结构体类型 ，顺序表的顺序存储结构类型为sqlist 
//创建
void CreateList(SqList &L)//构造一个空的线性表L 
{
    int i;
    L.elem=new ElemType[MAXSIZE];//为顺序表分配一个大小为MAXSIZE的数组空间 ，使elem指向这段空间的基地址 ，L.elem是一个指针变量 
    if(!L.elem) cout<<"创建失败!"<<endl;//存储分配失败退出 
    cout<<"请输入线性表的长度,不能大于"<<MAXSIZE<<':'<<endl; cin>>L.length;
    cout<<"请依次输入表中元素："<<endl;
    for(i=0;i<L.length;i++)
        cin>>L.elem[i];//从头到尾依次输入每个元素 
    cout<<"创建完成！"<<endl;
}
//输出表
void display(SqList L)
{
    int i;
    cout<<'[';
    for(i=0;i<L.length;i++)
        {if (i==L.length-1)cout<<L.elem[i];
        else cout<<L.elem[i]<<',';}//控制输出的格式 即数据的两个有括号 
    cout<<']'<<endl;
}
 
void ChooseList_L(SqList &L,int item)
{
    int i=0;int j=0;int k;int count=0;
    for(k=0;k<L.length;)
    {
        if(L.elem[k]!=item)
        {
            L.elem[j]=L.elem[i];
            i++;
            j++;
            k++; 
        }
        else
        {
            i++;
             k++; 
            count++;
        }//i，k的数值一直保持相等，j中的数值才是满足题意的数值 
 
    }
    L.length-=count;
     cout<<"线性表中与item相等的数值的个数为："<<endl;
    cout<<count<<endl;
	 
}
int main()
{
    SqList L;int item;
 
    CreateList(L);//线性表L已经存在？？？？?、/、/、???????/、？？、、、？ 
    cout<<"当前线性表为："<<endl;
    display(L);
 
    cout<<"删除表中所有值为item的数据元素，请输入item："<<endl;
    cin>>item;
 
    ChooseList_L(L,item);
 
    cout<<"选择删除后线性表为："<<endl;
    display(L);
 
    return 0;
}
//1、结构体用法
//struct Student{
//int age;
//char s;
//}
//如果要定义一个该结构体变量，就需要:struct Student st1;
//有没有觉得很麻烦，我们隐隐约约察觉到，多写一个struct很费劲，因此才有了下面的typedef
//2、如果我们使用
//typedef struct Student{
//int age;
//char s;
//}Stu
//那么我们定义该结构体变量的时候，就可以使用
//Stu st1;
//有没有觉得很省事，的确是这样。但是，还可以更省事，请看下面：
//3、
//我们也可以直接省略掉Student
//typedef struct{
//int age
//char s;
//}Stu;
//就可以直接使用 Stu st1;

