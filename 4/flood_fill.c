
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


typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;


void f_fill(char **tab, t_point size, char target, int row, int col)
{
    if (row < 0 || col < 0 || row >= size.y || col >= size.x)
        return;
    if (tab[row][col] == 'F' || tab[row][col] != target)
        return;
    tab[row][col] = 'F';

    f_fill(tab, size, target, row -1, col);
    f_fill(tab, size, target, row +1, col);
    f_fill(tab, size, target, row, col - 1);
    f_fill(tab, size, target, row, col + 1);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x];
    f_fill(tab, size, target, begin.y, begin.x);
}