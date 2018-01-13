#include <graphics.h>
#include <conio.h>

int main()
{
    int gdriver = DETECT;
    int gmode;

    initgraph(&gdriver,&gmode,"");
    setlinestyle(DASHED_LINE,50,THICK_WIDTH);

    line(200,200,100,100);
    getch();
    closegraph();
}
