
/*
	Write a program that takes one or several strings and, for each argument,
	capitalizes the first character of each word (If it's a letter, obviously),
	puts the rest in lowercase, and displays the result on the standard output,
	followed by a \n.

	A "word" is defined as a part of a string delimited either by spaces/tabs, or
	by the start/end of the string. If a word only has one letter, it must be
	capitalized.

	If there are no arguments, the progam must display \n.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_point
{
	int x;
	int y;
} t_point;

void fill(char **tab, t_point size, t_point matrix, char org, char to_fill)
{
	if (matrix.y < 0 || matrix.y >= size.y || matrix.x < 0 || matrix.x >= size.x || tab[matrix.y][matrix.x] != org || tab[matrix.y][matrix.x] == to_fill)
		return (0);
	tab[matrix.y][matrix.x] = to_fill;
	fill(tab, size, (t_point){matrix.x - 1, matrix.y}, org, to_fill);
	fill(tab, size, (t_point){matrix.x + 1, matrix.y}, org, to_fill);
	fill(tab, size, (t_point){matrix.x, matrix.y - 1}, org, to_fill);
	fill(tab, size, (t_point){matrix.x, matrix.y + 1}, org, to_fill);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x], 'F');
}