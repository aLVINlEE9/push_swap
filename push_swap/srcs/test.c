#include "../includes/push_swap.h"
#include <stdio.h>

void append_node(t_dlist **head_ref, int new_data)
{
	t_dlist *new_node;
	t_dlist *temp;

	new_node = (t_dlist *)malloc(sizeof(t_dlist));
	new_node->data = new_data;
	new_node->next = NULL;
	new_node->prev = NULL;
	if ((*head_ref) == NULL)
	{
		*head_ref = new_node;
		temp = new_node;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
		temp = new_node;
	}
}

void display(t_dlist **head_ref)
{
	t_dlist *temp;

	temp = *head_ref;
	while(temp->next == NULL)
	{
		printf("%d\n", temp->data);
	}
}

int main(int argc, char **argv)
{
	t_dlist **A_head;
	int	i;

	i = 0;
	while(argv[i])
	{
		append_node(A_head, i);
	}
	display(A_head);
}
