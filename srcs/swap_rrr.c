#include"../include/push_swap.h"

void	swap_rrr(t_data *gl)
{
	if (gl->bb[1] || gl->ab[1])
	{
		swap_rra(gl);
		swap_rrb(gl);
		ft_putstr_fd("rrr\n", 1);
	}
}