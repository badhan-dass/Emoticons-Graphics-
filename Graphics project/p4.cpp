#include<bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
using namespace std;

void drawEllipse_smaile(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, BLACK);
    putpixel(xc-x, yc+y, BLACK);

}

void ellipseMidpoint_smile(int xc, int yc, int rx, int ry)
{
    int rxSq = rx * rx;
    int rySq = ry * ry;
    int x = 0, y = ry, p;
    int px = 0, py = 2 * rxSq * y;
    drawEllipse_smaile(xc, yc, x, y);
//Region 1
    p = rySq - (rxSq * ry) + (0.25 * rxSq);
    while (px < py)
    {
        x++;
        px = px + 2 * rySq;
        if (p < 0)
            p = p + rySq + px;
        else
        {
            y--;
            py = py - 2 * rxSq;
            p = p + rySq + px - py;
        }
        drawEllipse_smaile(xc, yc, x, y);
        delay(10);
    }
//Region 2
    p = rySq*(x+0.5)*(x+0.5) + rxSq*(y-1)*(y-1) - rxSq*rySq;
    while (y > 0)
    {
        y--;
        py = py - 2 * rxSq;
        if (p > 0)
            p = p + rxSq - py;
        else
        {
            x++;
            px = px + 2 * rySq;
            p = p + rxSq - py + px;
        }
        drawEllipse_smaile(xc, yc, x, y);
        delay(10);
    }
}


void drawEllipse_sad(int xc, int yc, int x, int y)
{
    /* putpixel(xc+x, yc+y, BLACK);
     putpixel(xc-x, yc+y, BLACK);*/
    putpixel(xc+x, yc-y, BLACK);
    putpixel(xc-x, yc-y, BLACK);
}

void ellipseMidpoint_sad(int xc, int yc, int rx, int ry)
{
    int rxSq = rx * rx;
    int rySq = ry * ry;
    int x = 0, y = ry, p;
    int px = 0, py = 2 * rxSq * y;
    drawEllipse_sad(xc, yc, x, y);
//Region 1
    p = rySq - (rxSq * ry) + (0.25 * rxSq);
    while (px < py)
    {
        x++;
        px = px + 2 * rySq;
        if (p < 0)
            p = p + rySq + px;
        else
        {
            y--;
            py = py - 2 * rxSq;
            p = p + rySq + px - py;
        }
        drawEllipse_sad(xc, yc, x, y);
        delay(10);
    }
//Region 2
    p = rySq*(x+0.5)*(x+0.5) + rxSq*(y-1)*(y-1) - rxSq*rySq;
    while (y > 0)
    {
        y--;
        py = py - 2 * rxSq;
        if (p > 0)
            p = p + rxSq - py;
        else
        {
            x++;
            px = px + 2 * rySq;
            p = p + rxSq - py + px;
        }
        drawEllipse_sad(xc, yc, x, y);
        delay(10);
    }
}

void smile()
{
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"c:\\tc\\bgi");


    for( int i=0; i<50; i=i++)
    {
        setcolor(WHITE);
        settextstyle(10,0,7);
        outtextxy(0+i,390,"SMILE");
        delay(50);
        setcolor(WHITE);
        settextstyle(10,0,7);
        outtextxy(0+i,390,"SMILE");
    }

    circle(600,380,300);
    setfillstyle(SOLID_FILL,YELLOW);

    floodfill(602,385,WHITE);


    ellipse(455,300,0,360,30,50);  //eye1
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(456,299,WHITE);


    ellipse(725,300,0,360,30,50);  //eye2
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(726,299,WHITE);


    setcolor(BLACK);



    ellipseMidpoint_smile(600,530,120,65);

    ellipseMidpoint_smile(599,531,120,65);
    ellipseMidpoint_smile(598,530,120,65);
    ellipseMidpoint_smile(597,531,120,65);
    ellipseMidpoint_smile(596,529,120,65);
    ellipseMidpoint_smile(595,532,120,65);
    ellipseMidpoint_smile(594,529,120,65);
    ellipseMidpoint_smile(593,532,120,65);
    closegraph();

}

