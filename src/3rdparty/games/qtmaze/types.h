/*  types.h
 *
 *  Often used types definition
 *
 *  (c) 2009 Anton Olkhovik <ant007h@gmail.com>
 *
 *  This file is part of QtMaze (port of Mokomaze) - labyrinth game.
 *
 *  QtMaze is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  QtMaze is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with QtMaze.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TYPES_H
#define TYPES_H

#define BYTE unsigned char

//----------------------------------

typedef enum {
	ACCEL_UNKNOWN,
        ACCEL_FREERUNNER	/* Openmoko Neo Freerunner */
} AccelType;

//----------------------------------

typedef struct {

	double		x;
	double		y;

} DPoint;

typedef struct {

	int		x;
	int		y;

} Point;

typedef struct {

	int		x1;
	int		y1;

	int		x2;
	int		y2;

} Box;

typedef struct {

	int		wnd_w;
	int		wnd_h;

	int		ball_r;
	int		hole_r;

	int		f_delay;
        int             fullscreen;
        
} Config;

typedef struct {

	char		levelpack[128];
	int		level;

} User;

typedef struct {

	int		level;
	int		level_set;
	AccelType	accel;
	int		accel_set;

} Prompt;

typedef struct {

	int		boxes_count;
	Box*		boxes;

	int		holes_count;
	Point*		holes;

        int		fins_count;
	Point*		fins;

	Point		init;

} Level;

#endif /* TYPES_H */
