#include <graphics.h>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
// void colour()
// {
//    char msg[80];
//    setcolor(1);
//    sprintf(msg, " 1: blue", 3);
//    outtextxy(10, 40, msg);
//    setcolor(2);
//    sprintf(msg, "2: green", 3);
//    outtextxy(10, 70, msg);
//    setcolor(3);
//    sprintf(msg, "3: cyan", 3);
//    outtextxy(10, 100, msg);
//    setcolor(4);
//    sprintf(msg, "4: red", 3);
//    outtextxy(10, 130, msg);
//    setcolor(5);
//    sprintf(msg, "5: magenta", 3);
//    outtextxy(10, 160, msg);
//    setcolor(6);
//    sprintf(msg, "6: brown", 3);
//    outtextxy(10, 190, msg);
//    setcolor(7);
//    sprintf(msg, "7: LightGray", 3);
//    outtextxy(10, 220, msg);
//    setcolor(8);
//    sprintf(msg, "8: DarkGray", 3);
//    outtextxy(10, 250, msg);
//    setcolor(9);
//    sprintf(msg, "9: LightBlue", 3);
//    outtextxy(10, 280, msg);
//    setcolor(10);
//    sprintf(msg, "0: LightGreen ", 3);
//    outtextxy(10, 310, msg);
//    setcolor(11);
//    sprintf(msg, "; : LightCyan", 3);
//    outtextxy(10, 340, msg);
//    setcolor(12);
//    sprintf(msg, "/: LightRed", 3);
//    outtextxy(10, 370, msg);
//    setcolor(13);
//    sprintf(msg, "`: LightMagenta", 3);
//    outtextxy(10, 400, msg);
//    setcolor(14);
//    sprintf(msg, "[: YEllow", 3);
//    outtextxy(10, 430, msg);
//    setcolor(15);
//    sprintf(msg, "| : white", 3);
//    outtextxy(10, 460, msg);
// }
void shapes()
{
   char msg[80];
   setcolor(0);
   sprintf(msg, "F1:LINE", 3);
   outtextxy(10, 380, msg);
   sprintf(msg, "F2:SQUARE", 3);
   outtextxy(10, 400, msg);
   sprintf(msg, "F3:BRUSH", 3);
   outtextxy(10, 420, msg);
   sprintf(msg, "F4:CIRCLE", 3);
   outtextxy(10, 440, msg);
   sprintf(msg, "F5:ELLIPSE", 3);
   outtextxy(10, 460, msg);
   sprintf(msg, "F6:PAINT", 3);
   outtextxy(10, 480, msg);
   sprintf(msg, "F7:TRANSLATE", 3);
   outtextxy(10, 500, msg);
   sprintf(msg, "F8:SCALING", 3);
   outtextxy(10, 520, msg);

   sprintf(msg, "F9:REFLECTION", 3);
   outtextxy(10, 540, msg);
   sprintf(msg, "F10:SHEARING", 3);
   outtextxy(10, 560, msg);
   sprintf(msg, "F11:ROTATION", 3);
   outtextxy(10, 580, msg);
}
void brush(int x, int y, int size)
{
   if (GetAsyncKeyState(VK_LBUTTON))
   {
      circle(x, y, size);
      putpixel(x, y, size);
      int r = size;
      while (r != 0)
         circle(x, y, r--);
      r = size;
   }
}
void sizze(int width, int height, int size)
{
   string s = to_string(size);
   outtextxy(1340, height / 10, &*s.begin());
   outtextxy(1300, height / 10, (char *)"Size:");
}
void size1(int width, int height, int size)
{
   string s = to_string(size);
   outtextxy(1340, 50 + height / 10, &*s.begin());
   outtextxy(1300, 50 + height / 10, (char *)"X1:");
}
void size2(int width, int height, int size)
{
   string s = to_string(size);
   outtextxy(1340, 100 + height / 10, &*s.begin());
   outtextxy(1300, 100 + height / 10, (char *)"Y1:");
}
void loading(int width, int height)
{
   readimagefile("Logowt.jpg", 385, 250, 585, 450); // to display image
   setcolor(0);
   outtextxy(width / 3 + 190, height / 2 - 30, (char *)"Loading...");
   setcolor(RED);
   rectangle(width / 3 + 80, height / 2, width / 3 + 370, 20 + height / 2);
   for (int i = 80; i < 360; i++) // loading bar at begining
   {
      setcolor(RED);
      rectangle(width / 3 + 80 + 5, height / 2 + 5, width / 3 + 5 + i, 15 + height / 2);
      delay(1);
   }
}
void colorspallete()
{
   setcolor(0);
   rectangle(100, 700, 120, 720);
   setfillstyle(1, 0);
   floodfill(110, 710, 0);
   rectangle(130, 700, 150, 720);
   setfillstyle(1, 1);
   floodfill(140, 710, 0);
   rectangle(160, 700, 180, 720);
   setfillstyle(1, 2);
   floodfill(170, 710, 0);
   rectangle(190, 700, 210, 720);
   setfillstyle(1, 3);

   floodfill(200, 710, 0);
   rectangle(220, 700, 240, 720);
   setfillstyle(1, 4);

   floodfill(230, 710, 0);
   rectangle(250, 700, 270, 720);
   setfillstyle(1, 5);

   floodfill(260, 710, 0);
   rectangle(280, 700, 300, 720);
   setfillstyle(1, 6);

   floodfill(290, 710, 0);
   rectangle(310, 700, 330, 720);
   setfillstyle(1, 7);

   floodfill(320, 710, 0);
   rectangle(100, 730, 120, 750);
   setfillstyle(1, 8);

   floodfill(110, 740, 0);
   rectangle(130, 730, 150, 750);
   setfillstyle(1, 9);

   floodfill(140, 740, 0);
   rectangle(160, 730, 180, 750);
   setfillstyle(1, 10);

   floodfill(170, 740, 0);
   rectangle(190, 730, 210, 750);
   setfillstyle(1, 11);

   floodfill(200, 740, 0);
   rectangle(220, 730, 240, 750);
   setfillstyle(1, 12);

   floodfill(230, 740, 0);
   rectangle(250, 730, 270, 750);
   setfillstyle(1, 13);

   floodfill(260, 740, 0);
   rectangle(280, 730, 300, 750);
   setfillstyle(1, 14);

   floodfill(290, 740, 0);
   rectangle(310, 730, 330, 750);
   setfillstyle(1, 15);

   floodfill(320, 740, 0);
}

