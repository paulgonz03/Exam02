#include <stdlib.h>
#include <stdio.h>
#include "list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}

// void print_data(void *data)
// {
// 	printf("%s\n", (char *)data);
// }

// int		main(void)
// {
// 	//Create a linked list with some data
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	node1->data = "Hello";
// 	node1->next = node2;

// 	node2->data = "World";
// 	node2->next = node3;

// 	node3->data = "!";
// 	node3->next = NULL;

// 	//Call ft_list_foreach with the head node, to apply print_data to each element
// 	ft_list_foreach(node1, print_data);

// 	//Free the allocated memory
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }