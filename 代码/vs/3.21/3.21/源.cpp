// SqStack.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

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
/*顺序栈的初始化*/
Status InitStack(SqStack& S) {
	S.base = new SElemType[MAXSIZE];
	if (!S.base) exit(OVERFLOW);
	S.top = S.base;
	S.stacksize = MAXSIZE;
	return OK;
}
/*顺序栈的入栈*/
Status Push(SqStack& S, SElemType e) {
	if (S.top - S.base == S.stacksize)//满栈
		return ERROR;
	*S.top = e;
	S.top++;
	return OK;
}
/*顺序栈的出栈*/
Status Pop(SqStack& S, SElemType& e) {

	if (S.top == S.base)//空栈
		return ERROR;
	S.top--;
	e = *S.top;
	return OK;
}
/*取栈顶元素*/
Status GetTop(SqStack& S, SElemType e) {
	if (S.top == S.base)//空栈
		return ERROR;
	e = *(S.top - 1);
	return OK;
}
void FuncTest() {
	int i, n;
	SElemType e;
	SqStack S;              //声明一个栈
	InitStack(S);            //初始化栈
	Push(S, 3); Push(S, 4); Push(S, 5); Push(S, 6);//3、4、5、6入栈
	Pop(S, e);
	std::cout << e << "\n";         //出栈并打印栈顶元素  
	Push(S, 7);             //7进栈
	Pop(S, e);             //出栈
	Push(S, 8);             //8入栈
	std::cout << "栈中元素依次出栈：\n";
	while (S.top != S.base)//栈中元素依次出栈并打印
	{
		Pop(S, e);
		std::cout << e << "\t";
	}
	std::cout << "\n";
	Sleep(50000);
}
int StackLength(SqStack S)
/* 返回栈中元素的个数，即栈的长度 */
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
/*将数值转换为字符*/
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
/* 若栈S为空栈，则返回1，否则返回*/
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
	printf("%d的%d进制=", a, b);
	Conversion(a, b);
	printf("\n");
	a = 9;
	b = 2;
	printf("%d的%d进制=", a, b);
	Conversion(a, b);
	printf("\n");
	a = 65535;
	b = 16;
	printf("%d的%d进制=", a, b);
	Conversion(a, b);
	printf("\n");
	Sleep(50000);
}
int main()
{
	ConversionCase();
	//FuncTest();
}
