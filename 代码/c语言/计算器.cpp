#include <stdio.h>
#include <math.h>
int main()
{
	printf("������Ҫִ�еĲ���\n");
	printf("A:�ӷ�\nB:����\nC:�˷�\nD:����\nE:������\nF:����:\nG:ȡ��\n");
	char x1;
	scanf("%c",&x1);
	double x2,x3;
	printf("��������������\n");
	scanf("%lf%lf",&x2,&x3);
	switch(x1)
	{
	case'a':
	case'A':printf("%5.2lf\n",x2+x3);break;
	case'b':
	case'B':printf("%5.2lf\n",x2-x3);break;
	case'c':
	case'C':printf("%5.2lf\n",x2*x3);break;
	case'd':
	case'D':printf("%5.2lf\n",x2/x3);break;
	case'e':
	case'E':printf("%5.2lf\n",pow(x2,x3));break;
	case'f':
	case'F':printf("%5.2lf\n%5.2lf\n",sqrt(x2),sqrt(x3));break;
	case'g':
	case'G':printf("%5.2d\n",(int)x2%(int)x3);break;
	}
	return 0;
}



