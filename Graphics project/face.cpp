#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 200;                //circle
   int stangle = 0, endangle = 360; //ellipse
   int stangle1 =220, endangle1 =320;//arc
   int radius1 = 145;
   int xmax, ymax;   //line

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   /* draw the face */
   circle(midx, midy, radius);  //face outline
   circle(220, 190, 30);  // eye 1
   circle(410, 190, 30);  //eye 2          //xradius,yradius
   ellipse(midx, 270, stangle, endangle,25, 70);  //nose
   arc(midx, midy, stangle1, endangle1, radius1);  //mouth
   //    x,   y,  to x,to y
   line(223, 310, 194, 350); // side of mouth
   line(410, 310, 448, 355); // side of mouth
   /* clean up */
   getch();
   closegraph();
   return 0;
}
