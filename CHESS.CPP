#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
struct TOKEN
{
 int type;    /*  TYPE--> (1) KING   (2) QUEEN    (3) BISHOP
			  (4) KNIGHT (5) ELEPHANT (6) SOLDIER  */

 int type_no; /* example:-  elephant_1===1,  elephant_2===2   */

 int p_position[3];  /* present location of the token */

 int r_position[3]; /* required position of token  */

 int colour;  /*   COLOUR--> (1) GREEN
			    (2) RED   */

 int status;  /*  STATUS--> (0) DEAD
			    (1) ALIVE  */
} ;
TOKEN token[32];
void chess_board()
{

 /* boundary of screen */
 line (0,0,0,479);
 line (0,0,639,0);
 line (639,0,639,479);
 line (0,479,639,479);

 /* boundary of chess */
 line (160,80,480,80);
 line (160,80,160,400);
 line (160,400,480,400);
 line (480,400,480,80);

 /* blocks of first line of chess */
 bar (160,80,200,120);
 bar (240,80,280,120);
 bar (320,80,360,120);
 bar (400,80,440,120);

 /* blocks of second line of chess */
 bar (200,120,240,160);
 bar (280,120,320,160);
 bar (360,120,400,160);
 bar (440,120,480,160);

 /* blocks of third line of chess */
 bar (160,160,200,200);
 bar (240,160,280,200);
 bar (320,160,360,200);
 bar (400,160,440,200);

 /* blocks of fourth line of chess */
 bar (200,200,240,240);
 bar (280,200,320,240);
 bar (360,200,400,240);
 bar (440,200,480,240);

 /* blocks of fifth line of chess */
 bar (160,240,200,280);
 bar (240,240,280,280);
 bar (320,240,360,280);
 bar (400,240,440,280);

 /* blocks of sixth line of chess */
 bar (200,280,240,320);
 bar (280,280,320,320);
 bar (360,280,400,320);
 bar (440,280,480,320);

 /* blocks of seventh line of chess */
 bar (160,320,200,360);
 bar (240,320,280,360);
 bar (320,320,360,360);
 bar (400,320,440,360);

 /* blocks of last line of chess */
 bar (200,360,240,400);
 bar (280,360,320,400);
 bar (360,360,400,400);
 bar (440,360,480,400);

}
void soldier_1 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[0].type = 6 ;
 token[0].type_no = 1 ;
 token[0].p_position[0] = x1 ;
 token[0].p_position[1] = y1 ;
 token[0].p_position[2] = x2 ;
 token[0].p_position[3] = y2 ;
 token[0].colour = 1 ;
 token[0].status = k ;

 if (token[0].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
 else ;

}
void soldier_2 (int x1,int y1,int x2,int y2,int k=1)
{
  /* token info. */
 token[1].type = 6 ;
 token[1].type_no = 2 ;
 token[1].p_position[0] = x1 ;
 token[1].p_position[1] = y1 ;
 token[1].p_position[2] = x2 ;
 token[1].p_position[3] = y2 ;
 token[1].colour = 1 ;
 token[1].status = k ;

 if (token[1].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
  fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_3 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[2].type = 6 ;
 token[2].type_no = 3 ;
 token[2].p_position[0] = x1 ;
 token[2].p_position[1] = y1 ;
 token[2].p_position[2] = x2 ;
 token[2].p_position[3] = y2 ;
 token[2].colour = 1 ;
 token[2].status = k ;

 if (token[2].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_4 (int x1,int y1,int x2,int y2,int k=1)
{

 /* token info. */
 token[3].type = 6 ;
 token[3].type_no = 4 ;
 token[3].p_position[0] = x1 ;
 token[3].p_position[1] = y1 ;
 token[3].p_position[2] = x2 ;
 token[3].p_position[3] = y2 ;
 token[3].colour = 1 ;
 token[3].status = k ;

 if (token[3].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_5 (int x1,int y1,int x2,int y2,int k=1)
{

 /* token info. */
 token[4].type = 6 ;
 token[4].type_no = 5 ;
 token[4].p_position[0] = x1 ;
 token[4].p_position[1] = y1 ;
 token[4].p_position[2] = x2 ;
 token[4].p_position[3] = y2 ;
 token[4].colour = 1 ;
 token[4].status = k ;

 if (token[4].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_6 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[5].type = 6 ;
 token[5].type_no = 6 ;
 token[5].p_position[0] = x1 ;
 token[5].p_position[1] = y1 ;
 token[5].p_position[2] = x2 ;
 token[5].p_position[3] = y2 ;
 token[5].colour = 1 ;
 token[5].status = k ;

 if (token[5].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_7 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[6].type = 6 ;
 token[6].type_no = 7 ;
 token[6].p_position[0] = x1 ;
 token[6].p_position[1] = y1 ;
 token[6].p_position[2] = x2 ;
 token[6].p_position[3] = y2 ;
 token[6].colour = 1 ;
 token[6].status = k ;

 if (token[6].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_8 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[7].type = 6 ;
 token[7].type_no = 8 ;
 token[7].p_position[0] = x1 ;
 token[7].p_position[1] = y1 ;
 token[7].p_position[2] = x2 ;
 token[7].p_position[3] = y2 ;
 token[7].colour = 1 ;
 token[7].status = k ;

 if (token[7].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_9 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[8].type = 6 ;
 token[8].type_no = 1 ;
 token[8].p_position[0] = x1 ;
 token[8].p_position[1] = y1 ;
 token[8].p_position[2] = x2 ;
 token[8].p_position[3] = y2 ;
 token[8].colour = 2 ;
 token[8].status = k ;

 if (token[7].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_10 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[9].type = 6 ;
 token[9].type_no = 2 ;
 token[9].p_position[0] = x1 ;
 token[9].p_position[1] = y1 ;
 token[9].p_position[2] = x2 ;
 token[9].p_position[3] = y2 ;
 token[9].colour = 2 ;
 token[9].status = k ;

 if (token[9].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_11 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[10].type = 6 ;
 token[10].type_no = 3 ;
 token[10].p_position[0] = x1 ;
 token[10].p_position[1] = y1 ;
 token[10].p_position[2] = x2 ;
 token[10].p_position[3] = y2 ;
 token[10].colour = 2 ;
 token[10].status = k ;

 if (token[10].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_12 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[11].type = 6 ;
 token[11].type_no = 1 ;
 token[11].p_position[0] = x1 ;
 token[11].p_position[1] = y1 ;
 token[11].p_position[2] = x2 ;
 token[11].p_position[3] = y2 ;
 token[11].colour = 4 ;
 token[11].status = k ;

 if (token[11].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_13 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[12].type = 6 ;
 token[12].type_no = 5 ;
 token[12].p_position[0] = x1 ;
 token[12].p_position[1] = y1 ;
 token[12].p_position[2] = x2 ;
 token[12].p_position[3] = y2 ;
 token[12].colour = 2 ;
 token[12].status = k ;

 if (token[12].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_14 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[13].type = 6 ;
 token[13].type_no = 6 ;
 token[13].p_position[0] = x1 ;
 token[13].p_position[1] = y1 ;
 token[13].p_position[2] = x2 ;
 token[13].p_position[3] = y2 ;
 token[13].colour = 2 ;
 token[13].status = k ;

 if (token[13].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_15 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[14].type = 6 ;
 token[14].type_no = 7 ;
 token[14].p_position[0] = x1 ;
 token[14].p_position[1] = y1 ;
 token[14].p_position[2] = x2 ;
 token[14].p_position[3] = y2 ;
 token[14].colour = 2 ;
 token[14].status = k ;

 if (token[14].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void soldier_16 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[15].type = 6 ;
 token[15].type_no = 8 ;
 token[15].p_position[0] = x1 ;
 token[15].p_position[1] = y1 ;
 token[15].p_position[2] = x2 ;
 token[15].p_position[3] = y2 ;
 token[15].colour = 2 ;
 token[15].status = k ;

 if (token[15].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of soldier */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of soldier */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);

 /* circle at the top of soldier */
 fillellipse(x1+20,y1+11,2,2);
 }
}
void elephant_1 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[16].type = 5 ;
 token[16].type_no = 1 ;
 token[16].p_position[0] = x1 ;
 token[16].p_position[1] = y1 ;
 token[16].p_position[2] = x2 ;
 token[16].p_position[3] = y2 ;
 token[16].colour = 1 ;
 token[16].status = k ;

 if (token[16].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of elephant */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of elephant */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* vertical small crown like structure at the top of the elephant */
 bar (x1+11,y1+10,x1+16,y1+15);
 bar (x1+18,y1+10,x2-18,y1+15);
 bar (x2-16,y1+10,x2-11,y1+15);

 /* bar b/w crown like structutres and the vertical beam */
 bar (x1+10,y2-13,x2-11,y2-13);
 }
}
void elephant_2 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[17].type = 5 ;
 token[17].type_no = 2 ;
 token[17].p_position[0] = x1 ;
 token[17].p_position[1] = y1 ;
 token[17].p_position[2] = x2 ;
 token[17].p_position[3] = y2 ;
 token[17].colour = 1 ;
 token[17].status = k ;

 if (token[17].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of elephant */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of elephant */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* vertical small crown like structure at the top of the elephant */
 bar (x1+11,y1+10,x1+16,y1+15);
 bar (x1+18,y1+10,x2-18,y1+15);
 bar (x2-16,y1+10,x2-11,y1+15);

 /* bar b/w crown like structutres and the vertical beam */

 bar (x1+10,y2-13,x2-11,y2-13);
 }
}
void elephant_3 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[18].type = 5 ;
 token[18].type_no = 3 ;
 token[18].p_position[0] = x1 ;
 token[18].p_position[1] = y1 ;
 token[18].p_position[2] = x2 ;
 token[18].p_position[3] = y2 ;
 token[18].colour = 2 ;
 token[18].status = k ;

 if (token[18].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of elephant */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of elephant */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* vertical small crown like structure at the top of the elephant */
 bar (x1+11,y1+10,x1+16,y1+15);
 bar (x1+18,y1+10,x2-18,y1+15);
 bar (x2-16,y1+10,x2-11,y1+15);

 /* bar b/w crown like structutres and the vertical beam */

 bar (x1+10,y2-13,x2-11,y2-13);
 }
}
void elephant_4 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[19].type = 5 ;
 token[19].type_no = 4 ;
 token[19].p_position[0] = x1 ;
 token[19].p_position[1] = y1 ;
 token[19].p_position[2] = x2 ;
 token[19].p_position[3] = y2 ;
 token[19].colour = 2 ;
 token[19].status = k ;

 if (token[19].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of elephant */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of elephant */
 bar (x1+17,y1+15,x2-17,y2-15);

 /* vertical small crown like structure at the top of the elephant */
 bar (x1+11,y1+10,x1+16,y1+15);
 bar (x1+18,y1+10,x2-18,y1+15);
 bar (x2-16,y1+10,x2-11,y1+15);

 /* bar b/w crown like structutres and the vertical beam */

 bar (x1+10,y2-13,x2-11,y2-13);
 }
}
void bishop_1 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[20].type = 4 ;
 token[20].type_no = 1 ;
 token[20].p_position[0] = x1 ;
 token[20].p_position[1] = y1 ;
 token[20].p_position[2] = x2 ;
 token[20].p_position[3] = y2 ;
 token[20].colour = 1 ;
 token[20].status = k ;

 if (token[20].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of bishop */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of bishop */
 bar (x1+17,y1+19,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y1+17,x2-11,y1+19);

 /* bigger circle */
 fillellipse(x1+20,y1+12,3,5);
 }
}
void bishop_2 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[21].type = 4 ;
 token[21].type_no = 2 ;
 token[21].p_position[0] = x1 ;
 token[21].p_position[1] = y1 ;
 token[21].p_position[2] = x2 ;
 token[21].p_position[3] = y2 ;
 token[21].colour = 1 ;
 token[21].status = k ;

 if (token[21].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);

 /* base of bishop */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of bishop */
 bar (x1+17,y1+19,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y1+17,x2-11,y1+19);

 /* bigger circle */
 fillellipse(x1+20,y1+12,3,5);
 }
}
void bishop_3 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[22].type = 4 ;
 token[22].type_no = 3 ;
 token[22].p_position[0] = x1 ;
 token[22].p_position[1] = y1 ;
 token[22].p_position[2] = x2 ;
 token[22].p_position[3] = y2 ;
 token[22].colour = 2 ;
 token[22].status = k ;

 if (token[22].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of bishop */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of bishop */
 bar (x1+17,y1+19,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y1+17,x2-11,y1+19);

 /* bigger circle */
 fillellipse(x1+20,y1+12,3,5);
 }
}
void bishop_4 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[23].type = 4 ;
 token[23].type_no = 4 ;
 token[23].p_position[0] = x1 ;
 token[23].p_position[1] = y1 ;
 token[23].p_position[2] = x2 ;
 token[23].p_position[3] = y2 ;
 token[23].colour = 2 ;
 token[23].status = k ;

 if (token[23].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);

 /* base of bishop */
 bar (x1+10,y2-15,x2-10,y2-10);

 /* vertical beam of bishop */
 bar (x1+17,y1+19,x2-17,y2-15);

 /* bar b/w  circle and the vertical beam */
 bar (x1+10,y1+17,x2-11,y1+19);

 /* bigger circle */
 fillellipse(x1+20,y1+12,3,5);
 }
}
void knight_1 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[24].type = 3 ;
 token[24].type_no = 1 ;
 token[24].p_position[0] = x1 ;
 token[24].p_position[1] = y1 ;
 token[24].p_position[2] = x2 ;
 token[24].p_position[3] = y2 ;
 token[24].colour = 1 ;
 token[24].status = k ;

 if (token[24].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);
 int poly[25];

 poly[0] = x1+9;
 poly[1] = y2-13;

 poly[2] = x1+7;
 poly[3] = y1+10;

 poly[4] = x1+9;
 poly[5] = y1+8;

 poly[6] = x1+10;
 poly[7] = y1+10;

 poly[8] = x2-10;
 poly[9] = y1+10;

 poly[10] = x2-10;
 poly[11] = y1+13;

 poly[12] = x2-14;
 poly[13] = y1+13;

 poly[14] = x2-14;
 poly[15] = y1+14;

 poly[16] = x2-10;
 poly[17] = y1+14;

 poly[18] = x2-14;
 poly[19] = y1+17;

 poly[20] = x2-16;
 poly[21] = y1+17;

 poly[22] = x2-10;
 poly[23] = y2-13;

 poly[24] = x1+9;
 poly[25] = y2-13;

 bar (x1+5,y2-12,x2-5,y2-10);

 fillpoly(13,poly);
 }
}
void knight_2 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[25].type = 3 ;
 token[25].type_no = 2 ;
 token[25].p_position[0] = x1 ;
 token[25].p_position[1] = y1 ;
 token[25].p_position[2] = x2 ;
 token[25].p_position[3] = y2 ;
 token[25].colour = 1 ;
 token[25].status = k ;

 if (token[25].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);
 int poly[25];

 poly[0] = x1+9;
 poly[1] = y2-13;

 poly[2] = x1+7;
 poly[3] = y1+10;

 poly[4] = x1+9;
 poly[5] = y1+8;

 poly[6] = x1+10;
 poly[7] = y1+10;

 poly[8] = x2-10;
 poly[9] = y1+10;

 poly[10] = x2-10;
 poly[11] = y1+13;

 poly[12] = x2-14;
 poly[13] = y1+13;

 poly[14] = x2-14;
 poly[15] = y1+14;

 poly[16] = x2-10;
 poly[17] = y1+14;

 poly[18] = x2-14;
 poly[19] = y1+17;

 poly[20] = x2-16;
 poly[21] = y1+17;

 poly[22] = x2-10;
 poly[23] = y2-13;

 poly[24] = x1+9;
 poly[25] = y2-13;

 bar (x1+5,y2-12,x2-5,y2-10);

 fillpoly(13,poly);
 }
}
void knight_3 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[26].type = 3 ;
 token[26].type_no = 3 ;
 token[26].p_position[0] = x1 ;
 token[26].p_position[1] = y1 ;
 token[26].p_position[2] = x2 ;
 token[26].p_position[3] = y2 ;
 token[26].colour = 2 ;
 token[26].status = k ;

 if (token[26].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);
 int poly[25];

 poly[0] = x1+9;
 poly[1] = y2-13;

 poly[2] = x1+7;
 poly[3] = y1+10;

 poly[4] = x1+9;
 poly[5] = y1+8;

 poly[6] = x1+10;
 poly[7] = y1+10;

 poly[8] = x2-10;
 poly[9] = y1+10;

 poly[10] = x2-10;
 poly[11] = y1+13;

 poly[12] = x2-14;
 poly[13] = y1+13;

 poly[14] = x2-14;
 poly[15] = y1+14;

 poly[16] = x2-10;
 poly[17] = y1+14;

 poly[18] = x2-14;
 poly[19] = y1+17;

 poly[20] = x2-16;
 poly[21] = y1+17;

 poly[22] = x2-10;
 poly[23] = y2-13;

 poly[24] = x1+9;
 poly[25] = y2-13;

 bar (x1+5,y2-12,x2-5,y2-10);

 fillpoly(13,poly);
 }
}
void knight_4 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[27].type = 3 ;
 token[27].type_no = 4 ;
 token[27].p_position[0] = x1 ;
 token[27].p_position[1] = y1 ;
 token[27].p_position[2] = x2 ;
 token[27].p_position[3] = y2 ;
 token[27].colour = 2 ;
 token[27].status = k ;

 if (token[27].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);
 int poly[25];

 poly[0] = x1+9;
 poly[1] = y2-13;

 poly[2] = x1+7;
 poly[3] = y1+10;

 poly[4] = x1+9;
 poly[5] = y1+8;

 poly[6] = x1+10;
 poly[7] = y1+10;

 poly[8] = x2-10;
 poly[9] = y1+10;

 poly[10] = x2-10;
 poly[11] = y1+13;

 poly[12] = x2-14;
 poly[13] = y1+13;

 poly[14] = x2-14;
 poly[15] = y1+14;

 poly[16] = x2-10;
 poly[17] = y1+14;

 poly[18] = x2-14;
 poly[19] = y1+17;

 poly[20] = x2-16;
 poly[21] = y1+17;

 poly[22] = x2-10;
 poly[23] = y2-13;

 poly[24] = x1+9;
 poly[25] = y2-13;

 bar (x1+5,y2-12,x2-5,y2-10);

 fillpoly(13,poly);
 }
}
void queen_1 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[28].type = 2 ;
 token[28].type_no = 1 ;
 token[28].p_position[0] = x1 ;
 token[28].p_position[1] = y1 ;
 token[28].p_position[2] = x2 ;
 token[28].p_position[3] = y2 ;
 token[28].colour = 1 ;
 token[28].status = k ;

 if (token[28].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);
 int poly[41];

 poly[0] = x1+5;
 poly[1] = y2-5;

 poly[2] = x1+5;
 poly[3] = y2-7;

 poly[4] = x1+7;
 poly[5] = y2-7;

 poly[6] = x1+10;
 poly[7] = y2-10;

 poly[8] = x1+15;
 poly[9] = y2-10;

 poly[10] = x1+15;
 poly[11] = y1+16;

 poly[12] = x1+10;
 poly[13] = y1+16;

 poly[14] = x1+10;
 poly[15] = y1+14;

 poly[16] = x1+15;
 poly[17] = y1+14;

 poly[18] = x1+12;
 poly[19] = y1+10;

 poly[20] = x2-12;
 poly[21] = y1+10;

 poly[22] = x2-15;
 poly[23] = y1+14;

 poly[24] = x2-10;
 poly[25] = y1+14;

 poly[26] = x2-10;
 poly[27] = y1+16;

 poly[28] = x2-15;
 poly[29] = y1+16;

 poly[30] = x2-15;
 poly[31] = y2-10;

 poly[32] = x2-10;
 poly[33] = y2-10;

 poly[34] = x2-7;
 poly[35] = y2-7;

 poly[36] = x2-5;
 poly[37] = y2-7;

 poly[38] = x2-5;
 poly[39] = y2-5;

 poly[40] = x1+5;
 poly[41] = y2-5;

 fillpoly(21,poly);

 int square[9];

 square[0] = x1+7+12;
 square[1] = y1+10;

 square[2] = x1+4+12;
 square[3] = y1+7;

 square[4] = x1+8+12;
 square[5] = y1+3;

 square[6] = x1+11+12;
 square[7] = y1+7;

 square[8] = x1+8+12;
 square[9] = y1+10;

 fillpoly(5,square);
 }
}
void queen_2 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[29].type = 2 ;
 token[29].type_no = 2 ;
 token[29].p_position[0] = x1 ;
 token[29].p_position[1] = y1 ;
 token[29].p_position[2] = x2 ;
 token[29].p_position[3] = y2 ;
 token[29].colour = 2 ;
 token[29].status = k ;

 if (token[29].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);
 int poly[41];

 poly[0] = x1+5;
 poly[1] = y2-5;

 poly[2] = x1+5;
 poly[3] = y2-7;

 poly[4] = x1+7;
 poly[5] = y2-7;

 poly[6] = x1+10;
 poly[7] = y2-10;

 poly[8] = x1+15;
 poly[9] = y2-10;

 poly[10] = x1+15;
 poly[11] = y1+16;

 poly[12] = x1+10;
 poly[13] = y1+16;

 poly[14] = x1+10;
 poly[15] = y1+14;

 poly[16] = x1+15;
 poly[17] = y1+14;

 poly[18] = x1+12;
 poly[19] = y1+10;

 poly[20] = x2-12;
 poly[21] = y1+10;

 poly[22] = x2-15;
 poly[23] = y1+14;

 poly[24] = x2-10;
 poly[25] = y1+14;

 poly[26] = x2-10;
 poly[27] = y1+16;

 poly[28] = x2-15;
 poly[29] = y1+16;

 poly[30] = x2-15;
 poly[31] = y2-10;

 poly[32] = x2-10;
 poly[33] = y2-10;

 poly[34] = x2-7;
 poly[35] = y2-7;

 poly[36] = x2-5;
 poly[37] = y2-7;

 poly[38] = x2-5;
 poly[39] = y2-5;

 poly[40] = x1+5;
 poly[41] = y2-5;

 fillpoly(21,poly);

 int square[9];

 square[0] = x1+7+12;
 square[1] = y1+10;

 square[2] = x1+4+12;
 square[3] = y1+7;

 square[4] = x1+8+12;
 square[5] = y1+3;

 square[6] = x1+11+12;
 square[7] = y1+7;

 square[8] = x1+8+12;
 square[9] = y1+10;

 fillpoly(5,square);
 }
}
void king_1 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[30].type = 1 ;
 token[30].type_no = 1 ;
 token[30].p_position[0] = x1 ;
 token[30].p_position[1] = y1 ;
 token[30].p_position[2] = x2 ;
 token[30].p_position[3] = y2 ;
 token[30].colour = 1 ;
 token[30].status = k ;

 if (token[30].status == 1)
 {
 setfillstyle(SOLID_FILL,GREEN);
 int poly[41];

 poly[0] = x1+5;
 poly[1] = y2-5;

 poly[2] = x1+5;
 poly[3] = y2-7;

 poly[4] = x1+7;
 poly[5] = y2-7;

 poly[6] = x1+10;
 poly[7] = y2-10;

 poly[8] = x1+15;
 poly[9] = y2-10;

 poly[10] = x1+15;
 poly[11] = y1+16;

 poly[12] = x1+10;
 poly[13] = y1+16;

 poly[14] = x1+10;
 poly[15] = y1+14;

 poly[16] = x1+15;
 poly[17] = y1+14;

 poly[18] = x1+12;
 poly[19] = y1+10;

 poly[20] = x2-12;
 poly[21] = y1+10;

 poly[22] = x2-15;
 poly[23] = y1+14;

 poly[24] = x2-10;
 poly[25] = y1+14;

 poly[26] = x2-10;
 poly[27] = y1+16;

 poly[28] = x2-15;
 poly[29] = y1+16;

 poly[30] = x2-15;
 poly[31] = y2-10;

 poly[32] = x2-10;
 poly[33] = y2-10;

 poly[34] = x2-7;
 poly[35] = y2-7;

 poly[36] = x2-5;
 poly[37] = y2-7;

 poly[38] = x2-5;
 poly[39] = y2-5;

 poly[40] = x1+5;
 poly[41] = y2-5;

 fillpoly(21,poly);

 int cross[23];

 cross[0] = x1+12+7;
 cross[1] = y1+11;

 cross[2] = x1+12+7;
 cross[3] = y1+8;

 cross[4] = x1+12+4;
 cross[5] = y1+8;

 cross[6] = x1+12+4;
 cross[7] = y1+6;

 cross[8] = x1+12+7;
 cross[9] = y1+6;

 cross[10] = x1+12+7;
 cross[11] = y1+3;

 cross[12] = x1+12+9;
 cross[13] = y1+3;

 cross[14] = x1+12+9;
 cross[15] = y1+6;

 cross[16] = x1+12+12;
 cross[17] = y1+6;

 cross[18] = x1+12+12;
 cross[19] = y1+8;

 cross[20] = x1+12+9;
 cross[21] = y1+8;

 cross[22] = x1+12+9;
 cross[23] = y1+11;

 cross[24] = x1+12+7;
 cross[25] = y1+11;

 fillpoly  (13,cross);
 }
}
void king_2 (int x1,int y1,int x2,int y2,int k=1)
{
 /* token info. */
 token[31].type = 1 ;
 token[31].type_no = 2 ;
 token[31].p_position[0] = x1 ;
 token[31].p_position[1] = y1 ;
 token[31].p_position[2] = x2 ;
 token[31].p_position[3] = y2 ;
 token[31].colour = 2 ;
 token[31].status = k ;

 if (token[30].status == 1)
 {
 setfillstyle(SOLID_FILL,RED);
 int poly[41];

 poly[0] = x1+5;
 poly[1] = y2-5;

 poly[2] = x1+5;
 poly[3] = y2-7;

 poly[4] = x1+7;
 poly[5] = y2-7;

 poly[6] = x1+10;
 poly[7] = y2-10;

 poly[8] = x1+15;
 poly[9] = y2-10;

 poly[10] = x1+15;
 poly[11] = y1+16;

 poly[12] = x1+10;
 poly[13] = y1+16;

 poly[14] = x1+10;
 poly[15] = y1+14;

 poly[16] = x1+15;
 poly[17] = y1+14;

 poly[18] = x1+12;
 poly[19] = y1+10;

 poly[20] = x2-12;
 poly[21] = y1+10;

 poly[22] = x2-15;
 poly[23] = y1+14;

 poly[24] = x2-10;
 poly[25] = y1+14;

 poly[26] = x2-10;
 poly[27] = y1+16;

 poly[28] = x2-15;
 poly[29] = y1+16;

 poly[30] = x2-15;
 poly[31] = y2-10;

 poly[32] = x2-10;
 poly[33] = y2-10;

 poly[34] = x2-7;
 poly[35] = y2-7;

 poly[36] = x2-5;
 poly[37] = y2-7;

 poly[38] = x2-5;
 poly[39] = y2-5;

 poly[40] = x1+5;
 poly[41] = y2-5;

 fillpoly(21,poly);

 int cross[23];

 cross[0] = x1+12+7;
 cross[1] = y1+11;

 cross[2] = x1+12+7;
 cross[3] = y1+8;

 cross[4] = x1+12+4;
 cross[5] = y1+8;

 cross[6] = x1+12+4;
 cross[7] = y1+6;

 cross[8] = x1+12+7;
 cross[9] = y1+6;

 cross[10] = x1+12+7;
 cross[11] = y1+3;

 cross[12] = x1+12+9;
 cross[13] = y1+3;

 cross[14] = x1+12+9;
 cross[15] = y1+6;

 cross[16] = x1+12+12;
 cross[17] = y1+6;

 cross[18] = x1+12+12;
 cross[19] = y1+8;

 cross[20] = x1+12+9;
 cross[21] = y1+8;

 cross[22] = x1+12+9;
 cross[23] = y1+11;

 cross[24] = x1+12+7;
 cross[25] = y1+11;

 fillpoly  (13,cross);
 }
}
void death_column ()
{
 line(0,400,639,400);
 line(0,440,639,440);
 line(40,400,40,480);
 line(80,400,80,480);
 line(120,400,120,480);
 line(160,400,160,480);
 line(200,400,200,480);
 line(240,400,240,480);
 line(280,400,280,480);
 line(320,400,320,480);
 line(360,400,360,480);
 line(400,400,400,480);
 line(440,400,440,480);
 line(480,400,480,480);
 line(520,400,520,480);
 line(560,400,560,480);
 line(600,400,600,480);
}
void start_screen ()
{
 chess_board();
 soldier_1(160,320,200,360);
 soldier_2(200,320,240,360);
 soldier_3(240,320,280,360);
 soldier_4(280,320,320,360);
 soldier_5(320,320,360,360);
 soldier_6(360,320,400,360);
 soldier_7(400,320,440,360);
 soldier_8(440,320,480,360);
 soldier_9(160,120,200,160);
 soldier_10(200,120,240,160);
 soldier_11(240,120,280,160);
 soldier_12(280,120,320,160);
 soldier_13(320,120,360,160);
 soldier_14(360,120,400,160);
 soldier_15(400,120,440,160);
 soldier_16(440,120,480,160);
 elephant_1(160,360,200,400);
 elephant_2(440,360,480,400);
 elephant_3(160,80,200,120);
 elephant_4(440,80,480,120);
 knight_1(200,360,240,400);
 knight_2(400,360,440,400);
 knight_3(200,80,240,120);
 knight_4(400,80,440,120);
 bishop_1(240,360,280,400);
 bishop_2(360,360,400,400);
 bishop_3(240,80,280,120);
 bishop_4(360,80,400,120);
 king_1(280,360,320,400);
 king_2(320,80,360,120);
 queen_1(320,360,360,400);
 queen_2(280,80,320,120);
 death_column();
}
void show_req_token (int pos[])
{
 if (pos[0]==token[0].p_position[0] && pos[1]==token[0].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_1(x1,y1,x2,y2);
 }
 else if (pos[0]==token[1].p_position[0] && pos[1]==token[1].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_2(x1,y1,x2,y2);
 }
 else if (pos[0]==token[2].p_position[0] && pos[1]==token[2].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_3(x1,y1,x2,y2);
 }
 else if (pos[0]==token[3].p_position[0] && pos[1]==token[3].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_4(x1,y1,x2,y2);
 }
 else if (pos[0]==token[4].p_position[0] && pos[1]==token[4].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_5(x1,y1,x2,y2);
 }
 else if (pos[0]==token[5].p_position[0] && pos[1]==token[5].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_6(x1,y1,x2,y2);
 }
 else if (pos[0]==token[6].p_position[0] && pos[1]==token[6].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_7(x1,y1,x2,y2);
 }
 else if (pos[0]==token[7].p_position[0] && pos[1]==token[7].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_8(x1,y1,x2,y2);
 }
 else if (pos[0]==token[8].p_position[0] && pos[1]==token[8].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_9(x1,y1,x2,y2);
 }
 else if (pos[0]==token[9].p_position[0] && pos[1]==token[9].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_10(x1,y1,x2,y2);
 }
 else if (pos[0]==token[10].p_position[0] && pos[1]==token[10].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_11(x1,y1,x2,y2);
 }
 else if (pos[0]==token[11].p_position[0] && pos[1]==token[11].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_12(x1,y1,x2,y2);
 }
 else if (pos[0]==token[12].p_position[0] && pos[1]==token[12].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_13(x1,y1,x2,y2);
 }
 else if (pos[0]==token[13].p_position[0] && pos[1]==token[13].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_14(x1,y1,x2,y2);
 }
 else if (pos[0]==token[14].p_position[0] && pos[1]==token[14].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_15(x1,y1,x2,y2);
 }
 else if (pos[0]==token[15].p_position[0] && pos[1]==token[15].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  soldier_16(x1,y1,x2,y2);
 }
 else if (pos[0]==token[16].p_position[0] && pos[1]==token[16].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  elephant_1(x1,y1,x2,y2);
 }
 else if (pos[0]==token[17].p_position[0] && pos[1]==token[17].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  elephant_2(x1,y1,x2,y2);
 }
 else if (pos[0]==token[18].p_position[0] && pos[1]==token[18].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  elephant_3(x1,y1,x2,y2);
 }
 else if (pos[0]==token[19].p_position[0] && pos[1]==token[19].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  elephant_4(x1,y1,x2,y2);
 }
 else if (pos[0]==token[20].p_position[0] && pos[1]==token[20].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  bishop_1(x1,y1,x2,y2);
 }
 else if (pos[0]==token[21].p_position[0] && pos[1]==token[21].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  bishop_2(x1,y1,x2,y2);
 }
 else if (pos[0]==token[22].p_position[0] && pos[1]==token[22].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  bishop_3(x1,y1,x2,y2);
 }
 else if (pos[0]==token[23].p_position[0] && pos[1]==token[23].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  bishop_4(x1,y1,x2,y2);
 }
 else if (pos[0]==token[24].p_position[0] && pos[1]==token[24].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  knight_1(x1,y1,x2,y2);
 }
 else if (pos[0]==token[25].p_position[0] && pos[1]==token[25].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  knight_2(x1,y1,x2,y2);
 }
 else if (pos[0]==token[26].p_position[0] && pos[1]==token[26].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  knight_3(x1,y1,x2,y2);
 }
 else if (pos[0]==token[27].p_position[0] && pos[1]==token[27].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  knight_4(x1,y1,x2,y2);

 }
 else if (pos[0]==token[28].p_position[0] && pos[1]==token[28].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  queen_1(x1,y1,x2,y2);
 }
 else if (pos[0]==token[29].p_position[0] && pos[1]==token[29].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  queen_2(x1,y1,x2,y2);
 }
 else if (pos[0]==token[30].p_position[0] && pos[1]==token[30].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  king_1(x1,y1,x2,y2);
 }
 else if (pos[0]==token[31].p_position[0] && pos[1]==token[31].p_position[1])
 {
  int x1,y1,x2,y2;
  x1=pos[0];
  y1=pos[1];
  x2=pos[2];
  y2=pos[3];
  king_2(x1,y1,x2,y2);
 }





}
int main()
{
 clrscr();
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
 settextstyle(GOTHIC_FONT,HORIZ_DIR,12);  /*    "DEFAULT_FONT",
						"TRIPLEX_FONT",
						"SMALL_FONT",
						"SANS_SERIF_FONT",
						"GOTHIC_FONT" */
 setcolor(CGA_GREEN);
 setfillstyle(CLOSE_DOT_FILL,CGA_YELLOW);  /* "EMPTY_FILL",
					      "SOLID_FILL",
					      "LINE_FILL",
					      "LTSLASH_FILL",
					      "SLASH_FILL",
					      "BKSLASH_FILL",
					      "LTBKSLASH_FILL",
					      "HATCH_FILL",
					      "XHATCH_FILL",
					      "INTERLEAVE_FILL",
					      "WIDE_DOT_FILL",
					      "CLOSE_DOT_FILL",
					      "USER_FILL"        */
 outtextxy(180,120,"Chess");
 int x=100;
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(120,330,"Loading......");
 for(int i=0;i<=4;i++)
 {
  delay(5);
  bar3d(x,350,x,370,10,10);
  x++;
 }
 delay(15);
 closegraph();
 initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
 start_screen();
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
 outtextxy(270,0,"Chess");
 setcolor(GREEN);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 outtextxy(50,80,"GREEN");
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(5,115,"TOKEN:- ");
 gotoxy(11,8);                              /* x=0-80, y=0-25 */
 cin>>token[32].type;
 int k=0;
					elephant_2(240,240,280,280);

 setcolor(CGA_GREEN);
 if (token[32].type==6)
 {
  if (token[0].status==1)
   {
    int x1,y1;
    x1=token[0].p_position[0]+18;
    y1=token[0].p_position[1]+18;
    outtextxy(x1,y1,"1");
    ++k;
   }
  if (token[1].status==1)
   {
    int x1,y1;
    x1=token[1].p_position[0]+18;
    y1=token[1].p_position[1]+18;
    if (k==0)
     {
      outtextxy(x1,y1,"1");
      ++k;
     }
    else if (k==1)
     {
      outtextxy(x1,y1,"2");
      ++k;
     }
   }
  if (token[2].status==1)
   {
    int x1,y1;
    x1=token[2].p_position[0]+18;
    y1=token[2].p_position[1]+18;
    if (k==0)
     {
      outtextxy(x1,y1,"1");
      ++k;
     }
    else if (k==1)
     {
      outtextxy(x1,y1,"2");
      ++k;
     }
    else if (k==2)
     {
      outtextxy(x1,y1,"3");
      ++k;
     }
   }
  if (token[3].status==1)
   {
    int x1,y1;
    x1=token[3].p_position[0]+18;
    y1=token[3].p_position[1]+18;
    if (k==0)
     {
      outtextxy(x1,y1,"1");
      ++k;
     }
    else if (k==1)
     {
      outtextxy(x1,y1,"2");
      ++k;
     }
    else if (k==2)
     {
      outtextxy(x1,y1,"3");
      ++k;
     }
    else if (k==3)
     {
      outtextxy(x1,y1,"4");
      ++k;
     }
   }
  if (token[4].status==1)
   {
    int x1,y1;
    x1=token[4].p_position[0]+18;
    y1=token[4].p_position[1]+18;
    if (k==0)
     {
      outtextxy(x1,y1,"1");
      ++k;
     }
    else if (k==1)
     {
      outtextxy(x1,y1,"2");
      ++k;
     }
    else if (k==2)
     {
      outtextxy(x1,y1,"3");
      ++k;
     }
    else if (k==3)
     {
      outtextxy(x1,y1,"4");
      ++k;
     }
    else if (k==4)
     {
      outtextxy(x1,y1,"5");
      ++k;
     }
   }
  if (token[5].status==1)
   {
    int x1,y1;
    x1=token[5].p_position[0]+18;
    y1=token[5].p_position[1]+18;
    if (k==0)
     {
      outtextxy(x1,y1,"1");
      ++k;
     }
    else if (k==1)
     {
      outtextxy(x1,y1,"2");
      ++k;
     }
    else if (k==2)
     {
      outtextxy(x1,y1,"3");
      ++k;
     }
    else if (k==3)
     {
      outtextxy(x1,y1,"4");
      ++k;
     }
    else if (k==4)
     {
      outtextxy(x1,y1,"5");
      ++k;
     }
    else if (k==5)
     {
      outtextxy(x1,y1,"6");
      ++k;
     }
   }
  if (token[6].status==1)
   {
    int x1,y1;
    x1=token[6].p_position[0]+18;
    y1=token[6].p_position[1]+18;
    if (k==0)
     {
      outtextxy(x1,y1,"1");
      ++k;
     }
    else if (k==1)
     {
      outtextxy(x1,y1,"2");
      ++k;
     }
    else if (k==2)
     {
      outtextxy(x1,y1,"3");
      ++k;
     }
    else if (k==3)
     {
      outtextxy(x1,y1,"4");
      ++k;
     }
    else if (k==4)
     {
      outtextxy(x1,y1,"5");
      ++k;
     }
    else if (k==5)
     {
      outtextxy(x1,y1,"6");
      ++k;
     }
    else if (k==6)
     {
      outtextxy(x1,y1,"7");
      ++k;
     }
   }
  if (token[7].status==1)
   {
    int x1,y1;
    x1=token[7].p_position[0]+18;
    y1=token[7].p_position[1]+18;
    if (k==0)
     {
      outtextxy(x1,y1,"1");
      ++k;
     }
    else if (k==1)
     {
      outtextxy(x1,y1,"2");
      ++k;
     }
    else if (k==2)
     {
      outtextxy(x1,y1,"3");
      ++k;
     }
    else if (k==3)
     {
      outtextxy(x1,y1,"4");
      ++k;
     }
    else if (k==4)
     {
      outtextxy(x1,y1,"5");
      ++k;
     }
    else if (k==5)
     {
      outtextxy(x1,y1,"6");
      ++k;
     }
    else if (k==6)
     {
      outtextxy(x1,y1,"7");
      ++k;
     }
    else if (k==7)
     {
      outtextxy(x1,y1,"8");
      ++k;
     }
   }
  }
 else if (token[32].type==5)
 {
  if (token[16].status==1)
   {
    int x1,y1;
    x1=token[16].p_position[0]+18;
    y1=token[16].p_position[1]+18;
    outtextxy(x1,y1,"1");
    ++k;
   }
  if (token[17].status==1)
   {
    int x1,y1;
    x1=token[17].p_position[0]+18;
    y1=token[17].p_position[1]+18;
    if (k==0)
     {
      outtextxy(x1,y1,"1");
      ++k;
     }
    else if (k==1)
     {
      outtextxy(x1,y1,"2");
      ++k;
     }
   }
  }
 else if (token[32].type==4)
 {
  if (token[20].status==1)
   {
    int x1,y1;
    x1=token[20].p_position[0]+18;
    y1=token[20].p_position[1]+18;
    outtextxy(x1,y1,"1");
    ++k;
   }
  if (token[21].status==1)
   {
    int x1,y1;
    x1=token[21].p_position[0]+18;
    y1=token[21].p_position[1]+18;
    if (k==0)
     {
      outtextxy(x1,y1,"1");
      ++k;
     }
    else if (k==1)
     {
      outtextxy(x1,y1,"2");
      ++k;
     }
   }
  }
 else if (token[32].type==3)
 {
  if (token[24].status==1)
   {
    int x1,y1;
    x1=token[24].p_position[0]+18;
    y1=token[24].p_position[1]+18;
    outtextxy(x1,y1,"1");
    ++k;
   }
  if (token[25].status==1)
   {
    int x1,y1;
    x1=token[25].p_position[0]+18;
    y1=token[25].p_position[1]+18;
    if (k==0)
     {
      outtextxy(x1,y1,"1");
      ++k;
     }
    else if (k==1)
     {
      outtextxy(x1,y1,"2");
      ++k;
     }
   }
  }
 else if (token[32].type==2)
 {
  if (token[28].status==1)
   {
    int x1,y1;
    x1=token[28].p_position[0]+18;
    y1=token[28].p_position[1]+18;
    outtextxy(x1,y1,"1");
   }
  }
 else if (token[32].type==1)
 {
    int x1,y1;
    x1=token[30].p_position[0]+18;
    y1=token[30].p_position[1]+18;
    outtextxy(x1,y1,"1");
 }
 else;
 setcolor(GREEN);
 outtextxy(5,130,"NUMBER:- ");
 gotoxy(11,9);
 cin>>token[32].type_no;
 k=token[32].type_no;
 if (token[32].type==6)
 {
  for (i=1;i<=k;i++)
  {
   if (i==k)
   {
    int x1,y1,x2,y2;
    x1=token[k-1].p_position[0];
    y1=token[k-1].p_position[1];
    x2=token[k-1].p_position[2];
    y2=token[k-1].p_position[3];
    setfillstyle(SOLID_FILL,BLUE);
    bar(x1,y1,x2,y2);
    show_req_token (token[k-1].p_position);
   }
  }
  int status1[3],status2[3],status3[3];
  soldier_10(280,280,320,320);
  soldier_15(360,280,400,320);
  int n=0;
  for (int i=0;i<=32;i++)
  {
   int x1,y1,x2,y2;
   x1=token[k-1].p_position[0];
   y1=token[k-1].p_position[1];
   x2=token[k-1].p_position[2];
   y2=token[k-1].p_position[3];
   int x_1,y_1,x_2,y_2;
   x_1=token[i].p_position[0];
   y_1=token[i].p_position[1];
   x_2=token[i].p_position[2];
   y_2=token[i].p_position[3];
   setfillstyle(SOLID_FILL,YELLOW);
   if (x_1>=160 && y_1>=80 && x_2<=480 && y_2<=400 )
   {
    bar((x1),(y1-40),(x2),(y2-40));
    status1[0]=x1;
    status1[1]=y1-40;
    status1[2]=x2;
    status1[3]=y2-40;
    show_req_token (status1);
    setcolor(RED);
    outtextxy(x1,y1-40,"1");
    if (n==0)
    {
     n++;
    }
   }
   if (x1-40==x_1 && y1-40==y_1 && x2-40==x_2 && y2-40==y_2 && x_1>=160 && y_1>=80 && x_2<=480 && y_2<=400  && token[i].colour==2 )
   {
    setfillstyle(SOLID_FILL,YELLOW);
    bar((x1-40),(y1-40),(x2-40),(y2-40));
    status2[0]=x1-40;
    status2[1]=y1-40;
    status2[2]=x2-40;
    status2[3]=y2-40;
    show_req_token (status2);
    if (n==0)
    {
     outtextxy(x_1,y_1,"1");
     n++;
    }
    else if (n==1)
    {
     outtextxy(x_1,y_1,"2");
     n++;
    }
   }
   if (x1+40==x_1 && y1-40==y_1 && x2+40==x_2 && y2-40==y_2 && x_1>=160 && y_1>=80 && x_2<=480 && y_2<=400 && token[i].colour==2 )
   {
    setfillstyle(SOLID_FILL,YELLOW);
    bar((x1+40),(y1-40),(x2+40),(y2-40));
    status3[0]=x1+40;
    status3[1]=y1-40;
    status3[2]=x2+40;
    status3[3]=y2-40;
    show_req_token (status3);
    if (n==0)
    {
     outtextxy(x_1,y_1,"1");
     n++;
    }
    else if (n==1)
    {
     outtextxy(x_1,y_1,"2");
     n++;
    }
    else if (n==2)
    {
     outtextxy(x_1,y_1,"3");
     n++;
    }


   }
  }
 }
 else if (token[32].type==5)
 {
  int q=0,n=0;
  for (i=1;i<=k;i++)
  {
   if (i==k)
   {
    int x1,y1,x2,y2;
    x1=token[k+15].p_position[0];
    y1=token[k+15].p_position[1];
    x2=token[k+15].p_position[2];
    y2=token[k+15].p_position[3];
    setfillstyle(SOLID_FILL,BLUE);
    bar(x1,y1,x2,y2);
    show_req_token (token[k+15].p_position);
   }
  }
  for (i=0;i<=k;i++)
  {
   int x1,y1,x2,y2;
   x1=token[k+15].p_position[0];
   y1=token[k+15].p_position[1];
   x2=token[k+15].p_position[2];
   y2=token[k+15].p_position[3];
   int x_1,y_1,x_2,y_2;
   setfillstyle(SOLID_FILL,YELLOW);
   int arr_pos[4];
   for(int j=1;j<=8;j++)
   {
    q=0;
    for(int p=0;p<32;p++)
    {
     x_1=token[p].p_position[0];
     y_1=token[p].p_position[1];
     x_2=token[p].p_position[2];
     y_2=token[p].p_position[3];
     int z=j*40;
     if(x1+z!=x_1 && y1!=y_1 && token[p].colour==2)
     {
      q=q+1;
     }
     else if(y1!=y_1 && x1<x_1 && token[p].colour==2)
     {
      q=q+1;
     }
    }
    if(q==16)
    {
     n=n+1;
    }
    else
    {
     n=n+1;
     break;
    }
   }

   cout<<n;
   if(n==1)
   {
    outtextxy(x1+40,y1,"1");
    bar(x1+40,y1,x2+40,y2);
    arr_pos[0]=x1+40;
    arr_pos[1]=y1;
    arr_pos[2]=x1+40;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
   }
   else if(n==2)
   {
    outtextxy(x1+40,y1,"1");
    bar(x1+40,y1,x2+40,y2);
    arr_pos[0]=x1+40;
    arr_pos[1]=y1;
    arr_pos[2]=x1+40;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+80,y1,"2");
    bar(x1+80,y1,x2+80,y2);
    arr_pos[0]=x1+80;
    arr_pos[1]=y1;
    arr_pos[2]=x1+80;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
   }
   else if(n==3)
   {
    outtextxy(x1+40,y1,"1");
    bar(x1+40,y1,x2+40,y2);
    arr_pos[0]=x1+40;
    arr_pos[1]=y1;
    arr_pos[2]=x1+40;
    arr_pos[3]=y2;
    show_req_token (arr_pos);

    outtextxy(x1+80,y1,"2");
    bar(x1+80,y1,x2+80,y2);
    arr_pos[0]=x1+80;
    arr_pos[1]=y1;
    arr_pos[2]=x1+80;
    arr_pos[3]=y2;
    show_req_token (arr_pos);

    outtextxy(x1+120,y1,"3");
    bar(x1+120,y1,x2+120,y2);
    arr_pos[0]=x1+120;
    arr_pos[1]=y1;
    arr_pos[2]=x1+120;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
   }
   else if(n==4)
   {
    outtextxy(x1+40,y1,"1");
    bar(x1+40,y1,x2+40,y2);
    arr_pos[0]=x1+40;
    arr_pos[1]=y1;
    arr_pos[2]=x1+40;
    arr_pos[3]=y2;
    show_req_token (arr_pos);

    outtextxy(x1+80,y1,"2");
    bar(x1+80,y1,x2+80,y2);
    arr_pos[0]=x1+80;
    arr_pos[1]=y1;
    arr_pos[2]=x1+80;
    arr_pos[3]=y2;
    show_req_token (arr_pos);

    outtextxy(x1+120,y1,"3");
    bar(x1+120,y1,x2+120,y2);
    arr_pos[0]=x1+120;
    arr_pos[1]=y1;
    arr_pos[2]=x1+120;
    arr_pos[3]=y2;
    show_req_token (arr_pos);

    outtextxy(x1+160,y1,"4");
    bar(x1+160,y1,x2+160,y2);
    arr_pos[0]=x1+160;
    arr_pos[1]=y1;
    arr_pos[2]=x1+160;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
   }
   else if(n==5)
   {
    outtextxy(x1+40,y1,"1");
    bar(x1+40,y1,x2+40,y2);
    arr_pos[0]=x1+40;
    arr_pos[1]=y1;
    arr_pos[2]=x1+40;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+80,y1,"2");
    bar(x1+80,y1,x2+80,y2);
    arr_pos[0]=x1+80;
    arr_pos[1]=y1;
    arr_pos[2]=x1+80;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+120,y1,"3");
    bar(x1+120,y1,x2+120,y2);
    arr_pos[0]=x1+120;
    arr_pos[1]=y1;
    arr_pos[2]=x1+120;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+160,y1,"4");
    bar(x1+160,y1,x2+160,y2);
    arr_pos[0]=x1+160;
    arr_pos[1]=y1;
    arr_pos[2]=x1+160;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+200,y1,"5");
    bar(x1+200,y1,x2+200,y2);
    arr_pos[0]=x1+200;
    arr_pos[1]=y1;
    arr_pos[2]=x1+200;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
   }
   else if(n==6)
   {
    outtextxy(x1+40,y1,"1");
    bar(x1+40,y1,x2+40,y2);
    arr_pos[0]=x1+40;
    arr_pos[1]=y1;
    arr_pos[2]=x1+40;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+80,y1,"2");
    bar(x1+80,y1,x2+80,y2);
    arr_pos[0]=x1+80;
    arr_pos[1]=y1;
    arr_pos[2]=x1+80;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+120,y1,"3");
    bar(x1+120,y1,x2+120,y2);
    arr_pos[0]=x1+120;
    arr_pos[1]=y1;
    arr_pos[2]=x1+120;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+160,y1,"4");
    bar(x1+160,y1,x2+160,y2);
    arr_pos[0]=x1+160;
    arr_pos[1]=y1;
    arr_pos[2]=x1+160;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+200,y1,"5");
    bar(x1+200,y1,x2+200,y2);
    arr_pos[0]=x1+200;
    arr_pos[1]=y1;
    arr_pos[2]=x1+200;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+240,y1,"6");
    bar(x1+240,y1,x2+240,y2);
    arr_pos[0]=x1+240;
    arr_pos[1]=y1;
    arr_pos[2]=x1+240;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
   }
   else if(n==7)
   {
    outtextxy(x1+40,y1,"1");
    bar(x1+40,y1,x2+40,y2);
    arr_pos[0]=x1+40;
    arr_pos[1]=y1;
    arr_pos[2]=x1+40;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+80,y1,"2");
    bar(x1+80,y1,x2+80,y2);
    arr_pos[0]=x1+80;
    arr_pos[1]=y1;
    arr_pos[2]=x1+80;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+120,y1,"3");
    bar(x1+120,y1,x2+120,y2);
    arr_pos[0]=x1+120;
    arr_pos[1]=y1;
    arr_pos[2]=x1+120;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+160,y1,"4");
    bar(x1+160,y1,x2+160,y2);
    arr_pos[0]=x1+160;
    arr_pos[1]=y1;
    arr_pos[2]=x1+160;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+200,y1,"5");
    bar(x1+200,y1,x2+200,y2);
    arr_pos[0]=x1+200;
    arr_pos[1]=y1;
    arr_pos[2]=x1+200;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+240,y1,"6");
    bar(x1+240,y1,x2+240,y2);
    arr_pos[0]=x1+240;
    arr_pos[1]=y1;
    arr_pos[2]=x1+240;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
    outtextxy(x1+280,y1,"7");
    bar(x1+280,y1,x2+280,y2);
    arr_pos[0]=x1+280;
    arr_pos[1]=y1;
    arr_pos[2]=x1+280;
    arr_pos[3]=y2;
    show_req_token (arr_pos);
   }
  }
 }

 else if (token[32].type==4)
 {
  for (i=1;i<=k;i++)
  {
   if (i==k)
   {
    int x1,y1,x2,y2;
    x1=token[k+19].p_position[0];
    y1=token[k+19].p_position[1];
    x2=token[k+19].p_position[2];
    y2=token[k+19].p_position[3];
    setfillstyle(SOLID_FILL,BLUE);
    bar(x1,y1,x2,y2);
    show_req_token (token[k+19].p_position);

   }
  }
 }
 else if (token[32].type==3)
 {
  for (i=1;i<=k;i++)
  {
   if (i==k)
   {
    int x1,y1,x2,y2;
    x1=token[k+23].p_position[0];
    y1=token[k+23].p_position[1];
    x2=token[k+23].p_position[2];
    y2=token[k+23].p_position[3];
    setfillstyle(SOLID_FILL,BLUE);
    bar(x1,y1,x2,y2);
    show_req_token (token[k+23].p_position);
   }
  }
 }
 else if (token[32].type==2)
 {
    int x1,y1,x2,y2;
    x1=token[k+27].p_position[0];
    y1=token[k+27].p_position[1];
    x2=token[k+27].p_position[2];
    y2=token[k+27].p_position[3];
    setfillstyle(SOLID_FILL,BLUE);
    bar(x1,y1,x2,y2);
    show_req_token (token[k+27].p_position);

 }
 else if (token[32].type==1)
 {
    int x1,y1,x2,y2;
    x1=token[k+29].p_position[0];
    y1=token[k+29].p_position[1];
    x2=token[k+29].p_position[2];
    y2=token[k+29].p_position[3];
    setfillstyle(SOLID_FILL,BLUE);
    bar(x1,y1,x2,y2);
    show_req_token (token[k+29].p_position);

 }


 outtextxy(5,145,"POSITION:- ");
 setcolor(RED);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 outtextxy(530,80,"RED");
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(485,115,"TOKEN:- ");
 outtextxy(485,130,"NUMBER:- ");
 outtextxy(485,145,"POSITION:- ");
 setcolor(WHITE);
 getch();
 closegraph();
 return 0;
}