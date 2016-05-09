/*
#include <conio.h>
#include<iostream.h>

 void main()
{


   clrscr();
	  textcolor(2);
	  cprintf("SACHIN this asd");

   getch();
} */
      /*

#include <iostream.h>
#include <conio.h>

void main()
{
   int i;

   clrscr();
   for (i=0; i<9; i++)
   {
       textattr(i + ((i+1) << 4));
       cprintf("This is a test\r\n");
   }
    cout<<"sadasdsdsadsa";
   getch();
}

     */



#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int x = 0, y = 0;
   int i;
   char msg[80];

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

   y = getmaxy() / 5;

   settextjustify(LEFT_TEXT, CENTER_TEXT);
   {
      /* select the text style, direction, and size */
      settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);

      /* create a message string */
      cout<<"\t";
      sprintf(msg, "Sachin");

      /* output the message */
      outtextxy(x, y, msg);

      /* advance to the end of the text */
      x += textwidth(msg);
   }

   /* clean up */
   getch();
   closegraph();
   return 0;
}

