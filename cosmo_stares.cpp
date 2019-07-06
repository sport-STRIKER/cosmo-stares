#include "TXLib.h"


void arabela (int x, int y);

void star (int x,
           int y1,
           int y2,
           int y3);

void planet (int x1, int y1,
             int x2, int y2);

double dist (int x1, int y1,
             int x2, int y2);

void cosmo_stares_game (int x1, int y1, int vx1, int vy1,
                        int x2, int y2,
                        int x3, int y3,
                        int x4, int vx4,
                        int y6,
                        int y7,
                        int y8,
                        int dt);




int main()
{
  txCreateWindow (1000, 600);


  cosmo_stares_game (500, 100, 5, 5,
                     0, 500,
                     1000, 600,
                     10, 8,
                     214,
                     314,
                     414,
                     1);

  //arabela (500, 100);

  /*star (10,
        214,
        314,
        414);*/

/*
  planet (0, 500,
          1000, 600);*/

  return 0;
}




void arabela (int x, int y)
{
  int x_machta1 = x;
  int y_machta1 = y - 56;


  int x_korma1 = x - 33;
  int y_korma1 = y;


  int x_korma2 = x + 35;
  int y_korma2 = y + 37;


  int x_parus1 = x_machta1;
  int y_parus1 = y_machta1;


  int x_parus2 = x_korma1;
  int y_parus2 = y_korma1;


  int x_parus3 = x_korma2;
  int y_parus3 = y_korma1;

  txSetColor (TX_BLUE);

  txLine (x_machta1, y_machta1,
          x, y);

  txSetColor (TX_WHITE);
  txSetFillColor (TX_WHITE);

  txLine (x_parus1, y_parus1,
          x_parus2, y_parus2);
  txLine (x_parus1, y_parus1,
          x_parus3, y_parus3);


  txSetColor (TX_BLUE);
  txSetFillColor (TX_BLACK);

  txRectangle (x_korma1, y_korma1,
               x_korma2, y_korma2);
}




void planet (int x1, int y1,
             int x2, int y2)
{
  txSetColor (TX_GREEN);
  txSetFillColor (TX_GREEN);

  txRectangle (x1, y1,
               x2, y2);
}




void star (int x,
            int y1,
            int y2,
            int y3)
{
  int ryadi = 5;
  int i = 0;

  while (i < ryadi)
  {
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);

    txCircle (x, y1, 5);

    txCircle (x, y2, 5);

    txCircle (x, y3, 5);

    x = x + 190;

    i++;
  }
}




double dist (int x1, int y1,
             int x2, int y2)
{
  return sqrt ((x2  - x1) * (x2  - x1) + (y2 - y1) * (y2 - y1));
}




void cosmo_stares_game (int x1, int y1, int vx1, int vy1,
                        int x2, int y2,
                        int x3, int y3,
                        int x4, int vx4,
                        int y6,
                        int y7,
                        int y8,
                        int dt)
{
  int lose_dist = 30;

  while (true)
  {
    txBegin();

    txSetColor (TX_BLACK);

    txSetFillColor (TX_BLACK);

    txClear ();


    double d1 = dist (x1, y1,
                      x4, y6);
    double d2 = dist (x1, y1,
                      x4, y7);
    double d3 = dist (x1, y1,
                      x4, y8);


    double d4 = dist (x1, y1,
                     (x4 + 190), y6);
    double d5 = dist (x1, y1,
                     (x4 + 190), y7);
    double d6 = dist (x1, y1,
                     (x4 + 190), y8);


    double d7 = dist (x1, y1,
                     (x4 + 380), y6);
    double d8 = dist (x1, y1,
                     (x4 + 380), y7);
    double d9 = dist (x1, y1,
                     (x4 + 380), y8);


    double d10 = dist (x1, y1,
                      (x4 + 470), y6);
    double d11 = dist (x1, y1,
                      (x4 + 470), y7);
    double d12 = dist (x1, y1,
                      (x4 + 470), y8);



    double d13 = dist (x1, y1,
                      (x4 + 660), y6);
    double d14 = dist (x1, y1,
                      (x4 + 660), y7);
    double d15 = dist (x1, y1,
                      (x4 + 660), y8);


    if (d1 < lose_dist || d2 < lose_dist || d3 < lose_dist ||
        d4 < lose_dist || d5 < lose_dist || d6 < lose_dist ||
        d7 < lose_dist || d8 < lose_dist || d9 < lose_dist ||
        d10 < lose_dist || d11 < lose_dist || d12 < lose_dist ||
        d13 < lose_dist || d14 < lose_dist || d15 < lose_dist)
    {
      txMessageBox ("Не фартануло, не получилось");

      break;
    }


    if (y1 >= y2)
    {
      txMessageBox ("Красаувчек ежжи!!");

      break;
    }



    if (GetAsyncKeyState (VK_UP))
        (vy1)--;

    if (GetAsyncKeyState (VK_DOWN))
        (vy1)++;

    if (GetAsyncKeyState (VK_LEFT))
        (vx1)--;

    if (GetAsyncKeyState (VK_RIGHT))
        (vx1)++;

    if (GetAsyncKeyState (VK_SPACE))
        (vx1) = 0;

    if (GetAsyncKeyState (VK_SPACE))
        (vy1) = 0;




    arabela (x1, y1);

    planet (x2, y2,
            x3, y3);

    star (x4,
          y6,
          y7,
          y8);



    if (x1 < 0)
        (vx1) = - (vx1);

    if (x1 > 1000)
        (vx1) = - (vx1);


    if (x4 < 0)
        (vx4) = - (vx4);

    if (x4 > 249)
        (vx4) = - (vx4);


    if (y1 < 600)
        (vy1) = - (vy1);

    if (y1 > 0)
        (vy1) = - (vy1);


    x1 = x1 + vx1 * dt;

    y1 = y1 + vy1 * dt;

    x4 = x4 + vx4 * dt;

    txSleep (25);
  }
}
