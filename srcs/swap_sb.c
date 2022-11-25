#include"../include/push_swap.h"

int	swap_sb(t_data *gl)
{
	char *temp;

	if (gl->bb[0] && gl->bb[1])
	{
		temp = gl->bb[0];
		gl->bb[0] = gl->bb[1];
		gl->bb[1] = temp;
		ft_putstr_fd("sb\n", 1);
		return (1);
	}
	return (0);
}