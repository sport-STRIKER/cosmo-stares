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

void cosmo_stares_game (int x_arabela, int y_arabela, int vx_arabela, int vy_arabela,
                        int x_planet_1, int y_planet_1,
                        int x_planet_2, int y_planet_2,
                        int x_star, int vx_star,
                        int y_star_ryad_1,
                        int y_star_ryad_2,
                        int y_star_ryad_3,
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




void cosmo_stares_game (int x_arabela, int y_arabela, int vx_arabela, int vy_arabela,
                        int x_planet_1, int y_planet_1,
                        int x_planet_2, int y_planet_2,
                        int x_star, int vx_star,
                        int y_star_ryad_1,
                        int y_star_ryad_2,
                        int y_star_ryad_3,
                        int dt)
{
  int lose_dist = 30;

  while (true)
  {
    txBegin();

    txSetColor (TX_BLACK);

    txSetFillColor (TX_BLACK);

    txClear ();


    double d_star_ryad_1_1 = dist (x_arabela, y_arabela,
                      x_star, y_star_ryad_1);
    double d_star_ryad_1_2 = dist (x_arabela, y_arabela,
                      x_star, y_star_ryad_2);
    double d_star_ryad_1_3 = dist (x_arabela, y_arabela,
                      x_star, y_star_ryad_3);


    double d_star_ryad_2_1 = dist (x_arabela, y_arabela,
                     (x_star + 190), y_star_ryad_1);
    double d_star_ryad_2_2 = dist (x_arabela, y_arabela,
                     (x_star + 190), y_star_ryad_2);
    double d_star_ryad_2_3 = dist (x_arabela, y_arabela,
                     (x_star + 190), y_star_ryad_3);


    double d_star_ryad_3_1 = dist (x_arabela, y_arabela,
                     (x_star + 380), y_star_ryad_1);
    double d_star_ryad_3_2 = dist (x_arabela, y_arabela,
                     (x_star + 380), y_star_ryad_2);
    double d_star_ryad_3_3 = dist (x_arabela, y_arabela,
                     (x_star + 380), y_star_ryad_3);


    double d_star_ryad_4_1 = dist (x_arabela, y_arabela,
                      (x_star + 470), y_star_ryad_1);
    double d_star_ryad_4_2 = dist (x_arabela, y_arabela,
                      (x_star + 470), y_star_ryad_2);
    double d_star_ryad_4_3 = dist (x_arabela, y_arabela,
                      (x_star + 470), y_star_ryad_3);



    double d_star_ryad_5_1 = dist (x_arabela, y_arabela,
                      (x_star + 660), y_star_ryad_1);
    double d_star_ryad_5_2 = dist (x_arabela, y_arabela,
                      (x_star + 660), y_star_ryad_2);
    double d_star_ryad_5_3 = dist (x_arabela, y_arabela,
                      (x_star + 660), y_star_ryad_3);


    if (d_star_ryad_1_1 < lose_dist || d_star_ryad_1_2 < lose_dist || d_star_ryad_1_3 < lose_dist ||
        d_star_ryad_2_1 < lose_dist || d_star_ryad_2_2 < lose_dist || d_star_ryad_2_3 < lose_dist ||
        d_star_ryad_3_1 < lose_dist || d_star_ryad_3_2 < lose_dist || d_star_ryad_3_3 < lose_dist ||
        d_star_ryad_4_1 < lose_dist || d_star_ryad_4_2 < lose_dist || d_star_ryad_4_3 < lose_dist ||
        d_star_ryad_5_1 < lose_dist || d_star_ryad_5_2 < lose_dist || d_star_ryad_5_3 < lose_dist)
    {
      txMessageBox ("Не фартануло, не получилось");

      break;
    }


    if (y_arabela >= y_planet_1)
    {
      txMessageBox ("Красаувчек ежжи!!");

      break;
    }



    if (GetAsyncKeyState (VK_UP))
        (vy_arabela)--;

    if (GetAsyncKeyState (VK_DOWN))
        (vy_arabela)++;

    if (GetAsyncKeyState (VK_LEFT))
        (vx_arabela)--;

    if (GetAsyncKeyState (VK_RIGHT))
        (vx_arabela)++;

    if (GetAsyncKeyState (VK_SPACE))
        (vx_arabela) = 0;

    if (GetAsyncKeyState (VK_SPACE))
        (vy_arabela) = 0;




    arabela (x_arabela, y_arabela);

    planet (x_planet_1, y_planet_1,
            x_planet_2, y_planet_2);

    star (x_star,
          y_star_ryad_1,
          y_star_ryad_2,
          y_star_ryad_3);



    if (x_arabela < 0)
        (vx_arabela) = - (vx_arabela);

    if (x_arabela > 1000)
        (vx_arabela) = - (vx_arabela);


    if (x_star < 0)
        (vx_star) = - (vx_star);

    if (x_star > 249)
        (vx_star) = - (vx_star);


    if (y_arabela < 600)
        (vy_arabela) = - (vy_arabela);

    if (y_arabela > 0)
        (vy_arabela) = - (vy_arabela);


    x_arabela = x_arabela + vx_arabela * dt;

    y_arabela = y_arabela + vy_arabela * dt;

    x_star = x_star + vx_star * dt;

    txSleep (25);
  }
}
