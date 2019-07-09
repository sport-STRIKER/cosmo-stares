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


double dist_arabela_star (int x_arabela, int y_arabela,
                          int x_star,
                          int y_star_ryad_1,
                          int y_star_ryad_2,
                          int y_star_ryad_3);


void cosmo_stares_game (int x_arabela, int y_arabela, int vx_arabela, int vy_arabela,
                        int x_planet_1, int y_planet_1,
                        int x_planet_2, int y_planet_2,
                        int x_star, int vx_star,
                        int y_star_ryad_1,
                        int y_star_ryad_2,
                        int y_star_ryad_3,
                        int dt);


void control_cosmo_stares_game (int *vx, int *vy,
                                int up, int down, int left, int right, int space);


void move_cosmo_stares_arabela (int *x, int *y, int *vx, int *vy,
                                int *dt);


void move_cosmo_stares_stare (int *x, int *vx,
                              int *dt);




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

  //control_cosmo_stares_game ();

  //move_cosmo_stares_arabela ();

  //move_cosmo_stares_stare  ();

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




double dist_arabela_star (int x_arabela, int y_arabela,
                          int x_star,
                          int y_star_ryad_1,
                          int y_star_ryad_2,
                          int y_star_ryad_3)
{
  int lose_dist = 30;

  double d_star_ryad_1_1 = dist (x_arabela, y_arabela,
                                 x_star,
                                 y_star_ryad_1);

  double d_star_ryad_1_2 = dist (x_arabela, y_arabela,
                                 x_star,
                                 y_star_ryad_2);

  double d_star_ryad_1_3 = dist (x_arabela, y_arabela,
                                 x_star,
                                 y_star_ryad_3);


  double d_star_ryad_2_1 = dist (x_arabela, y_arabela,
                                (x_star + 190),
                                 y_star_ryad_1);

  double d_star_ryad_2_2 = dist (x_arabela, y_arabela,
                                (x_star + 190),
                                 y_star_ryad_2);

  double d_star_ryad_2_3 = dist (x_arabela, y_arabela,
                                (x_star + 190),
                                 y_star_ryad_3);


  double d_star_ryad_3_1 = dist (x_arabela, y_arabela,
                                (x_star + 380),
                                 y_star_ryad_1);

  double d_star_ryad_3_2 = dist (x_arabela, y_arabela,
                                (x_star + 380),
                                 y_star_ryad_2);

  double d_star_ryad_3_3 = dist (x_arabela, y_arabela,
                                (x_star + 380),
                                 y_star_ryad_3);


  double d_star_ryad_4_1 = dist (x_arabela, y_arabela,
                                (x_star + 470),
                                 y_star_ryad_1);

  double d_star_ryad_4_2 = dist (x_arabela, y_arabela,
                                (x_star + 470),
                                 y_star_ryad_2);

  double d_star_ryad_4_3 = dist (x_arabela, y_arabela,
                                (x_star + 470),
                                 y_star_ryad_3);



  double d_star_ryad_5_1 = dist (x_arabela, y_arabela,
                                (x_star + 660),
                                 y_star_ryad_1);

  double d_star_ryad_5_2 = dist (x_arabela, y_arabela,
                                (x_star + 660),
                                 y_star_ryad_2);

  double d_star_ryad_5_3 = dist (x_arabela, y_arabela,
                                (x_star + 660),
                                 y_star_ryad_3);

  if (d_star_ryad_1_1 < lose_dist || d_star_ryad_1_2 < lose_dist || d_star_ryad_1_3 < lose_dist ||
      d_star_ryad_2_1 < lose_dist || d_star_ryad_2_2 < lose_dist || d_star_ryad_2_3 < lose_dist ||
      d_star_ryad_3_1 < lose_dist || d_star_ryad_3_2 < lose_dist || d_star_ryad_3_3 < lose_dist ||
      d_star_ryad_4_1 < lose_dist || d_star_ryad_4_2 < lose_dist || d_star_ryad_4_3 < lose_dist ||
      d_star_ryad_5_1 < lose_dist || d_star_ryad_5_2 < lose_dist || d_star_ryad_5_3 < lose_dist)
  {
    return 1;
  }
  else
    return 0;
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
  while (true)
  {
    txBegin();

    txSetColor (TX_BLACK);

    txSetFillColor (TX_BLACK);

    txClear ();


    double uslovie = dist_arabela_star (x_arabela, y_arabela,
                                        x_star,
                                        y_star_ryad_1,
                                        y_star_ryad_2,
                                        y_star_ryad_3);




    if (uslovie == 1)
    {
      txMessageBox ("Не фартануло, не получилось");

      break;
    }




    if (y_arabela >= y_planet_1)
    {
      txMessageBox ("Красаувчек ежжи!!");

      break;
    }




    control_cosmo_stares_game (&vx_arabela, &vy_arabela,
                               VK_UP, VK_DOWN, VK_LEFT, VK_RIGHT, VK_SPACE);
    move_cosmo_stares_arabela (&x_arabela, &y_arabela, &vx_arabela, &vy_arabela,
                               &dt);

    arabela (x_arabela, y_arabela);





    planet (x_planet_1, y_planet_1,
            x_planet_2, y_planet_2);




    move_cosmo_stares_stare (&x_star, &vx_star,
                             &dt);

    star (x_star,
          y_star_ryad_1,
          y_star_ryad_2,
          y_star_ryad_3);


    txSleep (25);
  }
}




void control_cosmo_stares_game (int *vx, int *vy,
                                int up, int down, int left, int right, int space)
{
  if (GetAsyncKeyState (up))
    (*vy)--;

  if (GetAsyncKeyState (down))
    (*vy)++;

  if (GetAsyncKeyState (left))
    (*vx)--;

  if (GetAsyncKeyState (right))
    (*vx)++;


  if (GetAsyncKeyState (space))
    (*vx) = 0;

  if (GetAsyncKeyState (space))
    (*vy) = 0;
}




void move_cosmo_stares_arabela (int *x, int *y, int *vx, int *vy,
                                int *dt)
{
  if ((*x) < 0)
    (*vx) = - (*vx);

  if ((*x) > 1000)
    (*vx) = - (*vx);

  if ((*y) < 0)
    (*vy) = - (*vy);

  if ((*y) > 600)
    (*vy) = - (*vy);


  *x = *x + *vx * *dt;

  *y = *y + *vy * *dt;
}




void move_cosmo_stares_stare (int *x, int *vx,
                              int *dt)
{
  if ((*x) < 0)
    (*vx) = - (*vx);

  if ((*x) > 249)
    (*vx) = - (*vx);


  *x = *x + *vx * *dt;
}
