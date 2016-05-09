/*While in class 12th in 2007, i had made a game "snake-d", somewhat like the one u play in ur classic nokia phones using Turbo C++ (V3.0) compiler.
But it had a drawback that it couldnt make turns smoothly, so after the board exams, i wrote this program to turn my snake and make its motion more smooth.
Later i deployed it to hit down a moving target in another program.

To run it, u'll need turboc++ compiler (v 3.0) (with EGAVGA.BGI file)

here, what u see is a bare structure of that smooth turning snake. Its a snake which u can control using direction keys. You are free to deploy to use it in your projects if u find it worthy enough..!!
for any queries, drop me a mail at:
prashantdwivedi06@gmail.com

Thanx & all d best

*/

#include<iostream.h>
#include<conio.h>
#include<bios.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>

#define UP 18432
#define DOWN 20480
#define LEFT 19200
#define RIGHT 19712
#define ESC 283


/***********************************************************************/

struct menues
{     	void options();
}menu;

void menues::options()
{	closegraph();
	cout<<"\nexiting\n";
	exit(0);
}

/**********************************************************************/

struct SNAKES
{
	struct snake_ends
	{	int x, y;
		int color;
	}head, tail;

	struct body
	{  	int x, y;
	}cell[40];   // cells of body between head and tail

	int length;
	int speed;   // !!! high value of "speed" slows down snake !!!

	int update();  //updates body cells on every pixel move of snake
	int move_left();
	int move_right();
	int move_up();
	int move_down();

	SNAKES();
}snake;

SNAKES::SNAKES()
{	length=40;     // must be equal to "x" as in cell[x] while creating struct cell[x]
	speed=20;      // !!! high value of "speed" slows down snake !!!
	head.x=250;
	head.y=150;
	head.color=15;	//since graphics maynot be initialised yet so we are indicating colors using numbers

	/*constructing body*/
	for(int i=1; i<length; i++)
	{	cell[i].x=head.x;
		cell[i].y=head.y;
	}
	tail.x=cell[length-1].x-i;
	tail.y=cell[length-1].y;
}

SNAKES::update()
{	for(int i=length-1; i>=0; i--)
	{	cell[i]=cell[i-1];
	}

	cell[0].x=head.x;
	cell[0].y=head.y;
	tail.x=cell[length-1].x;
	tail.y=cell[length-1].y;

	return 0;
}

/************************************************************************/

struct game_variables
{
	int key_pressed;
	int right_boundry, left_boundry, top_boundry, bottom_boundry;
	int centrex, centrey;  // screen's centre pixels
	int bgcolor;	//background color
	void play_terminate(int);
	void over();	// for game over case
	game_variables();
}game;

game_variables::game_variables()
{	key_pressed=0;
	right_boundry=600;   //just setting an initial default value as precaution
	left_boundry=20;
	top_boundry=20;
	bottom_boundry=500;
	bgcolor=RED;

}

void game_variables::play_terminate(int force_quit)
{
	if(force_quit==1)
	{	outtextxy(200,100, "bad way!!!");
	}
	getch();
	getch();
	menu.options();
}

void game_variables::over()
{	outtextxy(centrex-20, centrey, "GAME OVER!!");
	getch();
	getch();
	menu.options();
}


/***********************************************************************/
int control_room()
{
	setbkcolor(game.bgcolor);
	game.centrex=getmaxx()/2;
	game.centrey=getmaxy()/2;
	game.left_boundry=10;
	game.right_boundry=game.centrex*2-10;
	game.top_boundry=20;
	game.bottom_boundry=game.centrey*2-5;

	rectangle(game.left_boundry, game.top_boundry, game.right_boundry, game.bottom_boundry);
	snake.tail.color=game.bgcolor;	/* so that the path of snake is erased*/
	game.key_pressed=RIGHT;			/* to start game for the first time */

	while(1)
	{
		switch(game.key_pressed)
		{
			case UP:	snake.move_up();
					if(game.key_pressed==DOWN) /* disabling down */
					{	game.key_pressed=UP;
					}
					break;

			case DOWN:	snake.move_down();
					if(game.key_pressed==UP) /* disabling down */
					{	game.key_pressed=DOWN;
					}
					break;

			case LEFT:	snake.move_left();
					if(game.key_pressed==RIGHT) /* disabling down */
					{	game.key_pressed=LEFT;
					}
					break;

			case RIGHT:	snake.move_right();
					if(game.key_pressed==LEFT) /* disabling down */
					{	game.key_pressed=RIGHT;
					}
					break;

			case ESC:	game.play_terminate(1);
					break;

			default:        snake.move_right();
					break;

		}/* end of switch*/

	}/* end of while */
}


/*************************************************************************/

SNAKES::move_down()
{
	while(!kbhit())
	{       if(snake.head.y==game.bottom_boundry)
			snake.head.y=game.top_boundry+1;
		if(getpixel(snake.head.x, snake.head.y)==snake.head.color)
			game.over();

		/* moving snake ahead */
		putpixel(snake.head.x, snake.head.y, snake.head.color);
		snake.head.y++;
		delay(snake.speed);
		/* erasing snakes trailing path */
		putpixel(snake.tail.x, snake.tail.y, snake.tail.color);
		snake.update();
	}
	game.key_pressed=_bios_keybrd(_KEYBRD_READ);

}

SNAKES::move_up()
{
	while(!kbhit())
	{    	if(snake.head.y==game.top_boundry)
			snake.head.y=game.bottom_boundry-1;
		if(getpixel(snake.head.x, snake.head.y)==snake.head.color)
			game.over();

		/* moving snake ahead */
		putpixel(snake.head.x, snake.head.y, snake.head.color);
		snake.head.y--;
		delay(snake.speed);
		/* erasing snakes trailing path */
		putpixel(snake.tail.x, snake.tail.y, snake.tail.color);
		snake.update();
	}
	game.key_pressed=_bios_keybrd(_KEYBRD_READ);
}

SNAKES::move_right()
{
	while(!kbhit())
	{       if(snake.head.x==game.right_boundry)
			snake.head.x=game.left_boundry+1;
		if(getpixel(snake.head.x, snake.head.y)==snake.head.color)
			game.over();

		/* moving snake ahead */
		putpixel(snake.head.x, snake.head.y, snake.head.color);
		snake.head.x++;
		delay(snake.speed);
		/* erasing snakes trailing path */
		putpixel(snake.tail.x, snake.tail.y, snake.tail.color);
		snake.update();
	}
	game.key_pressed=_bios_keybrd(_KEYBRD_READ);
}

SNAKES::move_left()
{
	while(!kbhit())
	{       if(snake.head.x==game.left_boundry)
			snake.head.x=game.right_boundry-1;
		if(getpixel(snake.head.x, snake.head.y)==snake.head.color)
			game.over();

		/* moving snake ahead */
		putpixel(snake.head.x, snake.head.y, snake.head.color);
		snake.head.x--;
		delay(snake.speed);
		/* erasing snakes trailing path */
		putpixel(snake.tail.x, snake.tail.y, snake.tail.color);
		snake.update();
	}
	game.key_pressed=_bios_keybrd(_KEYBRD_READ);
}


/************************************************************************/
int main()
{
	clrscr();

	/* request auto detection */
	int gdriver = DETECT, gmode;

	/* initialize graphics mode */
	initgraph(&gdriver, &gmode, "");

	control_room();
	return 0;
}