void sad()
{

    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"c:\\tc\\bgi");

      for( int i=0; i<50; i=i++)
    {
        setcolor(WHITE);
        settextstyle(10,0,7);
        outtextxy(0+i,390,"SAD");
        delay(50);
        setcolor(WHITE);
        settextstyle(10,0,7);
        outtextxy(0+i,390,"SAD");
    }

    circle(600,380,300);
    setfillstyle(SOLID_FILL,YELLOW);

    floodfill(602,385,WHITE);


    ellipse(455,300,0,360,30,50);  //eye1
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(456,299,WHITE);


    ellipse(725,300,0,360,30,50);  //eye2
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(726,299,WHITE);

    setcolor(BLACK);


    ellipseMidpoint_sad(600,530,120,65);

    ellipseMidpoint_sad(599,531,120,65);
    ellipseMidpoint_sad(598,530,120,65);
    ellipseMidpoint_sad(597,531,120,65);
    ellipseMidpoint_sad(596,529,120,65);
    ellipseMidpoint_sad(595,532,120,65);
    ellipseMidpoint_sad(594,529,120,65);
    ellipseMidpoint_sad(593,532,120,65);

   // getch();
    closegraph();
}

void angry()
{
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
    // setcolor(YELLOW);


      for( int i=0; i<50; i=i++)
    {
        setcolor(WHITE);
        settextstyle(10,0,7);
        outtextxy(0+i,390,"ANGRY");
        delay(50);
        setcolor(WHITE);
        settextstyle(10,0,7);
        outtextxy(0+i,390,"ANGRY");
    }


    circle(600,380,300);
    setfillstyle(SOLID_FILL,RED);

    floodfill(602,385,WHITE);
    // setcolor(BLACK);

    ellipse(475,310,0,360,50,40);  //eye1
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(456,299,WHITE);

    ellipse(695,310,0,360,50,40);  //eye2
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(726,299,WHITE);

    setcolor(BLACK);
    arc(600,530,0,180,100);
    ellipse(600,530,0,180,100,45);


     setcolor(BLACK);
    ellipse(480,300,360,164,90,90); //upper          //vuru1
    ellipse(475,300,360,163,95,50);   //lower
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(477,301,BLACK);

    ellipse(690,300,16,180,90,90); //upper          //vuru2
    ellipse(695,300,19,180,95,50);   //lower


    getch();
    closegraph();

}


void cry()
{
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"c:\\tc\\bgi");

      for( int i=0; i<50; i=i++)
    {
        setcolor(WHITE);
        settextstyle(10,0,7);
        outtextxy(0+i,390,"CRY");
        delay(50);
        setcolor(WHITE);
        settextstyle(10,0,7);
        outtextxy(0+i,390,"CRY");
    }


    circle(600,380,300);
    setfillstyle(SOLID_FILL,YELLOW);

    floodfill(602,385,WHITE);


    ellipse(455,300,0,360,40,50);  //eye1
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(456,299,WHITE);


    for(int i=448; i<=468; i++)

    {
        line(i,345,i,635);     //tear1
    }
    ellipse(725,300,0,360,40,50);  //eye2
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(726,299,WHITE);

    for(int i=720; i<=740; i++)
    {
        line(i,345,i,645);     //tear2
    }

    setcolor(BLACK);

    arc(600,550,0,180,100);  //mouth
    ellipse(600,550,0,180,100,45);
    getch();
    closegraph();
}


void wow()
{
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"c:\\tc\\bgi");

      for( int i=0; i<50; i=i++)
    {
        setcolor(WHITE);
        settextstyle(10,0,7);
        outtextxy(0+i,390,"WOW..");
        delay(50);
        setcolor(WHITE);
        settextstyle(10,0,7);
        outtextxy(0+i,390,"WOW..");
    }


    circle(600,380,300);
    setfillstyle(SOLID_FILL,YELLOW);

    floodfill(602,385,WHITE);


    ellipse(455,300,0,360,40,60);  //eye1
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(456,299,WHITE);


    ellipse(725,300,0,360,40,60);  //eye2
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(726,299,WHITE);
    ellipse(600,475,0,360,90,120);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(604,474,WHITE);

    getch();
    closegraph();

}

int main()
{



    cout<<"\n             ----------Here is our project for EMOTICONS.-------------\n\n";
    cout<<"Choose your options.\n\n";
    cout<<"Press 1 for  Smile.\n";
    cout<<"Press 2 for  Sad.\n";
    cout<<"Press 3 for  Cry.\n";
    cout<<"Press 4 for  Wow.\n";
    cout<<"Press 5 for  Angry.\n\n";
    int ch;
    while(cin>>ch)
    {
        if(ch==1)
        {
            smile();
        }
        else if(ch==2)
        {
            sad();
        }
        else if (ch==3)
        {

            cry();
        }
        else if(ch==4)
        {

            wow();
        }
        else
        {
            angry();
        }


    }

    return 0;
}

