#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h>

int  jsk( );   //计算空格数
void rsgm( );  //重置游戏
void inkey( );  //按键输入
void left( );   //向左移动
void right( );  //向右移动
void up( );  //向上移动
void down( );  //向下移动
void show( );   //输出界面
void adnum( ); //添加随机数
void yes( );   //游戏是否结束(1是0否)
void gtxy(int x, int y); //控制光标位置的函数

int a[4][4];   //存储16个格子中的数字
int score = 0;  //每局得分
int best = 0;  //最高得分
int ifnum;  //是否需要添加数字(1是0否)
int over;   //游戏结束标志(1是0否)
int i,j,k;
int main( )

{ 
 rsgm( );  //重置游戏
 inkey( );  //按键输入
 return 0;
}
void setColor(unsigned short ForeColor = 7, unsigned short BackGroundColor = 0)
{ 
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(handle, ForeColor + BackGroundColor * 0x10);
}  //用于控制字符颜色的函数
void rsgm( )  //重置游戏
{ score = 0; ifnum = 1; over = 0; srand((unsigned)time(0)); //启动随机数发生器

 int n = rand( ) % 16;  //随机函数产生0-15的数字

 for (i = 0; i < 4; i++)

 {for (j = 0; j < 4; j++)

    { if (n == 0) { int k = rand( ) % 3; if (k == 0 || k == 1) { a[i][j] = 2; }

                         else { a[i][j] = 4; } n--; }

      else { a[i][j] = 0; n--; }

   }

 }

 adnum( );

 system("cls");

 CONSOLE_CURSOR_INFO cursor_info={1,0};  //以下两行是隐藏光标的设置

SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);

setColor(14, 0);  //设置字体淡红色，背景为黑色

printf("\n\n\t\t  2048小游戏"); setColor(7, 0);  //恢复白字黑底

printf("\n\t┌──────┬──────┬──────┬──────┐");

printf("\n\t│      │      │      │      │");

printf("\n\t├──────┼──────┼──────┼──────┤");

printf("\n\t│      │      │      │      │");

printf("\n\t├──────┼──────┼──────┼──────┤");

printf("\n\t│      │      │      │      │");

printf("\n\t├──────┼──────┼──────┼──────┤");

printf("\n\t│      │      │      │      │");

printf("\n\t└──────┴──────┴──────┴──────┘");

 show( );

}

void show( )  //输出界面

{ for(i=0;i<4;i++)

    for(j=0;j<4;j++)

       { gtxy(7*j+9,2*i+4);   //gtxy(7*j+9, 2*i+4)是光标到指定位置输出数字

         if(a[i][j]==0){printf("      "); setColor(7, 0); printf("│");}

         else if(a[i][j]<10){ if (a[i][j] == 2) {setColor(14, 0); }

                                     else if (a[i][j] == 4) {setColor(13, 0); }

                                     else if (a[i][j] == 8) {setColor(12, 0); }

                                    printf("   %d  ", a[i][j]); setColor(7, 0); printf("│");

                                  }

        else if (a[i][j] < 100){if (a[i][j] == 16) {setColor(12, 0); }

                                        else if (a[i][j] == 32) {setColor(10, 0); }

                                       else if (a[i][j] == 64) {setColor(2, 0); }

                                      printf("  %d  ", a[i][j]); setColor(7, 0); printf("│");

                                    }

      else if (a[i][j] < 1000) {if (a[i][j] == 128) {setColor(9, 0); }

                                         else if (a[i][j] == 256) {setColor(1, 0); }

                                         else if (a[i][j] == 512) {setColor(13, 0); }

                                         printf("  %d ", a[i][j]); setColor(7, 0); printf("│");

                                       }

       else if (a[i][j] < 10000) {if (a[i][j] == 1024) {setColor(5, 0); }

                                             else {setColor(15, 0); }

                                            printf(" %d ", a[i][j]); setColor(7, 0); printf("│");

                                          }

      }

     if (jsk( ) == 0)

          { yes( ); if (over) { gtxy(9,12); setColor(10, 0);

                                      printf("\n\n  游戏结束！是否继续? [ Y/N ]:"); }

   }

}

void inkey( )   //按键输入

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

int jsk( )   //计算空格数

{ int n = 0;

 for (i = 0; i < 4; i++)

    { for (j = 0; j < 4; j++) { if ( a[i][j] == 0) {n++;} }  }

      return n;

}

void left( )   //向左移动

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

void right( )   //向右移动

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

void up( )   //向上移动

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

void down( )   //向下移动

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

void adnum( )   //添加随机数

{ srand(time(0));   //启动随机数发生器

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

void yes( )   //游戏是否结束

{ for (int i = 0; i < 4; i++)

   {for (int j = 0; j < 3; j++)

         {if (a[i][j] == a[i][j + 1] || a[j][i] == a[j + 1][i]) {over = 0; return; }}

   }

 over = 1;

}

void gtxy(int x, int y)   //控制光标位置的函数

{ COORD coord;

  coord.X = x;

  coord.Y = y;

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
