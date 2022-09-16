#include "../../includes/insertion_sort.h"

void	rra(t_datas *datas, int cnt)
{
	t_list	*a_stack;
	int		i;

	a_stack = datas->a_stack;
	i = -1;
	while (++i < cnt)
		reverse_rotate(a_stack);
}

void	rrb(t_datas *datas, int cnt)
{
	t_list	*b_stack;
	int		i;

	b_stack = datas->b_stack;
	i = -1;
	while (++i < cnt)
		reverse_rotate(b_stack);
}

void	rrr(t_datas *datas, int cnt)
{
	rra(datas, cnt);
	rrb(datas, cnt);
}
