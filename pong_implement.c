#include "pong.h"

char  WALL_HIT, WALL_NOT_HIT;

ball_t ball (int posx, int posy,int velx, int vely, char radius)
{
	ball_t ball;

	ball.position.x = posx;
	ball.position.y = posy;
	ball.radius = radius;
	ball.velocity.x = velx;
	ball.velocity.y = vely;

	return ball;
}

ball_t ballhitleftright(ball_t ball)
{
	if (ball.position.x + ball.radius>=SCREEN_WIDTH){
		WALL_HIT = 1;
		ball.velocity.x = -ball.velocity.x;
	}
	if (ball.position.x - ball.radius<=0){
			WALL_HIT = 1;
			ball.velocity.x = -ball.velocity.x;
	}

	return ball;

}

ball_t ballhittopbottom(ball_t ball)
{
	if (ball.position.y+ball.radius>=SCREEN_HIGHT){
		WALL_HIT = 1;
		ball.velocity.y = - ball.velocity.y;
	}
	if (ball.position.y-ball.radius<=0){
			WALL_HIT = 1;
			ball.velocity.y = - ball.velocity.y;
	}

	return ball;
}


ball_t move_ball(ball_t ball)
{
	ball.position.x += ball.velocity.x;
	ball.position.y += ball.velocity.y;

	ball = ballhitleftright(ball);
	ball = ballhittopbottom(ball);

	return ball;
}
