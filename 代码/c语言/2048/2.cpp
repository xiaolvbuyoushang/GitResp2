#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h>

int  jsk( );   //����ո���
void rsgm( );  //������Ϸ
void inkey( );  //��������
void left( );   //�����ƶ�
void right( );  //�����ƶ�
void up( );  //�����ƶ�
void down( );  //�����ƶ�
void show( );   //�������
void adnum( ); //��������
void yes( );   //��Ϸ�Ƿ����(1��0��)
void gtxy(int x, int y); //���ƹ��λ�õĺ���

int a[4][4];   //�洢16�������е�����
int score = 0;  //ÿ�ֵ÷�
int best = 0;  //��ߵ÷�
int ifnum;  //�Ƿ���Ҫ�������(1��0��)
int over;   //��Ϸ������־(1��0��)
int i,j,k;
int main( )

{ 
 rsgm( );  //������Ϸ
 inkey( );  //��������
 return 0;
}
void setColor(unsigned short ForeColor = 7, unsigned short BackGroundColor = 0)
{ 
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(handle, ForeColor + BackGroundColor * 0x10);
}  //���ڿ����ַ���ɫ�ĺ���
void rsgm( )  //������Ϸ
{ score = 0; ifnum = 1; over = 0; srand((unsigned)time(0)); //���������������

 int n = rand( ) % 16;  //�����������0-15������

 for (i = 0; i < 4; i++)

 {for (j = 0; j < 4; j++)

    { if (n == 0) { int k = rand( ) % 3; if (k == 0 || k == 1) { a[i][j] = 2; }

                         else { a[i][j] = 4; } n--; }

      else { a[i][j] = 0; n--; }

   }

 }

 adnum( );

 system("cls");

 CONSOLE_CURSOR_INFO cursor_info={1,0};  //�������������ع�������

SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);

setColor(14, 0);  //�������嵭��ɫ������Ϊ��ɫ

printf("\n\n\t\t  2048С��Ϸ"); setColor(7, 0);  //�ָ����ֺڵ�

printf("\n\t���������������Щ������������Щ������������Щ�������������");

printf("\n\t��      ��      ��      ��      ��");

printf("\n\t���������������੤�����������੤�����������੤������������");

printf("\n\t��      ��      ��      ��      ��");

printf("\n\t���������������੤�����������੤�����������੤������������");

printf("\n\t��      ��      ��      ��      ��");

printf("\n\t���������������੤�����������੤�����������੤������������");

printf("\n\t��      ��      ��      ��      ��");

printf("\n\t���������������ة������������ة������������ة�������������");

 show( );

}

void show( )  //�������

{ for(i=0;i<4;i++)

    for(j=0;j<4;j++)

       { gtxy(7*j+9,2*i+4);   //gtxy(7*j+9, 2*i+4)�ǹ�굽ָ��λ���������

         if(a[i][j]==0){printf("      "); setColor(7, 0); printf("��");}

         else if(a[i][j]<10){ if (a[i][j] == 2) {setColor(14, 0); }

                                     else if (a[i][j] == 4) {setColor(13, 0); }

                                     else if (a[i][j] == 8) {setColor(12, 0); }

                                    printf("   %d  ", a[i][j]); setColor(7, 0); printf("��");

                                  }

        else if (a[i][j] < 100){if (a[i][j] == 16) {setColor(12, 0); }

                                        else if (a[i][j] == 32) {setColor(10, 0); }

                                       else if (a[i][j] == 64) {setColor(2, 0); }

                                      printf("  %d  ", a[i][j]); setColor(7, 0); printf("��");

                                    }

      else if (a[i][j] < 1000) {if (a[i][j] == 128) {setColor(9, 0); }

                                         else if (a[i][j] == 256) {setColor(1, 0); }

                                         else if (a[i][j] == 512) {setColor(13, 0); }

                                         printf("  %d ", a[i][j]); setColor(7, 0); printf("��");

                                       }

       else if (a[i][j] < 10000) {if (a[i][j] == 1024) {setColor(5, 0); }

                                             else {setColor(15, 0); }

                                            printf(" %d ", a[i][j]); setColor(7, 0); printf("��");

                                          }

      }

     if (jsk( ) == 0)

          { yes( ); if (over) { gtxy(9,12); setColor(10, 0);

                                      printf("\n\n  ��Ϸ�������Ƿ����? [ Y/N ]:"); }

   }

}

