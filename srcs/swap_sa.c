#include"../include/push_swap.h"

int	swap_sa(t_data *gl)
{
	char *temp;

	if (gl->ab[0] && gl->ab[1])
	{
		temp = gl->ab[0];
		gl->ab[0] = gl->ab[1];
		gl->ab[1] = temp;
		ft_putstr_fd("sa\n", 1);
		return (1);
	}
	return (0);
}