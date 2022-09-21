
#include<graphics.h>
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<dos.h>
  int turn =1;
  int user=1,midx,midy,x,y;
  char ch;
  int a[3][3]={0,0,0,0,0,0,0,0,0};
  int check=0,d;
  int checkfun(int );
  void body(void);
  void boxes();
  int result(int );
  void computer();
  void circle(int );
  void cross(int );
  void intro();
  char p1[20],p2[20];
  void a321();
  void page_2();
  void page_3();
void main()
{

   int gdriver=DETECT,gmode,errorcode;
  initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
  errorcode=graphresult();
  if(errorcode!=grOk)
  {
    printf("graphic error:%s\n",grapherrormsg(errorcode));


    printf("press any key to halt:");
    getch();
    exit(1);
  }
  a321();     // first page
  page_2();
  cleardevice();
  setbkcolor(7);
  boxes();                 // second page part 1
  intro();                 // second page part 2
  while(!kbhit())
   {
      setcolor(9);
      settextstyle(0,0,2);
      outtextxy(180,340,"PRESS ANY KEY TO CONTINUE");
      delay(400);

      setcolor(7);
      settextstyle(0,0,2);
      outtextxy(180,340,"PRESS ANY KEY TO CONTINUE");
      delay(400);
   }
   getch();
   page_3();
  cleardevice();
  setbkcolor(0);
  body();
  while(turn<=9)
  {
	 if(user==1)
	      {

		while(!kbhit())
		{
		 setcolor(2);
		 setfillstyle(1,2);
		 fillellipse(150,440,100,20);
		 setcolor(1);
		 settextstyle(0,0,2);
		 outtextxy(90,432,"PLAYER 1");
		 delay(500);

		 setcolor(10);
		 setfillstyle(1,10);
		 fillellipse(150,440,100,20);
		 setcolor(9);
		 settextstyle(0,0,2);
		 outtextxy(90,432,"PLAYER 1");
		 delay(500);

		 setcolor(2);
		 setfillstyle(1,2);
		 fillellipse(150,440,100,20);
		 setcolor(1);
		 settextstyle(0,0,2);
		 outtextxy(90,432,"PLAYER 1");

		}

	      }
    else if(user==2)
    {
       while(!kbhit())
	{
	 setcolor(2);
	 setfillstyle(1,2);
	 fillellipse(450,440,100,20);
	 setcolor(1);
	 settextstyle(0,0,2);
	 outtextxy(390,432,"PLAYER 2");
	 delay(500);

	 setcolor(10);
	 setfillstyle(1,10);
	 fillellipse(450,440,100,20);
	 setcolor(9);
	 settextstyle(0,0,2);
	 outtextxy(390,432,"PLAYER 2");
	 delay(500);

	 setcolor(2);
	 setfillstyle(1,2);
	 fillellipse(450,440,100,20);
	 setcolor(1);
	 settextstyle(0,0,2);
	 outtextxy(390,432,"PLAYER 2");

	}
    }




    ch=getch();
    switch(ch)
    {
      case '1':
	       if(user==1)
	       circle(1);
	       else
	       cross(1);
	       break;
      case '2':
	       if(user==1)
	       circle(2);
	       else
	       cross(2);
	       break;
      case '3':
	       if(user==1)
	       circle(3);
	       else
	       cross(3);
	       break;
      case '4':
	       if(user==1)
	       circle(4);
	       else
	       cross(4);
	       break;
      case '5':
	       if(user==1)
	       circle(5);
	       else
	       cross(5);
	       break;
      case '6':
	       if(user==1)
	       circle(6);
	       else
	       cross(6);
	       break;
      case '7':
	       if(user==1)
	       circle(7);
	       else
	       cross(7);
	       break;
      case '8':
	       if(user==1)
	       circle(8);
	       else
	       cross(8);
	       break;
      case '9':
	       if(user==1)
	       circle(9);
	       else
	       cross(9);
	       break;
      default:
	     printf("wrong input");

    }
  }

 while(!kbhit())
 {
    setcolor(5);
    settextstyle(0,0,2);
    outtextxy(480,180,"ITS");
    outtextxy(480,200,"DRAW");
    delay(500);

    setcolor(13);
    settextstyle(0,0,2);
    outtextxy(480,180,"ITS");
    outtextxy(480,200,"DRAW");
    delay(500);

 }

 getch();

 closegraph();
}

 void body()
 {
   setbkcolor(11);
   setcolor(8);
   /*horizontal lines...*/
   for(int i=157;i<400;i=i+100)
    {
      line(i,100,i+86,100);
      line(i,200,i+86,200);
      line(i,300,i+86,300);
      line(i,400,i+86,400);
    }
   /*vertical lines......*/
   for(i=150;i<500;i=i+100)
    {
      line(i,107,i,193);
      line(i,207,i,293);
      line(i,307,i,393);
    }
   /*arcs....*/
   for(i=157;i<400;i=i+100)
    {
      arc(i,107,90,180,7);
      arc(i,207,90,180,7);
      arc(i,307,90,180,7);

      arc(i+86,107,0,90,7);
      arc(i+86,207,0,90,7);
      arc(i+86,307,0,90,7);

      arc(i,193,180,270,7);
      arc(i,293,180,270,7);
      arc(i,393,180,270,7);

      arc(i+86,193,270,0,7);
      arc(i+86,293,270,0,7);
      arc(i+86,393,270,0,7);
    }
    /*coloring of boxes*/
    for(i=200;i<500;i=i+100)
     {
       setfillstyle(1,7);
       floodfill(i,150,8);
       floodfill(i,250,8);
       floodfill(i,350,8);
     }
 }

  void page_3()
{
  cleardevice();
  // T  red
  setbkcolor(7);
  setcolor(4);
  line(90,20,120,18);
  line(90,20,85,40);
  line(120,18,125,40);
  line(85,40,95,40);
  line(125,40,115,40);
  line(95,40,95,82);
  line(115,40,115,80);
  line(95,82,115,80);
  setfillstyle(1,4) ;
  floodfill(100,30,4);
  // T yellow
  setcolor(14);
  line(93,23,117,21);
  line(93,23,88,37);
  line(117,21,122,37);
  line(88,37,98,37);
  line(122,37,112,37);
  line(98,37,98,78);
  line(112,37,112,77);
  line(98,78,112,77);
  setfillstyle(1,14) ;
  floodfill(100,30,14);

   //I red
   setcolor(4);
   line(129,30,149,32);
   line(129,30,119,82);
   line(149,32,139,81);
   line(119,82,139,81);
   setfillstyle(1,4) ;
   floodfill(140,55,4);
   // I yelllow
   setcolor(14);
   line(132,33,146,35);
   line(132,33,122,79);
   line(146,35,136,78);
   line(122,79,136,78);
   setfillstyle(1,14) ;
   floodfill(140,55,14);
   //C red
   setcolor(4);
   arc(175,56,90,270,28);
   arc(181,56,90,270,14);
   line(175,28,181,42);
   line(175,84,181,70);
   setfillstyle(1,4) ;
   floodfill(161,56,4);

    //C yellow
   setcolor(14);
   arc(172,56,90,270,22);
   arc(178,56,90,270,16);
   line(172,34,178,40);
   line(172,78,178,72);
   setfillstyle(1,14) ;
   floodfill(156,56,14);

    // T  red
  setbkcolor(7);
  setcolor(4);
  line(210,20,240,18);
  line(210,20,205,40);
  line(240,18,245,40);
  line(205,40,215,40);
  line(245,40,235,40);
  line(215,40,215,82);
  line(235,40,235,80);
  line(215,82,235,80);
  setfillstyle(1,4) ;
  floodfill(220,30,4);

  // T yellow
  setcolor(14);
  line(213,23,237,21);
  line(213,23,208,37);
  line(237,21,242,37);
  line(208,37,218,37);
  line(242,37,232,37);
  line(218,37,218,78);
  line(232,37,232,77);
  line(218,78,232,77);
  setfillstyle(1,14) ;
  floodfill(220,30,14);

  // A red
   setcolor(4);
   line(249,28,269,30);
   line(249,28,240,86);
   line(240,86,257,88);
   line(269,30,290,86);
   line(290,86,273,88);
   line(257,88,259,78);
   line(273,88,270,78);
   line(259,78,270,78);
   line(259,68,261,48);
   line(261,48,269,68);
   line(259,68,269,68);
   setfillstyle(1,4) ;
   floodfill(261,70,4);

   // A yellow
   setcolor(14);
   line(252,31,266,33);
   line(252,31,243,83);
   line(243,83,254,85);
   line(266,33,287,83);
   line(287,83,276,86);
   line(254,85,256,75);
   line(276,85,273,75);
   line(256,75,273,75);
   line(256,71,261,45);
   line(261,45,272,71);
   line(256,71,272,71);
   setfillstyle(1,14) ;
   floodfill(261,72,14);

   //C red
   setcolor(4);
   arc(312,56,90,270,28);
   arc(318,56,90,270,14);
   line(312,28,318,42);
   line(312,84,318,70);
   setfillstyle(1,4) ;
   floodfill(298,56,4);

    //C yellow
   setcolor(14);
   arc(310,56,90,270,22);
   arc(316,56,90,270,16);
   line(310,34,316,40);
   line(310,78,316,72);
   setfillstyle(1,14) ;
   floodfill(293,56,14);

  // T  red
  setbkcolor(7);
  setcolor(4);
  line(350,20,380,18);
  line(350,20,345,40);
  line(380,18,385,40);
  line(345,40,355,40);
  line(385,40,375,40);
  line(355,40,355,82);
  line(375,40,375,80);
  line(355,82,375,80);
  setfillstyle(1,4) ;
  floodfill(360,30,4);

   // T yellow
  setcolor(14);
  line(353,23,377,21);
  line(353,23,348,37);
  line(377,21,382,37);
  line(348,37,358,37);
  line(382,37,372,37);
  line(358,37,358,78);
  line(372,37,372,77);
  line(358,78,372,77);
  setfillstyle(1,14) ;
  floodfill(360,30,14);

   //O red
   setcolor(4);
   arc(411,56,0,360,28);
   setfillstyle(1,4) ;
   floodfill(411,56,4);
   setcolor(7);
   arc(417,56,0,360,14);
   setfillstyle(1,7) ;
   floodfill(417,56,7);

    //O yellow
   setcolor(14);
   arc(411,56,0,360,22);
   arc(417,56,0,360,16);
   setfillstyle(1,14) ;
   floodfill(390,56,14);

   //E red
   setcolor(4);
   line(446,28,477,30);
   line(446,28,438,87);
   line(438,87,469,89);
   line(477,30,479,42);
   line(469,89,471,77);
   line(479,42,459,40);
   line(471,77,453,75);
   line(459,40,457,52);
   line(453,75,455,63);
   line(457,52,467,53);
   line(455,63,467,64);
   line(467,53,467,64);
   setfillstyle(1,4) ;
  floodfill(456,51,4);

   //E yellow
   setcolor(14);
   line(449,31,474,33);
   line(449,31,441,84);
   line(441,84,466,86);
   line(474,33,476,42);
   line(466,86,469,77);
   line(476,42,456,40);
   line(469,77,450,75);
   line(456,40,454,52);
   line(450,75,452,63);
   line(454,52,464,53);
   line(452,63,464,64);
   line(464,53,464,64);
   setfillstyle(1,14) ;
   floodfill(452,32,14);

   // computer mode and local mode
    setcolor(5);
 setfillstyle(1,5);
 rectangle(100,180,250,280);
 rectangle(380,180,530,280);
 floodfill(175,230,5);
 floodfill(455,230,5);

 setcolor(13);
 setfillstyle(1,13);
 rectangle(105,185,245,275);
 rectangle(385,185,525,275);
 floodfill(190,225,13);
 floodfill(470,225,13);

   setcolor(11);
   settextstyle(0,0,2);
   outtextxy(113,200,"computer");
   outtextxy(140,230,"mode");
   outtextxy(413,200,"local");
   outtextxy(423,230,"mode");

 while(!kbhit())
 {
   setcolor(9);
   settextstyle(0,0,2);
   outtextxy(100,350,"-> press  C  for computer mode");
   setcolor(9);
   settextstyle(0,0,2);
   outtextxy(100,390,"-> press  L  for local mode");
   delay(800);

   setcolor(7);
   settextstyle(0,0,2);
   outtextxy(100,350,"-> press  C  for computer mode");
   setcolor(7);
   settextstyle(0,0,2);
   outtextxy(100,390,"-> press  L  for local mode");
   delay(800);
 }


char ch=getch();


}



   void page_2()
{
  setbkcolor(7);
     //circle random
     setcolor(13);
     setfillstyle(7,13);
     circle(95,85,50);
     floodfill(95,85,13);
     setcolor(7);
     setfillstyle(1,7);
     circle(95,85,40);
     floodfill(95,85,7);

     //cross random
     setcolor(6);
     line(370,370,380,370);         //right
     line(300,450,310,450);
     line(300,450,335,410);
     line(340,405,370,370);
     line(380,370,345,410);
     line(310,450,340,415);

     line(300,370,310,370);   //left
     line(370,450,380,450);
     line(300,370,335,410);
     line(340,415,370,450);
     line(310,370,340,405);
     line(345,410,380,450);

       setfillstyle(10,6);       //coloring of cross
       floodfill(340,410,6);

       //cross random
     setcolor(10);
     line(600,120,610,120);         //right
     line(530,200,540,200);
     line(530,200,565,160);
     line(570,155,600,120);
     line(610,120,575,160);
     line(540,200,570,165);

     line(530,120,540,120);   //left
     line(600,200,610,200);
     line(530,120,565,160);
     line(570,165,600,200);
     line(540,120,570,155);
     line(575,160,610,200);

       setfillstyle(2,10);       //coloring of cross
       floodfill(570,160,10);

      //circle random
     setcolor(15);
     setfillstyle(1,15);
     circle(65,345,30);
     floodfill(65,345,15);
     setcolor(7);
     setfillstyle(1,7);
     circle(65,345,25);
     floodfill(65,345,7);


      //circle random
     setcolor(14);
     setfillstyle(11,14);
     circle(585,325,20);
     floodfill(585,325,14);

     setcolor(7);
     setfillstyle(1,7);
     circle(585,325,15);
     floodfill(585,325,7);

      //circle random
     setcolor(4);
     setfillstyle(1,4);
     circle(335,185,10);
     floodfill(335,185,4);

     setcolor(7);
     setfillstyle(1,7);
     circle(335,185,7);
     floodfill(335,185,7);

     setcolor(9);
      settextstyle(1,0,7);
      outtextxy(100,220," LOADING");



   // loading purpose
     for(int i=0;i<3;i++)
   {
      setcolor(9);
      settextstyle(1,0,7);
      sound(2000);
      delay(100);
      outtextxy(360,220," .");
      nosound();
      delay(350);

      setcolor(9);
      settextstyle(1,0,7);
      sound(2200);
      delay(100);
      outtextxy(360,220," ..");
      nosound();
      delay(350);

      setcolor(9);
      settextstyle(1,0,7);
      sound(2400);
      delay(100);
      outtextxy(360,220," ...");
      nosound();
      delay(350);

 /*     setcolor(9);
      settextstyle(1,0,7);
      sound(2600);
      delay(100);
      outtextxy(360,220," ....");
      nosound();
      delay(350);

      setcolor(9);
      settextstyle(1,0,7);
      sound(2800);
      delay(100);
      outtextxy(360,220," .....");
      nosound();
      delay(350);
   */
      setcolor(7);
      settextstyle(1,0,7);
      outtextxy(360,220," ...");
      delay(100);

   }
}
  void circle(int m)
 {
	int check=0;
       switch(m)   // for player 1
     {
	case 1:
		     //checking ....
		      check=checkfun(1);
		      if(check==0)
		       {
			 //circle 1
			 setcolor(14);
			 setfillstyle(1,14);
			 circle(200,150,40);
			 floodfill(200,150,14);

			 setcolor(7);
			 circle(200,150,30);
			 setfillstyle(1,7);
			 floodfill(200,150,7);
		       }
		       a[0][0]=1;
		       user=2;
		       turn++;
		       d=result(1);    // checking if players wins or not
		       if(d==1)
		       {
			     while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		       }
		      break;
	 case 2:
		   //checking ....
		      check=checkfun(2);
		      if(check==0)
		       {
			 //circle 2
			 setcolor(14);
			 setfillstyle(1,14);
			 circle(300,150,40);
			 floodfill(300,150,14);

			 setcolor(7);
			 circle(300,150,30);
			 setfillstyle(1,7);
			 floodfill(300,150,7);
		       }
		       a[0][1]=1;
		       user=2;
		       turn++;
		       d=result(2);           // checking if players wins or not
		       if(d==1)
		       {
			   while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		       }
		       break;
      case 3:
		   //checking ....
		      check=checkfun(3);
		      if(check==0)
		       {
			 //circle 3
			 setcolor(14);
			 setfillstyle(1,14);
			 circle(400,150,40);
			 floodfill(400,150,14);

			 setcolor(7);
			 circle(400,150,30);
			 setfillstyle(1,7);
			 floodfill(400,150,7);
		       }
		       a[0][2]=1;
		       user=2;
		       turn++;
		      if(a[0][0]==a[0][1]&a[0][0]==a[0][2])  //lining 123
			 {
			   setcolor(5);
			   rectangle(198,148,402,152);
			   setfillstyle(0,5);
			   floodfill(300,150,5);
			    sound(9000);
			    delay(200);
			    nosound();
			 }

		       d=result(3);      // checking if players wins or not
		       if(d==1)
		       {
			    while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		       }
		       break;
       case 4:
		   //checking ....
		      check=checkfun(4);
		      if(check==0)
		       {
			 //circle 4
			 setcolor(14);
			 setfillstyle(1,14);
			 circle(200,250,40);
			 floodfill(200,250,14);

			 setcolor(7);
			 circle(200,250,30);
			 setfillstyle(1,7);
			 floodfill(200,250,7);
		       }
		       a[1][0]=1;
		       user=2;
		       turn++;
		       d=result(4);                // checking if players wins or not
		       if(d==1)
		       {
			    while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			   exit(1);
		       }
		       break;

      case 5:
		   //checking ....
		      check=checkfun(5);
		      if(check==0)
		       {
			 //circle 5
			 setcolor(14);
			 setfillstyle(1,14);
			 circle(300,250,40);
			 floodfill(300,250,14);

			 setcolor(7);
			 circle(300,250,30);
			 setfillstyle(1,7);
			 floodfill(300,250,7);
		       }
		       a[1][1]=1;
		       user=2;
		       turn++;
		       d=result(5);               // checking if players wins or not
		       if(d==1)
		       {
			      while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		       }
		       break;
    case 6:
		   //checking ....
		      check=checkfun(6);
		      if(check==0)
		       {
			 //circle 6
			 setcolor(14);
			 setfillstyle(1,14);
			 circle(400,250,40);
			 floodfill(400,250,14);

			 setcolor(7);
			 circle(400,250,30);
			 setfillstyle(1,7);
			 floodfill(400,250,7);
		       }
		       a[1][2]=1;
		       user=2;
		       turn++;
			if(a[1][0]==a[1][1]&a[1][0]==a[1][2])  //lining 456
			 {
			   setcolor(4);
			   rectangle(198,248,402,252);
			   setfillstyle(0,4);
			   floodfill(300,250,4);
			    sound(9000);
			    delay(200);
			    nosound();
			 }
		       d=result(6);         // checking if players wins or not
		       if(d==1)
		       {
			  while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);

		       }
		       break;
    case 7:
		   //checking ....
		      check=checkfun(7);
		      if(check==0)
		       {
			 //circle 7
			 setcolor(14);
			 setfillstyle(1,14);
			 circle(200,350,40);
			 floodfill(200,350,14);

			 setcolor(7);
			 circle(200,350,30);
			 setfillstyle(1,7);
			 floodfill(200,350,7);
		       }
		       a[2][0]=1;
		       user=2;
		       turn++;
			 if(a[0][0]==a[1][0]&a[0][0]==a[2][0])  //lining 137
			 {
			   setcolor(4);
			   rectangle(198,148,202,352);
			   setfillstyle(0,4);
			   floodfill(200,250,4);
			    sound(9000);
			    delay(200);
			    nosound();
			 }
			 if(a[0][2]==a[1][1]&&a[0][2]==a[2][0]) // lining 357
			 {
			    setcolor(4);
			   line(400,147,200,347);
			   line(400,152,200,352);
			   line(400,147,400,152);
			   line(200,347,200,352);
			   setfillstyle(0,4);
			   floodfill(300,250,4);
			    sound(9000);
			    delay(200);
			    nosound();

			 }


		       d=result(7);                // checking if players wins or not
		       if(d==1)
		       {
			  while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		       }
		       break;
       case 8:
		   //checking ....
		      check=checkfun(8);
		      if(check==0)
		       {
			 //circle 8
			 setcolor(14);
			 setfillstyle(1,14);
			 circle(300,350,40);
			 floodfill(300,350,14);

			 setcolor(7);
			 circle(300,350,30);
			 setfillstyle(1,7);
			 floodfill(300,350,7);
		       }
		       a[2][1]=1;
		       user=2;
		       turn++;
		       if(a[0][1]==a[1][1]&a[0][1]==a[2][1])  //lining 258
			 {
			   setcolor(4);
			   rectangle(298,148,302,352);
			   setfillstyle(0,4);
			   floodfill(300,250,4);
			    sound(9000);
			    delay(200);
			    nosound();
			 }

		       d=result(8);             // checking if players wins or not
		       if(d==1)
		       {
			  while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		       }
		       break;
       case 9:
		   //checking ....
		      check=checkfun(9);
		      if(check==0)
		       {
			 //circle 9
			 setcolor(14);
			 setfillstyle(1,14);
			 circle(400,350,40);
			 floodfill(400,350,14);

			 setcolor(7);
			 circle(400,350,30);
			 setfillstyle(1,7);
			 floodfill(400,350,7);
		       }
		       a[2][2]=1;
		       user=2;
		       turn++;
			  if(a[0][2]==a[1][2]&a[0][2]==a[2][2])  //lining 369
			 {
			   setcolor(4);
			   rectangle(398,148,402,352);
			   setfillstyle(0,4);
			   floodfill(400,250,4);
			   sound(9000);
			    delay(200);
			    nosound();
			 }
		    if(a[2][0]==a[2][1]&a[2][0]==a[2][2])  //lining 789
			 {
			   setcolor(4);
			   rectangle(198,348,402,352);
			   setfillstyle(0,4);
			   floodfill(300,350,4);
			    sound(9000);
			    delay(200);
			    nosound();
			 }
		     if(a[0][0]==a[1][1]&&a[0][0]==a[2][2]) // lining 159
			 {
			    setcolor(4);
			   line(200,147,400,347);
			   line(200,152,400,352);
			   line(200,147,200,152);
			   line(400,347,400,352);
			   setfillstyle(0,4);
			   floodfill(300,250,4);
			    sound(9000);
			    delay(200);
			    nosound();

			 }

		       d=result(9);                // checking if players wins or not
		       if(d==1)
		       {
			    while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 1");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		       }
		       break;
    default:
	 printf("wrong input");
   }
 }

  void cross(int n)
 {
       int check=0;
	switch(n)   // for player 2
     {
	case 1:
		    //checking....
		  check=checkfun(1);
		  if(check==0)
		  {
		     //cross 1
		     setcolor(2);
		     line(230,110,240,110);  //right
		     line(160,190,170,190);
		     line(160,190,195,150);
		     line(200,145,230,110);
		     line(240,110,205,150);
		     line(170,190,200,155);

		     line(160,110,170,110);  //left
		     line(230,190,240,190);
		     line(160,110,195,150);
		     line(200,155,230,190);
		     line(170,110,200,145);
		     line(205,150,240,190);

		     setfillstyle(1,2);       //coloring of cross
		     floodfill(200,150,2);
		 }
		 a[0][0]=2;
		 user=1;
		 turn++;
		 d=result(1);                // checking if players wins or not
		 if(d==1)
		 {
		      while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
						exit(1);
		 }
		 break;
      case 2:
		    //checking....
		  check=checkfun(2);
		  if(check==0)
		  {
		     //cross 2
		     setcolor(2);
		     line(330,110,340,110);  //right
		     line(260,190,270,190);
		     line(260,190,295,150);
		     line(300,145,330,110);
		     line(340,110,305,150);
		     line(270,190,300,155);

		     line(260,110,270,110);  //left
		     line(330,190,340,190);
		     line(260,110,295,150);
		     line(300,155,330,190);
		     line(270,110,300,145);
		     line(305,150,340,190);

		     setfillstyle(1,2);       //coloring of cross
		     floodfill(300,150,2);
		   }
		 a[0][1]=2;
		 user=1;
		 turn++;
		 d=result(2);      // checking if players wins or not
		 if(d==1)
		 {
		     while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		 }
		 break;
      case 3:
		      //checking....
		  check=checkfun(3);
		  if(check==0)
		  {
		      //cross 3
		      setcolor(2);
		      line(430,110,440,110);  //right
		      line(360,190,370,190);
		      line(360,190,395,150);
		      line(400,145,430,110);
		      line(440,110,405,150);
		      line(370,190,400,155);

		      line(360,110,370,110);  //left
		      line(430,190,440,190);
		      line(360,110,395,150);
		      line(400,155,430,190);
		      line(370,110,400,145);
		      line(405,150,440,190);

		      setfillstyle(1,2);       //coloring of cross
		      floodfill(400,150,2);
		    }
		 a[0][2]=2;
		 user=1;
		 turn++;
			 if(a[0][0]==a[0][1]&a[0][0]==a[0][2])  //lining 123
			 {
			   setcolor(4);
			   rectangle(195,148,405,152);
			   setfillstyle(0,4);
			   floodfill(300,150,4);
			    sound(9000);
			    delay(200);
			    nosound();
			 }
		 d=result(3);                   // checking if players wins or not
		 if(d==1)
		 {
		    while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		 }
		 break;
       case 4:
		      //checking....
		  check=checkfun(4);
		  if(check==0)
		  {
		      //cross 4
		      setcolor(2);
		      line(230,210,240,210);  //right
		      line(160,290,170,290);
		      line(160,290,195,250);
		      line(200,245,230,210);
		      line(240,210,205,250);
		      line(170,290,200,255);

		      line(160,210,170,210);  //left
		      line(230,290,240,290);
		      line(160,210,195,250);
		      line(200,255,230,290);
		      line(170,210,200,245);
		      line(205,250,240,290);

		      setfillstyle(1,2);       //coloring of cross
		      floodfill(200,250,2);
		   }
		 a[1][0]=2;
		 user=1;
		 turn++;
		 d=result(4);         // checking if players wins or not
		 if(d==1)
		 {
		    while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		 }
		 break;
      case 5:
		   //checking....
		  check=checkfun(5);
		  if(check==0)
		  {

	       //cross 5
		    setcolor(2);
		    line(330,210,340,210);  //right
		    line(260,290,270,290);
		    line(260,290,295,250);
		    line(300,245,330,210);
		    line(340,210,305,250);
		    line(270,290,300,255);

		    line(260,210,270,210);  //left
		    line(330,290,340,290);
		    line(260,210,295,250);
		    line(300,255,330,290);
		    line(270,210,300,245);
		    line(305,250,340,290);

		    setfillstyle(1,2);       //coloring of cross
		    floodfill(300,250,2);
		 }
		 a[1][1]=2;
		 user=1;
		 turn++;
		 d=result(5);             // checking if players wins or not
		 if(d==1)
		 {
		     while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		 }
		 break;
    case 6:

		   //checking....
		  check=checkfun(6);
		  if(check==0)
		  {	     //cross 6
		     setcolor(2);
		     line(430,210,440,210);  //right
		     line(360,290,370,290);
		     line(360,290,395,250);
		     line(400,245,430,210);
		     line(440,210,405,250);
		     line(370,290,400,255);

		     line(360,210,370,210);  //left
		     line(430,290,440,290);
		     line(360,210,395,250);
		     line(400,255,430,290);
		     line(370,210,400,245);
		     line(405,250,440,290);

		     setfillstyle(1,2);       //coloring of cross
		     floodfill(400,250,2);
		 }
		 a[1][2]=2;
		 user=1;
		 turn++;
			  if(a[1][0]==a[1][1]&a[1][0]==a[1][2])  //lining 456
			 {
			   setcolor(4);
			   rectangle(195,248,405,252);
			   setfillstyle(0,4);
			   floodfill(300,250,4);
			    sound(9000);
			    delay(200);
			    nosound();
			 }

		d=result(6);                // checking if players wins or not
		 if(d==1)
		 {
		    while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		 }
		 break;
    case 7:
		     //checking....
		  check=checkfun(7);
		  if(check==0)
		  {
		      //cross 7
		      setcolor(2);
		      line(230,310,240,310);  //right
		      line(160,390,170,390);
		      line(160,390,195,350);
		      line(200,345,230,310);
		      line(240,310,205,350);
		      line(170,390,200,355);

		      line(160,310,170,310);  //left
		      line(230,390,240,390);
		      line(160,310,195,350);
		      line(200,355,230,390);
		      line(170,310,200,345);
		      line(205,350,240,390);

		      setfillstyle(1,2);       //coloring of cross
		      floodfill(200,350,2);
		  }
		 a[2][0]=2;
		 user=1;
		 turn++;
			 if(a[0][0]==a[1][0]&a[0][0]==a[2][0])  //lining 147
			 {
			   setcolor(4);
			   rectangle(198,145,202,355);
			   setfillstyle(0,4);
			   floodfill(200,250,4);
			    sound(9000);
			    delay(200);
			    nosound();
			 }
			 if(a[0][2]==a[1][1]&&a[0][2]==a[2][0]) // lining 357
			 {
			    setcolor(4);
			   line(400,147,200,347);
			   line(400,152,200,352);
			   line(400,147,400,152);
			   line(200,347,200,352);
			   setfillstyle(0,4);
			   floodfill(300,250,4);
			    sound(9000);
			    delay(200);
			    nosound();

			 }


		 d=result(7);                      // checking if players wins or not
		 if(d==1)
		 {
		   while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		 }
		 break;
       case 8:
		     //checking....
		  check=checkfun(8);
		  if(check==0)
		  {
		   //cross 8
		    setcolor(2);
		    line(330,310,340,310);  //right
		    line(260,390,270,390);
		    line(260,390,295,350);
		    line(300,345,330,310);
		    line(340,310,305,350);
		    line(270,390,300,355);

		    line(260,310,270,310);  //left
		    line(330,390,340,390);
		    line(260,310,295,350);
		    line(300,355,330,390);
		    line(270,310,300,345);
		    line(305,350,340,390);

		    setfillstyle(1,2);       //coloring of cross
		    floodfill(300,350,2);
		  }
		 a[2][1]=2;
		 user=1;
		 turn++;
			  if(a[0][1]==a[1][1]&a[0][1]==a[2][1])  //lining 158
			 {
			   setcolor(4);
			   rectangle(298,145,302,355);
			   setfillstyle(0,4);
			   floodfill(300,250,4);
			    sound(9000);
			    delay(200);
			    nosound();
			 }

		 d=result(8);                     // checking if players wins or not
		 if(d==1)
		 {
		     while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		 }
		 break;
       case 9:
		     //checking....
		  check=checkfun(9);
		  if(check==0)
		  {
		 //cross 9
		      setcolor(2);
		      line(430,310,440,310);  //right
		      line(360,390,370,390);
		      line(360,390,395,350);
		      line(400,345,430,310);
		      line(440,310,405,350);
		      line(370,390,400,355);

		      line(360,310,370,310);  //left
		      line(430,390,440,390);
		      line(360,310,395,350);
		      line(400,355,430,390);
		      line(370,310,400,345);
		      line(405,350,440,390);

		      setfillstyle(1,2);       //coloring of cross
		      floodfill(400,350,2);
		   }
		 a[2][2]=2;
		 user=1;
		 turn++;
			  if(a[0][2]==a[1][2]&a[0][2]==a[2][2])  //lining 169
			 {
			   setcolor(4);
			   rectangle(398,145,402,355);
			   setfillstyle(0,4);
			   floodfill(400,250,4);
			   sound(9000);
			    delay(200);
			    nosound();
			 }
		    if(a[2][0]==a[2][1]&a[2][0]==a[2][2])  //lining 789
			 {
			   setcolor(4);
			   rectangle(195,348,405,352);
			   setfillstyle(0,4);
			   floodfill(300,350,4);
			    sound(9000);
			    delay(200);
			    nosound();
			 }
		     if(a[0][0]==a[1][1]&&a[0][0]==a[2][2]) // lining 159
			 {
			    setcolor(4);
			   line(200,147,400,347);
			   line(200,152,400,352);
			   line(200,147,200,152);
			   line(400,347,400,352);
			   setfillstyle(0,4);
			   floodfill(300,250,4);
			    sound(9000);
			    delay(200);
			    nosound();

			 }


		 d=result(9);                      // checking if players wins or not
		 if(d==1)
		 {
			while(!kbhit())
			  {
			      setcolor(5);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);

			      setcolor(13);
			      settextstyle(0,0,2);
			      outtextxy(480,180,"PLAYER 2");
			      outtextxy(480,200,"WINS");
			      delay(500);
			  }
			  exit(1);
		 }
		 break;
    default:
	 printf("wrong input");
   }
 }
 int checkfun(int num)
 {
   switch(num)
   {
    case 1:
	   if(a[0][0]!=0)
	    return 1;
	    else
	     return 0;
    case 2:
	   if(a[0][1]!=0)
	    return 1;
	    else
	     return 0;
    case 3:
	   if(a[0][2]!=0)
	    return 1;
	    else
	     return 0;

    case 4:
	   if(a[1][0]!=0)
	    return 1;
	    else
	     return 0;
    case 5:
	   if(a[1][1]!=0)
	    return 1;
	    else
	     return 0;
    case 6:
	   if(a[1][2]!=0)
	    return 1;
	    else
	     return 0;
    case 7:
	   if(a[2][0]!=0)
	    return 1;
	    else
	     return 0;
    case 8:
	   if(a[2][1]!=0)
	    return 1;
	    else
	     return 0;
    case 9:
	   if(a[2][2]!=0)
	    return 1;
	    else
	     return 0;
     default:
     printf("wrong input");


   }
  return 0;
 }

 int result(int n)
 {
   switch(n)
   {
      case 1:
	     if(a[0][0]==a[0][1]&a[0][0]==a[0][2]|a[0][0]==a[1][0]&a[0][0]==a[2][0]|a[0][0]==a[1][1]&a[0][0]==a[2][2])
	      return 1;
	      else
	      return 0;
      case 2:
	     if(a[0][1]==a[0][0]&a[0][1]==a[0][2]|a[0][1]==a[1][1]&a[0][1]==a[2][1])
	      return 1;
	      else
	      return 0;
      case 3:
	     if(a[0][2]==a[0][1]&a[0][2]==a[0][0]|a[0][2]==a[1][1]&a[0][2]==a[2][0]|a[0][2]==a[1][2]&a[0][2]==a[2][2])
	      return 1;
	      else
	      return 0;
      case 4:
	     if(a[1][0]==a[2][0]&a[1][0]==a[0][0]|a[1][0]==a[1][1]&a[1][0]==a[1][2])
	      return 1;
	      else
	      return 0;
      case 5:
	     if(a[1][1]==a[2][2]&a[1][1]==a[0][0]|a[1][1]==a[2][0]&a[1][1]==a[0][2]|a[1][1]==a[1][2]&a[1][1]==a[1][0]|a[1][1]==a[2][1]&a[1][1]==a[0][1])
	     return 1;
	      else
	     return 0;
      case 6:
	     if(a[1][2]==a[1][1]&a[1][2]==a[1][0]|a[1][2]==a[0][2]&a[1][2]==a[2][2])
	      return 1;
	      else
	      return 0;
      case 7:
	     if(a[2][0]==a[1][0]&a[2][0]==a[0][0]|a[2][0]==a[2][1]&a[2][0]==a[2][2]|a[2][0]==a[1][1]&a[2][0]==a[0][2])
	      return 1;
	      else
	      return 0;
      case 8:
	     if(a[2][1]==a[2][0]&a[2][1]==a[2][2]|a[2][1]==a[1][1]&a[2][1]==a[0][1])
	      return 1;
	      else
	      return 0;
      case 9:
	     if(a[2][2]==a[1][1]&a[2][2]==a[0][0]|a[2][2]==a[2][1]&a[2][2]==a[2][0]|a[2][2]==a[1][2]&a[2][2]==a[0][2])
	      return 1;
	      else
	      return 0;
      default:
      printf("wrong input");

   }

  return 0;
 }

 void smile()
 {
   sound(5000);
   delay(2000);
   nosound();
   midx=getmaxx()/2;
    midy=getmaxy()/2;
    setcolor(14);
    circle(midx,midy,100);    //big circle
    setfillstyle(1,14);
    floodfill(midx,midy,14);
    setcolor(0);
    /*nose*/
   line(midx,midy,midx+15,midy+15);
   line(midx,midy,midx-15,midy+15);
   line(midx+15,midy+15,midx-15,midy+15);
   setfillstyle(1,0); floodfill(midx,midy+7,0);
   setcolor(0);
    circle(midx-40,midy-40,15);
    setfillstyle(1,0);
    floodfill(midx-40,midy-40,0);
     circle(midx+40,midy-40,15);
     setfillstyle(1,0);
     floodfill(midx+40,midy-40,0);
     setfillstyle(1,0);
   pieslice(midx,midy+40,180,360,45);
   delay(2000);
      setcolor(4);

  outtextxy(150,390,"THANKS FOR PLAYING..");
  delay(1000);

 }


 void wins1()
 {
    setbkcolor(11);
    delay(100);
    setbkcolor(0);
    delay(200);
    setbkcolor(11);
    delay(100);
    setcolor(4);
   settextstyle(0,0,2);
   outtextxy(40,40,"PLAYER 1 WINS ....");

 }
 void wins2()
 {
     setbkcolor(11);
    delay(100);
    setbkcolor(0);
    delay(200);
    setbkcolor(11);
    delay(100);
   setcolor(4);
   settextstyle(0,0,2);
   outtextxy(40,40,"PLAYER 2 WINS...");

 }

   void intro()
 {
   for(int i=1;i<5;i++)
     {
      setbkcolor(7);
      setcolor(i);
      settextstyle(0,0,2);
  //    sound(500);
    //  delay(100);
      outtextxy(25,60,"WELCOME TO THE GAME OF TIC TAC TOE...");
      setcolor(i);
      rectangle(25,80,610,82);
      setfillstyle(1,i);
      floodfill(317,81,i);
      outtextxy(25,370," BY:-");

	 for(int j=0;j<2;j++)
    {
	 j;
       for(int i=100;i<2000;i=i+450)
	  {
	     sound(i);
	     delay(10);
	  }
	 nosound();

   }
      setcolor(i+1);
      setfillstyle(1,(i+1));
      outtextxy(105,390," HARMANJOT SINGH SURI");
      rectangle(120,410,440,412);
      floodfill(330,411,(i+1));

      outtextxy(250,425,"BTECH CSE 3rd SEMESTER ");
      rectangle(250,445,600,447);
      floodfill(375,446,(i+1));
      delay(500);
     }
    // nosound();
}
 void boxes()
 {
   setcolor(13);
    //boxes  and lines
    rectangle(250,150,400,300);
    setfillstyle(1,5);
    floodfill(325,225,13);
    delay(100);
    setcolor(13);
  line(300,150,300,300);
  line(350,150,350,300);
  line(250,200,400,200);
  line(250,250,400,250);
  delay(250);


  //colors....

  setcolor(14);           // 1  ++9 circle
    sound(150);
  delay(100);
  nosound();

  setfillstyle(1,14);
  circle(375,275,20);
  floodfill(375,275,14);
  setcolor(5);
  circle(375,275,15);
  setfillstyle(1,5);
  floodfill(375,275,5);
  delay(600);

     //right
  setcolor(11);	    // 2 ++5 cross
  sound(250);
  delay(100);
  nosound();
  line(304,240,319,225);
  line(310,240,322,228);
  line(304,240,310,240);
  line(322,222,334,210);
  line(325,225,340,210);
  line(334,210,340,210);
  //left
  line(304,210,310,210);
  line(334,240,340,240);
  line(304,210,319,225);
  line(310,210,322,222);
  line(322,228,334,240);
  line(325,225,340,240);
  setfillstyle(1,11);
  floodfill(322,225,11);
  delay(600);


  setcolor(14);   // 3 ++1circle
  sound(350);
  delay(100);
  nosound();

  setfillstyle(1,14);
  circle(275,175,20);
  floodfill(275,175,14);
  setcolor(5);
  circle(275,175,15);
  setfillstyle(1,5);
  floodfill(275,175,5);
  delay(600);


    //right
  setcolor(11);	    // 4 ++3 cross
  sound(450);
  delay(100);
  nosound();
  line(354,190,369,175);
  line(360,190,372,178);
  line(354,190,360,190);
  line(372,172,384,160);
  line(375,175,390,160);
  line(384,160,390,160);
  //left
  line(354,160,360,160);
  line(384,190,390,190);
  line(354,160,369,175);
  line(360,160,372,172);
  line(372,178,384,190);
  line(375,175,390,190);
  setfillstyle(1,11);
  floodfill(372,175,11);
  delay(600);

		      // 5 ++7 circle
  setcolor(14);
  sound(550);
  delay(100);
  nosound();
  setfillstyle(1,14);
  circle(275,275,20);
  floodfill(275,275,14);

  setcolor(5);
  circle(275,275,15);
  setfillstyle(1,5);
  floodfill(275,275,5);
  delay(600);

  //right
  setcolor(11);            // 6 ++4 cross
  sound(650);
  delay(100);
  nosound();
  line(254,240,269,225);
  line(260,240,272,228);
  line(254,240,260,240);
  line(272,222,284,210);
  line(275,225,290,210);
  line(284,210,290,210);
  //left
  line(254,210,260,210);
  line(284,240,290,240);
  line(254,210,269,225);
  line(260,210,272,222);
  line(272,228,284,240);
  line(275,225,290,240);
  setfillstyle(1,11);
  floodfill(272,225,11);
  delay(600);

	       // 7 ++8 circle
  setcolor(14);
  sound(750);
  delay(100);
  nosound();
  setfillstyle(1,14);
  circle(325,275,20);
  floodfill(325,275,14);

  setcolor(5);
  circle(325,275,15);
  setfillstyle(1,5);
  floodfill(325,275,5);
  delay(600);

  //intersecting line
  setcolor(12);
  sound(9000);
  delay(200);
  line(275,275,375,275);
  nosound();

 }
 void computer()
 {
      if(a[1][1]==0)
       cross(5);
       else
       {
		if(a[0][0]==0)
		 {
		  cross(1);
		 }
		if(a[0][2]==0)
		{
		  cross(3);
		}

		if(a[2][0]==0)
		{
		 cross(7);
		}

		 if(a[2][2]==0)
		{
		 cross(9);
		}

       }

      //defencing mode
     // first row
   if(a[0][0]==1&&a[0][1]==1)  // first 2 fill with circle
   {
    if(a[0][2]!=2)
    {
      cross(3);
    }
   }
   if(a[0][0]==1&&a[0][2]==1)  // first and last fill with circle
   {
    if(a[0][1]!=2)
    {
      cross(2);
    }
   }

   if(a[0][1]==1&&a[0][2]==1)  // last 2 fill with circle
   {
    if(a[0][0]!=2)
    {
      cross(1);
    }
   }

   // second row
    if(a[1][0]==1&&a[1][1]==1)  // first 2 fill with circle
   {
    if(a[1][2]!=2)
    {
      cross(6);
    }
   }

   if(a[1][0]==1&&a[1][2]==1)  // first and lst  fill with circle
   {
    if(a[1][1]!=2)
    {
      cross(5);
    }
   }

   if(a[1][1]==1&&a[1][2]==1)  // last 2 fill with circle
   {
    if(a[1][0]!=2)
    {
      cross(4);
    }
   }

   //third row
   if(a[2][0]==1&&a[2][1]==1)  // first 2 fill with circle
   {
    if(a[2][2]!=2)
    {
      cross(9);
    }
   }

   if(a[2][0]==1&&a[2][2]==1)  // first last fill with circle
   {
    if(a[2][1]!=2)
    {
      cross(8);
    }
   }

   if(a[2][1]==1&&a[2][2]==1)  // last 2 fill with circle
   {
    if(a[2][0]!=2)
    {
      cross(7);
    }
   }
   //first colm
   if(a[0][0]==1&&a[1][0]==1)  // first 2 fill with circle
   {
    if(a[2][0]!=2)
    {
      cross(7);
    }
   }

   if(a[0][0]==1&&a[2][0]==1)  // first last fill with circle
   {
    if(a[1][0]!=2)
    {
      cross(4);
    }
   }

   if(a[1][0]==1&&a[2][0]==1)  // last 2 fill with circle
   {
    if(a[0][0]!=2)
    {
      cross(1);
    }
   }

   // 2 clm
   if(a[0][1]==1&&a[1][1]==1)  // first 2 fill with circle
   {
    if(a[2][1]!=2)
    {
      cross(8);
    }
   }

   if(a[0][1]==1&&a[2][1]==1)  // first last fill with circle
   {
    if(a[1][1]!=2)
    {
      cross(5);
    }
   }

   if(a[1][1]==1&&a[2][1]==1)  // last 2 fill with circle
   {
    if(a[0][1]!=2)
    {
      cross(2);
    }
   }

   // 3 clm
   if(a[0][2]==1&&a[1][2]==1)  // first 2 fill with circle
   {
    if(a[2][2]!=2)
    {
      cross(9);
    }
   }

   if(a[0][2]==1&&a[2][2]==1)  // first last fill with circle
   {
    if(a[1][2]!=2)
    {
      cross(6);
    }
   }

   if(a[1][2]==1&&a[2][2]==1)  // last 2 fill with circle
   {
    if(a[0][2]!=2)
    {
      cross(3);
    }
   }

   //left diagonal
   if(a[0][0]==1&&a[1][1]==1)  // first 2 fill with circle
   {
    if(a[2][2]!=2)
    {
      cross(9);
    }
   }
   if(a[0][0]==1&&a[2][2]==1)  // first last  fill with circle
   {
    if(a[1][1]!=2)
    {
      cross(5);
    }
   }
   if(a[1][1]==1&&a[2][2]==1)  // last 2 fill with circle
   {
    if(a[0][0]!=2)
    {
      cross(1);
    }
   }

   // right diagonal
   if(a[0][2]==1&&a[1][1]==1)  // first 2 fill with circle
   {
    if(a[2][0]!=2)
    {
      cross(7);
    }
   }

   if(a[0][2]==1&&a[2][0]==1)  // first last fill with circle
   {
    if(a[1][1]!=2)
    {
      cross(5);
    }
   }
   if(a[1][1]==1&&a[2][0]==1)  // last 2 fill with circle
   {
    if(a[0][2]!=2)
    {
      cross(3);
    }
   }

   // attacking mode
      // first row
   if(a[0][0]==2&&a[0][1]==2)  // first 2 fill with circle
   {
    if(a[0][2]==0)
    {
      cross(3);
    }
   }
   if(a[0][0]==2&&a[0][2]==2)  // first and last fill with circle
   {
    if(a[0][1]==0)
    {
      cross(2);
    }
   }

   if(a[0][1]==2&&a[0][2]==2)  // last 2 fill with circle
   {
    if(a[0][0]==0)
    {
      cross(1);
    }
   }

   // second row
    if(a[1][0]==2&&a[1][1]==2)  // first 2 fill with circle
   {
    if(a[1][2]==0)
    {
      cross(6);
    }
   }

   if(a[1][0]==2&&a[1][2]==2)  // first and lst  fill with circle
   {
    if(a[1][1]==0)
    {
      cross(5);
    }
   }

   if(a[1][1]==2&&a[1][2]==2)  // last 2 fill with circle
   {
    if(a[1][0]==0)
    {
      cross(4);
    }
   }

   //third row
   if(a[2][0]==2&&a[2][1]==2)  // first 2 fill with circle
   {
    if(a[2][2]==0)
    {
      cross(9);
    }
   }

   if(a[2][0]==2&&a[2][2]==2)  // first last fill with circle
   {
    if(a[2][1]==0)
    {
      cross(8);
    }
   }

   if(a[2][1]==2&&a[2][2]==2)  // last 2 fill with circle
   {
    if(a[2][0]==0)
    {
      cross(7);
    }
   }
   //first colm
   if(a[0][0]==2&&a[1][0]==2)  // first 2 fill with circle
   {
    if(a[2][0]==0)
    {
      cross(7);
    }
   }

   if(a[0][0]==2&&a[2][0]==2)  // first last fill with circle
   {
    if(a[1][0]==0)
    {
      cross(4);
    }
   }

   if(a[1][0]==2&&a[2][0]==2)  // last 2 fill with circle
   {
    if(a[0][0]==0)
    {
      cross(1);
    }
   }

   // 2 clm
   if(a[0][1]==2&&a[1][1]==2)  // first 2 fill with circle
   {
    if(a[2][1]==0)
    {
      cross(8);
    }
   }

   if(a[0][1]==2&&a[2][1]==2)  // first last fill with circle
   {
    if(a[1][1]==0)
    {
      cross(5);
    }
   }

   if(a[1][1]==2&&a[2][1]==2)  // last 2 fill with circle
   {
    if(a[0][1]==0)
    {
      cross(2);
    }
   }

   // 3 clm
   if(a[0][2]==2&&a[1][2]==2)  // first 2 fill with circle
   {
    if(a[2][2]==0)
    {
      cross(9);
    }
   }

   if(a[0][2]==2&&a[2][2]==2)  // first last fill with circle
   {
    if(a[1][2]==0)
    {
      cross(6);
    }
   }

   if(a[1][2]==2&&a[2][2]==2)  // last 2 fill with circle
   {
    if(a[0][2]==0)
    {
      cross(3);
    }
   }

   //left diagonal
   if(a[0][0]==2&&a[1][1]==2)  // first 2 fill with circle
   {
    if(a[2][2]==0)
    {
      cross(9);
    }
   }
   if(a[0][0]==2&&a[2][2]==2)  // first last  fill with circle
   {
    if(a[1][1]==0)
    {
      cross(5);
    }
   }
   if(a[1][1]==2&&a[2][2]==2)  // last 2 fill with circle
   {
    if(a[0][0]==0)
    {
      cross(1);
    }
   }

   // right diagonal
   if(a[0][2]==2&&a[1][1]==2)  // first 2 fill with circle
   {
    if(a[2][0]==0)
    {
      cross(7);
    }
   }

   if(a[0][2]==2&&a[2][0]==2)  // first last fill with circle
   {
    if(a[1][1]==0)
    {
      cross(5);
    }
   }
   if(a[1][1]==2&&a[2][0]==2)  // last 2 fill with circle
   {
    if(a[0][2]==0)
    {
      cross(3);
    }
   }

 }
 void a321()
{
 setbkcolor(7);
 setcolor(3);
 line(319,0,319,479);
 line(0,239,639,239);
 setcolor(15);
 circle(319,239,180);
 circle(319,239,170);
 setcolor(11);
 settextstyle(0,0,18);
 sound(1900);
 delay(100);
 nosound();

 outtextxy(265,175,"3");
 delay(1000);
 setbkcolor(WHITE);
 delay(30);
 cleardevice();

 setbkcolor(7);
 setcolor(3);
 line(319,0,319,479);
 line(0,239,639,239);
 setcolor(15);
 circle(319,239,180);
 circle(319,239,170);
 setcolor(11);
 settextstyle(0,0,18);
 sound(1900);
 delay(100);
 nosound();

 outtextxy(265,175,"2");
 delay(1000);
 setbkcolor(WHITE);
 delay(30);

 cleardevice();

 setbkcolor(7);
 setcolor(3);
 line(319,0,319,479);
 line(0,239,639,239);
 setcolor(15);
 circle(319,239,180);
 circle(319,239,170);
 setcolor(11);
 settextstyle(0,0,18);
 sound(1900);
 delay(100);
 nosound();

 outtextxy(265,175,"1");
 delay(1000);
 setbkcolor(WHITE);
 delay(30);

 cleardevice();


}