void inkey( )   //��������

{ int key;

 while (1)

     { key = getch( );

       if (over) { if (key == 89|| key == 121) {rsgm( ); continue; }

                       else  if (key == 78|| key == 110) { return; }

                       else  continue; }

       ifnum = 0;

       if(key==224)key=getch( );

       switch (key)

             { case 75: left( ); break;

               case 77: right( ); break;

               case 72: up( ); break;

               case 80: down( );break;

              }

        if (score > best) { best = score; }

        if (ifnum) { adnum( ); show( ); }

      }

}

int jsk( )   //����ո���

{ int n = 0;

 for (i = 0; i < 4; i++)

    { for (j = 0; j < 4; j++) { if ( a[i][j] == 0) {n++;} }  }

      return n;

}

void left( )   //�����ƶ�

{ for (i = 0; i < 4; i++)

     {for (j = 1, k = 0; j < 4; j++)

        { if (a[i][j] > 0)

            { if ( a[i][k] == a[i][j])

                 { a[i][k] *= 2;  k++;

                   score = score + 2 * a[i][j];

                   a[i][j] = 0;  ifnum = 1; }

               else if ( a[i][k] == 0) { a[i][k] = a[i][j]; a[i][j] = 0; ifnum = 1; }

               else { a[i][k + 1] = a[i][j]; if ((k + 1) != j) { a[i][j] = 0; ifnum = 1; }

               k++; }

           }

        }

     }

}

void right( )   //�����ƶ�

{for (i = 0; i < 4; i++)

   {for (j = 2, k = 3; j >= 0; j--)

       {if (a[i][j] > 0)

           { if (a[i][k] == a[i][j])

                {a[i][k] *= 2; k--; score = score + 2 * a[i][j]; a[i][j] = 0; ifnum = 1; }

            else if ( a[i][k] == 0) {a[i][k] = a[i][j]; a[i][j] = 0; ifnum = 1; }

            else { a[i][k - 1] = a[i][j]; if ((k - 1) != j) { a[i][j] = 0; ifnum = 1; } k--; }

          }

      }

  }

}

void up( )   //�����ƶ�

{for (i = 0; i < 4; i++)

   {for (j = 1, k = 0; j < 4; j++)

      {if (a[j][i] > 0)

           {if ( a[k][i] == a[j][i]) { a[k][i] *= 2; k++;score = score + 2 * a[j][i];

                                              a[j][i] = 0; ifnum = 1; }

            else if ( a[k][i] == 0) { a[k][i] = a[j][i]; a[j][i] = 0; ifnum = 1; }

            else { a[k + 1][i] = a[j][i]; if ((k + 1) != j) { a[j][i] = 0; ifnum = 1; }

            k++; }

          }

      }

   }

}

void down( )   //�����ƶ�

{ for (i = 0; i < 4; i++)

   {for (j = 2, k = 3; j >= 0; j--)

       {if (a[j][i] > 0)

           {if (a[k][i] == a[j][i])

                 {a[k][i] *= 2; k--;score = score + 2 * a[j][i]; a[j][i] = 0; ifnum = 1; }

            else if (a[k][i] == 0) {a[k][i] = a[j][i]; a[j][i] = 0; ifnum = 1; }

            else {a[k - 1][i] = a[j][i];

            if ((k - 1) != j) {a[j][i] = 0; ifnum = 1; } k--; }

           }

       }

   }

}

void adnum( )   //��������

{ srand(time(0));   //���������������

  int n = rand( ) % jsk( );

 for (int i = 0; i < 4; i++)

   {for (int j = 0; j < 4; j++)

        { if (a[i][j] == 0) { if (n != 0) { n--; }

                                    else {int k = rand() % 3;

                                           if (k == 0 || k == 1) {a[i][j] = 2; return; }

                                           else {a[i][j] = 4; return; } }

                                 }

        }

  }

}

void yes( )   //��Ϸ�Ƿ����

{ for (int i = 0; i < 4; i++)

   {for (int j = 0; j < 3; j++)

         {if (a[i][j] == a[i][j + 1] || a[j][i] == a[j + 1][i]) {over = 0; return; }}

   }

 over = 1;

}

void gtxy(int x, int y)   //���ƹ��λ�õĺ���

{ COORD coord;

  coord.X = x;

  coord.Y = y;

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
