
/*
	Write a function that returns the number of elements in the linked list that's
	passed to it.

	It must be declared as follows:

	int	ft_list_size(t_list *begin_list);

	You must use the following structure in your program ft_list_size.c :

	typedef struct    s_list
	{
		struct s_list *next;
		void          *data;
	}                 t_list;
*/


typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int size = 0;
	while (begin_list)
	{
		begin_list = begin_list->data;
		size++;
	}
	return size;
}