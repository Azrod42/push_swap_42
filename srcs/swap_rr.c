#include"../include/push_swap.h"

void	swap_rr(t_data *gl)
{
	if (gl->ab[1] || gl->bb[1])
	{
		swap_ra(gl);
		swap_rb(gl);
		ft_putstr_fd("rr\n", 1);
	}
}