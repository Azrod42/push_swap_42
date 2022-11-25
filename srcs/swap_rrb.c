#include"../include/push_swap.h"

void	swap_rrb(t_data *gl)
{
	int	i;

	i = -1;
	if (gl->bb[1])
	{
		while(gl->bb[++i])
			gl->tb[i] = gl->bb[i];
		gl->tb[i] = NULL;
		gl->bb[0] = gl->bb[i - 1]; 
		i = 0;
		while(gl->tb[++i])
			gl->bb[i] = gl->tb[i - 1];
		gl->bb[i] = NULL;
		ft_putstr_fd("rb\n", 1);
	}
}