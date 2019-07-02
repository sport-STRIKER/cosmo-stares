#include "TXLib.h"


void arabela (int x, int y);


void planet (int x1, int y1,
             int x2, int y2);




int main()
{
  txCreateWindow (1000, 600);

  arabela (500, 100);

  planet (0, 500,
          1000, 600);

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
