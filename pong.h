/******************************************************
 * Author: C1C Ryan Lamo
 * Created: 14 October 2013
 * Last Edited: 14 October 2013
 * Description: Lesson 21 Assignment
 ******************************************************/

#ifndef _PONG_H
#define _PONG_H

#define SCREEN_WIDTH 500
#define SCREEN_HIGHT 500

typedef struct vector{
	int x;
	int y;
}vector2d_t;

typedef struct ball{
	vector2d_t position;
	vector2d_t velocity;
	char radius;
}ball_t;


ball_t ball(int posx, int posy, int velx, int vely, char radius);
ball_t move_ball (ball_t ball);

#endif



