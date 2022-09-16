#include "../../includes/insertion_sort.h"

void	ra(t_datas *datas, int cnt)
{
	t_list	*a_stack;
	int		i;

	a_stack = datas->a_stack;
	i = -1;
	while (++i < cnt)
		rotate(a_stack);
}

void	rb(t_datas *datas, int cnt)
{
	t_list	*b_stack;
	int		i;

	b_stack = datas->b_stack;
	i = -1;
	while (++i < cnt)
		rotate(b_stack);
}

void	rr(t_datas *datas, int cnt)
{
	ra(datas, cnt);
	rb(datas, cnt);
}
