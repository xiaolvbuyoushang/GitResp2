
using namespace std;
typedef int ElemType;// �Զ�����һ����������Elemtype�����ﶨ���Elemtype��int����һ����
//����
#define MAXSIZE 100
typedef struct//typedef�Ƕ������͵���˼�� 
{
ElemType *elem;//�洢�ռ�Ļ���ַ �� �á�elemtype���������п��ܵ��������ͣ������˵ĸ��������塣���㷨�У����ر�˵���⣬�涨ElemType��Ĭ����int�͡�
int length;//��ǰ���� 
}SqList;//sqlist��������Ľṹ������ ��˳����˳��洢�ṹ����Ϊsqlist 
//����
void CreateList(SqList &L)//����һ���յ����Ա�L 
{
    int i;
    L.elem=new ElemType[MAXSIZE];//Ϊ˳������һ����СΪMAXSIZE������ռ� ��ʹelemָ����οռ�Ļ���ַ ��L.elem��һ��ָ����� 
    if(!L.elem) cout<<"����ʧ��!"<<endl;//�洢����ʧ���˳� 
    cout<<"���������Ա�ĳ���,���ܴ���"<<MAXSIZE<<':'<<endl; cin>>L.length;
    cout<<"�������������Ԫ�أ�"<<endl;
    for(i=0;i<L.length;i++)
        cin>>L.elem[i];//��ͷ��β��������ÿ��Ԫ�� 
    cout<<"������ɣ�"<<endl;
}
//�����
void display(SqList L)
{
    int i;
    cout<<'[';
    for(i=0;i<L.length;i++)
        {if (i==L.length-1)cout<<L.elem[i];
        else cout<<L.elem[i]<<',';}//��������ĸ�ʽ �����ݵ����������� 
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
        }//i��k����ֵһֱ������ȣ�j�е���ֵ���������������ֵ 
 
    }
    L.length-=count;
     cout<<"���Ա�����item��ȵ���ֵ�ĸ���Ϊ��"<<endl;
    cout<<count<<endl;
	 
}
int main()
{
    SqList L;int item;
 
    CreateList(L);//���Ա�L�Ѿ����ڣ�������?��/��/��???????/�������������� 
    cout<<"��ǰ���Ա�Ϊ��"<<endl;
    display(L);
 
    cout<<"ɾ����������ֵΪitem������Ԫ�أ�������item��"<<endl;
    cin>>item;
 
    ChooseList_L(L,item);
 
    cout<<"ѡ��ɾ�������Ա�Ϊ��"<<endl;
    display(L);
 
    return 0;
}
//1���ṹ���÷�
//struct Student{
//int age;
//char s;
//}
//���Ҫ����һ���ýṹ�����������Ҫ:struct Student st1;
//��û�о��ú��鷳����������ԼԼ���������дһ��struct�ܷѾ�����˲����������typedef
//2���������ʹ��
//typedef struct Student{
//int age;
//char s;
//}Stu
//��ô���Ƕ���ýṹ�������ʱ�򣬾Ϳ���ʹ��
//Stu st1;
//��û�о��ú�ʡ�£���ȷ�����������ǣ������Ը�ʡ�£��뿴���棺
//3��
//����Ҳ����ֱ��ʡ�Ե�Student
//typedef struct{
//int age
//char s;
//}Stu;
//�Ϳ���ֱ��ʹ�� Stu st1;