int main(void)
{
   int width = GetSystemMetrics(SM_CXSCREEN);
   int height = GetSystemMetrics(SM_CYSCREEN);
   initwindow(width, height, (char *)"", -3, -3);
   // rectangle(0, 0, width, height);
   // setfillstyle(1, 15);
   floodfill(width / 2, height / 2, 15);
   char msg[80];
   int gd = DETECT, gm, s, v, i, a, x3, x2, y3, y2;
   setbkcolor(15);
   loading(width, height);
   cleardevice();
   int size = 30;
   int x1 = 30, y1 = 30;
   POINT cp;
   int choice = 0;
   int color = 0;
   setcolor(color);
   while (1)
   {
      setfillstyle(1, 15);
      floodfill(width / 2, height / 2, 15);
      colorspallete();
      setbkcolor(15);
      setcolor(0);
      sprintf(msg, "This is Graphics Lab Mini Project by 20bcs007 Aakarsh Bansal !", 3);
      outtextxy(540, 10, msg);
      // colour();
      shapes();
      sizze(width, height, size);
      size1(width, height, x1);
      size2(width, height, y1);
      GetCursorPos(&cp);

      if (cp.y >= 700 && cp.y <= 720)
      {

         if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 130 && cp.x <= 150)
         {
            color = 1;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 100 && cp.x <= 120)
         {
            color = 0;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 160 && cp.x <= 180)
         {
            color = 2;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 190 && cp.x <= 210)
         {
            color = 3;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 220 && cp.x <= 240)
         {
            color = 4;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 250 && cp.x <= 270)
         {
            color = 5;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 280 && cp.x <= 300)
         {
            color = 6;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 310 && cp.x <= 330)
         {
            color = 7;
            setcolor(color);
         }
      }
      else if (cp.y >= 730 && cp.y <= 750)
      {
         if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 100 && cp.x <= 120)
         {
            color = 8;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 130 && cp.x <= 150)
         {
            color = 9;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 160 && cp.x <= 180)
         {
            color = 10;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 190 && cp.x <= 210)
         {
            color = 11;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 220 && cp.x <= 240)
         {
            color = 12;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 250 && cp.x <= 270)
         {
            color = 13;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 280 && cp.x <= 300)
         {
            color = 14;
            setcolor(color);
         }
         else if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 310 && cp.x <= 330)
         {
            color = 15;
            setcolor(color);
         }
      }

      setcolor(color);
      setcolor(0);
      rectangle(10, 90, 30, 110);
      circle(20, 100, 8);
      rectangle(10, 120, 30, 140);
      rectangle(12, 122, 28, 138);
      rectangle(10, 150, 30, 170);
      line(12, 152, 28, 168);
      rectangle(10, 180, 30, 200);
      ellipse(20, 190, 0, 360, 9, 5);

      sprintf(msg, "P", 3);
      outtextxy(15, 213, msg);
      rectangle(10, 210, 30, 230);

      sprintf(msg, "B", 3);
      outtextxy(15, 243, msg);
      rectangle(10, 240, 30, 260);

      rectangle(450, 720, 460, 730);
      rectangle(467, 718, 481, 732);
      rectangle(488, 716, 506, 734);
      rectangle(513, 714, 535, 736);
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 450 && cp.x <= 460 && cp.y >= 720 && cp.y <= 730)
         size = 20;
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 467 && cp.x <= 481 && cp.y >= 718 && cp.y <= 732)
         size = 35;
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 488 && cp.x <= 506 && cp.y >= 716 && cp.y <= 734)
         size = 50;
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 513 && cp.x <= 535 && cp.y >= 714 && cp.y <= 736)
         size = 65;

      rectangle(1300, height / 10 + 20, 1320, height / 10 + 40);
      line(1304, height / 10 + 30, 1316, height / 10 + 30);
      line(1310, height / 10 + 24, 1310, height / 10 + 36);

      rectangle(1335, height / 10 + 20, 1355, height / 10 + 40);
      line(1339, height / 10 + 30, 1351, height / 10 + 30);

      rectangle(1300, height / 10 + 70, 1320, height / 10 + 90);
      line(1304, height / 10 + 80, 1316, height / 10 + 80);
      line(1310, height / 10 + 74, 1310, height / 10 + 86);

      rectangle(1335, height / 10 + 70, 1355, height / 10 + 90);
      line(1339, height / 10 + 80, 1351, height / 10 + 80);

      rectangle(1300, height / 10 + 120, 1320, height / 10 + 140);
      line(1304, height / 10 + 130, 1316, height / 10 + 130);
      line(1310, height / 10 + 124, 1310, height / 10 + 136);

      rectangle(1335, height / 10 + 120, 1355, height / 10 + 140);
      line(1339, height / 10 + 130, 1351, height / 10 + 130);

      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 1300 && cp.x <= 1320 && cp.y >= (height / 10 + 20) && cp.y <= (height / 10 + 40))
      {
         size++;
         delay(100);
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 1335 && cp.x <= 1355 && cp.y >= (height / 10 + 20) && cp.y <= (height / 10 + 40))
      {
         size--;
         delay(100);
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 1300 && cp.x <= 1320 && cp.y >= (height / 10 + 70) && cp.y <= (height / 10 + 90))
      {
         x1++;
         delay(100);
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 1335 && cp.x <= 1355 && cp.y >= (height / 10 + 70) && cp.y <= (height / 10 + 90))
      {
         x1--;
         delay(100);
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 1300 && cp.x <= 1320 && cp.y >= (height / 10 + 120) && cp.y <= (height / 10 + 140))
      {
         y1++;
         delay(100);
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 1335 && cp.x <= 1355 && cp.y >= (height / 10 + 120) && cp.y <= (height / 10 + 140))
      {
         y1--;
         delay(100);
      }

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
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 10 && cp.x <= 30 && cp.y >= 150 && cp.y <= 170)
      {
         choice = 1;
         delay(300);
      }
      else if (GetAsyncKeyState(VK_F2))
      {
         choice = 2;
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x <= 30 && cp.x >= 10 && cp.y <= 140 && cp.y >= 120)
      {
         choice = 2;
         delay(300);
      }
      else if (GetAsyncKeyState(VK_F3))
      {
         choice = 3;
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x <= 30 && cp.x >= 10 && cp.y <= 260 && cp.y >= 240)
      {
         choice = 3;
         delay(300);
      }

      else if (GetAsyncKeyState(VK_F4))
      {
         choice = 4;
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 10 && cp.x <= 30 && cp.y <= 110 && cp.y >= 90)
      {
         choice = 4;
         delay(300);
      }

      else if (GetAsyncKeyState(VK_F5))
      {
         choice = 5;
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 10 && cp.x <= 30 && cp.y >= 180 && cp.y <= 200)
      {
         choice = 5;
         delay(300);
      }

      else if (GetAsyncKeyState(VK_F6))
      {
         choice = 6;
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x <= 30 && cp.x >= 10 && cp.y <= 230 && cp.y >= 210)
      {
         choice = 6;
         delay(300);
      }

      setcolor(0);
      line(120, 30, width * 0.9 + 60, 30);
      line(120, 30, 120, 680);
      line(120, 680, width * 0.9 + 60, 680);
      line(width * 0.9 + 60, 30, width * 0.9 + 60, 680);

      rectangle(width * 0.9 + 60, 690, width * 0.9 + 130, 720);
      sprintf(msg, "CLEAR", 3);
      outtextxy(width * 0.9 + 70, 695, msg);
      rectangle(10, 10, 80, 40);
      sprintf(msg, "SAVE", 3);
      outtextxy(30, 17, msg);
      rectangle(370, 710, 430, 740);
      sprintf(msg, "ERASE", 3);
      outtextxy(380, 715, msg);
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= width * 0.9 + 60 && cp.y >= 690 && cp.x <= width * 0.9 + 130 && cp.y <= 720)
      {
         cleardevice();
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 10 && cp.y >= 10 && cp.x <= 80 && cp.y <= 40)
      {
         writeimagefile("img.jpeg");
         delay(300);
         cleardevice();
      }
      if (GetAsyncKeyState(VK_LBUTTON) && cp.x >= 370 && cp.y >= 710 && cp.x <= 430 && cp.y <= 740)
      {
         choice = 7;
      }

      setcolor(color);
      if (cp.x >= 120 && cp.y <= 680 && cp.y >= 30 && cp.x <= (width * 0.9 + 60))
      {
         if (ismouseclick(WM_LBUTTONUP))
         {
            x3 = cp.x;
            y3 = cp.y;
            clearmouseclick(WM_LBUTTONUP);
         }
         else if (ismouseclick(WM_LBUTTONDOWN))
         {
            x2 = cp.x;
            y2 = cp.y;
            clearmouseclick(WM_LBUTTONDOWN);
         }
         else if (choice == 1)
         {

            if (GetAsyncKeyState(VK_LBUTTON))
            {

               // line(cp.x, cp.y, cp.x + x1, cp.y + y1);
               line(x2, y2, x3, y3);
            }
         }
         else if (choice == 2)
         {
            if (GetAsyncKeyState(VK_LBUTTON))
            {
               rectangle(x3, y3, x2, y2);
            }
         }
         else if (choice == 3)
         {
            // if (GetAsyncKeyState(VK_LBUTTON))
            // {
            //    rectangle(cp.x, cp.y, cp.x + x1, cp.y + y1);
            // }
            brush(cp.x, cp.y, size);
         }
         else if (choice == 4)
         {
            if (GetAsyncKeyState(VK_LBUTTON))
            {
               int r = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)) / 2;
               circle((x3 + x2) / 2, (y3 + y2) / 2, r);
            }
         }
         else if (choice == 5)
         {
            if (GetAsyncKeyState(VK_LBUTTON))
            {
               ellipse(cp.x, cp.y, 0, 360, x1, y1);
            }
         }
         else if (choice == 6)
         {
            if (GetAsyncKeyState(VK_LBUTTON))
            {
               setfillstyle(1, color);
               floodfill(cp.x, cp.y, 0);
               delay(100);
            }
         }
         else if (choice == 7)
         {
            if (GetAsyncKeyState(VK_LBUTTON))
            {
               setcolor(15);
               circle(cp.x, cp.y, size);
               putpixel(cp.x, cp.y, size);
               int r = size;
               while (r != 0)
                  circle(cp.x, cp.y, r--);
               r = size;
               setcolor(color);
            }
         }
      }

      // if (GetAsyncKeyState(VK_NUMPAD1))
      // {
      //    color = 1;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_NUMPAD2))
      // {
      //    color = 2;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_NUMPAD3))
      // {
      //    color = 3;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_NUMPAD4))
      // {
      //    color = 4;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_NUMPAD5))
      // {
      //    color = 5;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_NUMPAD6))
      // {
      //    color = 6;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_NUMPAD7))
      // {
      //    color = 7;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_NUMPAD8))
      // {
      //    color = 8;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_NUMPAD9))
      // {
      //    color = 9;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_NUMPAD0))
      // {
      //    color = 10;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_OEM_1))
      // {
      //    color = 11;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_OEM_2))
      // {
      //    color = 12;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_OEM_3))
      // {
      //    color = 13;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_OEM_4))
      // {
      //    color = 14;
      //    setcolor(color);
      // }
      // if (GetAsyncKeyState(VK_OEM_5))
      // {
      //    color = 15;
      //    setcolor(color);
      // }
      if (GetAsyncKeyState(VK_SPACE))
      {
         cleardevice();
      }
      if (GetAsyncKeyState(VK_SNAPSHOT))
      {
         writeimagefile("img.jpeg");
         delay(300);
         cleardevice();
      }
      setcolor(14);

      rectangle(20, 700, 70, 750);
      setfillstyle(1, color);
      floodfill(45, 725, 14);
      setcolor(color);
   }

   getch();
   return 0;
}