// SqStack.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������

#include <stdlib.h>
#include <iostream>
#include "Windows.h"
using namespace std;
typedef int SElemType;
typedef struct {
	SElemType* base;
	SElemType* top;
	int stacksize;
}SqStack;
typedef int Status;//mnjkjkjb
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100
/*˳��ջ�ĳ�ʼ��*/
Status InitStack(SqStack& S) {
	S.base = new SElemType[MAXSIZE];
	if (!S.base) exit(OVERFLOW);
	S.top = S.base;
	S.stacksize = MAXSIZE;
	return OK;
}
/*˳��ջ����ջ*/
Status Push(SqStack& S, SElemType e) {
	if (S.top - S.base == S.stacksize)//��ջ
		return ERROR;
	*S.top = e;
	S.top++;
	return OK;
}
/*˳��ջ�ĳ�ջ*/
Status Pop(SqStack& S, SElemType& e) {

	if (S.top == S.base)//��ջ
		return ERROR;
	S.top--;
	e = *S.top;
	return OK;
}
/*ȡջ��Ԫ��*/
Status GetTop(SqStack& S, SElemType e) {
	if (S.top == S.base)//��ջ
		return ERROR;
	e = *(S.top - 1);
	return OK;
}
void FuncTest() {
	int i, n;
	SElemType e;
	SqStack S;              //����һ��ջ
	InitStack(S);            //��ʼ��ջ
	Push(S, 3); Push(S, 4); Push(S, 5); Push(S, 6);//3��4��5��6��ջ
	Pop(S, e);
	std::cout << e << "\n";         //��ջ����ӡջ��Ԫ��  
	Push(S, 7);             //7��ջ
	Pop(S, e);             //��ջ
	Push(S, 8);             //8��ջ
	std::cout << "ջ��Ԫ�����γ�ջ��\n";
	while (S.top != S.base)//ջ��Ԫ�����γ�ջ����ӡ
	{
		Pop(S, e);
		std::cout << e << "\t";
	}
	std::cout << "\n";
	Sleep(50000);
}
int StackLength(SqStack S)
/* ����ջ��Ԫ�صĸ�������ջ�ĳ��� */
{
	return S.top - S.base;
}
void PrintStack(SqStack S)
{
	SElemType* p = S.base;
	for (int i = 0; i < StackLength(S); i++)
	{
		cout << *p++ << "\t";
	}
	printf("\n");
}
/*����ֵת��Ϊ�ַ�*/
char inttochar(int i)
{
	char ret;
	switch (i)
	{
	case 0: ret = '0';
		break;
	case 1:ret = '1';
		break;
	case 2: ret = '2';
		break;
	case 3:ret = '3';
		break;
	case 4: ret = '4';
		break;
	case 5:ret = '5';
		break;
	case 6: ret = '6';
		break;
	case 7:ret = '7';
		break;
	case 8: ret = '8';
		break;
	case 9:ret = '9';
		break;
	case 10:ret = 'A';
		break;
	case 11: ret = 'B';
		break;
	case 12:ret = 'C';
		break;
	case 13: ret = 'D';
		break;
	case 14:ret = 'E';
		break;
	case 15:ret = 'F';
		break;
	}
	return ret;
}
int StackEmpty(SqStack S)
/* ��ջSΪ��ջ���򷵻�1�����򷵻�*/
{
	if (S.base == S.top)
	{
		return 1;
	}
	return 0;
}

void Conversion(int N, int r)
{
	SqStack S;
	SElemType e;
	InitStack(S);
	while (N != 0)
	{
		e = inttochar(N % r);
		Push(S, e);
		N = N / r;
	}
	while (!StackEmpty(S))
	{
		Pop(S, e);
		printf("%c", e);
	}
}
void ConversionCase()
{
	int a, b;
	a = 12345;
	b = 16;
	printf("%d��%d����=", a, b);
	Conversion(a, b);
	printf("\n");
	a = 9;
	b = 2;
	printf("%d��%d����=", a, b);
	Conversion(a, b);
	printf("\n");
	a = 65535;
	b = 16;
	printf("%d��%d����=", a, b);
	Conversion(a, b);
	printf("\n");
	Sleep(50000);
}
int main()
{
	ConversionCase();
	//FuncTest();
}
