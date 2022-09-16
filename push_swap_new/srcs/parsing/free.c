#include "../../includes/insertion_sort.h"

int	free_list(t_list *stack)
{
	t_node	*now;
	t_node	*tmp;

	now = stack->head;
	while (now != NULL)
	{
		tmp = now;
		free(tmp);
		now = now->next;
	}
	free(stack);
	return (1);
}

int	free_stack(t_list *stack)
{
	free(stack);
	return (1);
}

int	free_node(t_node *node)
{
	free(node);
	return (1);
}
