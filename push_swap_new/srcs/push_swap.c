#include "../includes/insertion_sort.h"

int	main(int argc, char **argv)
{
	t_datas	datas;

	parsing(&datas, argc, argv);
	sorting_algorithm(&datas);
	return (0);
}
