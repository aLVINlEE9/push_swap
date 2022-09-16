#include "../../includes/insertion_sort.h"

/*
There's two stack in this sorting algorithm
		-------------------------
		|		9	|			|
		|		2	|			|
		|		7	|			|
		|		3	|			|
		|		5	|			|
		|			|			|
		|	a_stack	|	b_stack	|
		--------------------------
	using b_stack to sort numbers
*/

void	sorting_algorithm(t_datas *datas)
{
	t_list	*a_stack;

	a_stack = datas->a_stack;
	set_max_array(a_stack);
	if (a_stack->count == 2)
		sort_2(datas);
	else if (a_stack->count == 3)
		sort_3(datas);
	else if (a_stack->count > 3)
		insertion_sort(datas);
	free_list(datas->a_stack);
	free_list(datas->b_stack);
}
