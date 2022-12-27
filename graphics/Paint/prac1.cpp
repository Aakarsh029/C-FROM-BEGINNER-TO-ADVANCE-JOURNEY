#include <graphics.h>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
void colour()
{
   char msg[80];
   setcolor(1);
   sprintf(msg, " 1: blue", 3);
   outtextxy(10, 40, msg);
   setcolor(2);
   sprintf(msg, "2: green", 3);
   outtextxy(10, 70, msg);
   setcolor(3);
   sprintf(msg, "3: cyan", 3);
   outtextxy(10, 100, msg);
   setcolor(4);
   sprintf(msg, "4: red", 3);
   outtextxy(10, 130, msg);
   setcolor(5);
   sprintf(msg, "5: magenta", 3);
   outtextxy(10, 160, msg);
   setcolor(6);
   sprintf(msg, "6: brown", 3);
   outtextxy(10, 190, msg);
   setcolor(7);
   sprintf(msg, "7: LightGray", 3);
   outtextxy(10, 220, msg);
   setcolor(8);
   sprintf(msg, "8: DarkGray", 3);
   outtextxy(10, 250, msg);
   setcolor(9);
   sprintf(msg, "9: LightBlue", 3);
   outtextxy(10, 280, msg);
   setcolor(10);
   sprintf(msg, "0: LightGreen ", 3);
   outtextxy(10, 310, msg);
   }
void shapes()
{
   char msg[80];
   setcolor(15);
   sprintf(msg, "F1:LINE", 3);
   outtextxy(10, 580, msg);
   sprintf(msg, "F2:SQUARE", 3);
   outtextxy(10, 600, msg);
   sprintf(msg, "F3:RECTANGLE", 3);
   outtextxy(10, 620, msg);
   sprintf(msg, "F4:CIRCLE", 3);
   outtextxy(10, 640, msg);
   sprintf(msg, "F5:ELLIPSE", 3);
   outtextxy(10, 660, msg);
}
void sizze(int width, int height, int size)
{
   string s = to_string(size);
   outtextxy(1300, height / 10, &*s.begin());
   outtextxy(1260, height / 10, (char *)"Size:");
}
void size1(int width, int height, int size)
{
   string s = to_string(size);
   outtextxy(1300, 20 + height / 10, &*s.begin());
   outtextxy(1260, 20 + height / 10, (char *)"X1:");
}
void size2(int width, int height, int size)
{
   string s = to_string(size);
   outtextxy(1300, 40 + height / 10, &*s.begin());
   outtextxy(1260, 40 + height / 10, (char *)"Y1:");
}
int main(void)
{
   int width = GetSystemMetrics(SM_CXSCREEN);
   int height = GetSystemMetrics(SM_CYSCREEN);
   initwindow(width, height, (char *)"", -3, -3);
   char msg[80];
   int gd = DETECT, gm, s, v, i, a;
   cleardevice();
   int size = 30;
   int x1 = 30, y1 = 30;
   POINT cp;
   int choice = 0;
   int color = 1;
   setcolor(color);
   while (1)
   {
      colour();
      shapes();
      sizze(width, height, size);
      size1(width, height, x1);
      size2(width, height, y1);
      GetCursorPos(&cp);

      
      setcolor(color);

      if (GetAsyncKeyState(VK_ESCAPE))
      {
         break;
      }
      if (GetAsyncKeyState(VK_OEM_PLUS))
      {
         x1++;
         size++;
         delay(80);
      }
      if (GetAsyncKeyState(VK_ADD))
      {
         y1++;
         delay(80);
      }
      if (GetAsyncKeyState(VK_SUBTRACT))
      {
         y1--;
         delay(80);
      }
      if (GetAsyncKeyState(VK_OEM_MINUS))
      {
         x1--;
         size--;
         delay(80);
      }
      if (GetAsyncKeyState(VK_F1))
      {
         choice = 1;
      }
      if (choice == 1)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            line(cp.x, cp.y, cp.x + x1, cp.y + y1);
         }
      }
      else if (GetAsyncKeyState(VK_F2))
      {
         choice = 2;
      }
      if (choice == 2)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            rectangle(cp.x, cp.y, cp.x + size, cp.y + size);
         }
      }
      else if (GetAsyncKeyState(VK_F3))
      {
         choice = 3;
      }
      if (choice == 3)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            rectangle(cp.x, cp.y, cp.x + x1, cp.y + y1);
         }
      }
      else if (GetAsyncKeyState(VK_F4))
      {
         choice = 4;
      }
      if (choice == 4)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            circle(cp.x, cp.y, size);
         }
      }
      else if (GetAsyncKeyState(VK_F5))
      {
         choice = 5;
      }
      if (choice == 5)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            ellipse(cp.x, cp.y, 0, 360, x1, y1);
         }
      }
      else if (GetAsyncKeyState(VK_F6))
      {
         choice = 6;
      }
      if (choice == 6)
      {
         if (GetAsyncKeyState(VK_LBUTTON))
         {
            setfillstyle(1,color);
            floodfill(cp.x,cp.y,0);
            delay(100);
         }
      }


      if (ismouseclick(WM_LBUTTONUP))
      {
         clearmouseclick(WM_LBUTTONUP);
      }
      if (GetAsyncKeyState(VK_NUMPAD1))
      {
         color = 1;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD2))
      {
         color = 2;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD3))
      {
         color = 3;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD4))
      {
         color = 4;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD5))
      {
         color = 5;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD6))
      {
         color = 6;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD7))
      {
         color = 7;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD8))
      {
         color = 8;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD9))
      {
         color = 9;
         setcolor(color);
      }
      if (GetAsyncKeyState(VK_NUMPAD0))
      {
         color = 10;
         setcolor(color);
      }
      
      if (GetAsyncKeyState(VK_SPACE))
      {
         cleardevice();
      }
      setcolor(color);
   }

   getch();
   return 0;
}