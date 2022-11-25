#include"../include/push_swap.h"

void	swap_ra(t_data *gl)
{
	int	i;

	i = -1;
	if (gl->ab[1])
	{
		while(gl->ab[++i])
			gl->t[i] = gl->ab[i];
		gl->t[i] = NULL;
		gl->ab[i - 1] = gl->ab[0]; 
		i = -1;
		while(gl->t[++i])
			gl->ab[i - 1] = gl->t[i];
		gl->ab[i] = NULL;
		ft_putstr_fd("ra\n", 1);
	}
}