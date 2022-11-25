/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_spe.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:37:25 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/25 12:00:25 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"


void	set_tree2(t_data *gl, int u, int d, int e)
{
		gl->u = u;
		gl->d = d;
		gl->e = e;
}

int	srv(char *str)
{
	//ft_printf("-%s\n", ft_strnstr(str, "OO1", 3));
	if (ft_strnstr(str, "OOO", 3) != NULL)//|| ft_strnstr(str, "OO", 3) != NULL)
		return 0;
	if (ft_strnstr(str, "OO1", 3) != NULL)// || ft_strnstr(str, "O1", 3) != NULL)
		return 1;
	if (ft_strnstr(str, "O1O", 3) != NULL)// || ft_strnstr(str, "1O", 3) != NULL)
		return 2;
	if (ft_strnstr(str, "O11", 3) != NULL)
		return 3;
	if (ft_strnstr(str, "1OO", 3) != NULL)
		return 4;
	if (ft_strnstr(str, "1O1", 3) != NULL)
		return 5;
	return (99);
}

void	five_digit(t_data *gl)
{
	int f;

	f = 0;
	while (f < 2)
	{
		if (srv(gl->ab[0]) == 0 || srv(gl->ab[0]) == 4)
		{
			swap_pb(gl);
			f++;
		}
		else
			swap_ra(gl);
	}
	tree_digit(gl);
	swap_pa(gl);
	swap_pa(gl);
	if (srv(gl->ab[0]) == 0)
	{
		swap_sa(gl);
		swap_ra(gl);
	}
	else
		swap_ra(gl);
}

void	set_tree(t_data *gl)
{
	if (srv(gl->ab[0]) < srv(gl->ab[1]) && srv(gl->ab[0]) < srv(gl->ab[2]) && srv(gl->ab[2]) > srv(gl->ab[1]))
		set_tree2(gl, 0, 1, 2);
	if (srv(gl->ab[2]) < srv(gl->ab[1]) && srv(gl->ab[2]) < srv(gl->ab[0]) && srv(gl->ab[0]) > srv(gl->ab[1]))
		set_tree2(gl, 2, 1, 0);
	if (srv(gl->ab[0]) < srv(gl->ab[1]) && srv(gl->ab[0]) < srv(gl->ab[2]) && srv(gl->ab[1]) > srv(gl->ab[2]))
		set_tree2(gl, 0, 2, 1);
	if (srv(gl->ab[2]) < srv(gl->ab[1]) && srv(gl->ab[2]) < srv(gl->ab[0]) && srv(gl->ab[1]) > srv(gl->ab[0]))
		set_tree2(gl, 1, 2, 0);
	if (srv(gl->ab[1]) < srv(gl->ab[0]) && srv(gl->ab[1]) < srv(gl->ab[2]) && srv(gl->ab[2]) > srv(gl->ab[0]))
		set_tree2(gl, 1, 0, 2);
	if (srv(gl->ab[1]) < srv(gl->ab[0]) && srv(gl->ab[1]) < srv(gl->ab[2]) && srv(gl->ab[2]) < srv(gl->ab[0]))
		set_tree2(gl, 2, 0, 1);
}

void	tree_digit(t_data *gl)
{
	set_tree(gl);
	if (gl->u == 0 && gl->d == 1 && gl->e == 2)
		return ;
	if (gl->u == 0 && gl->d == 2 && gl->e == 1)
	{
		swap_sa(gl);
		swap_ra(gl);
	}
	if (gl->u == 1 && gl->d == 2 && gl->e == 0)
		swap_rra(gl);
	if (gl->u == 1 && gl->d == 0 && gl->e == 2)
		swap_sa(gl);
	if (gl->u == 2 && gl->d == 0 && gl->e == 1)
		swap_ra(gl);
	if (gl->u == 2 && gl->d == 1 && gl->e == 0)
	{
		swap_sa(gl);
		swap_rra(gl);
	}
}

void	short_two(t_data *gl)
{
	if (gl->a[0] > gl->a[1])
		swap_sa(gl);
}

void	redirect_tree_five(t_data *gl)
{
	if (gl->argc == 1)
		exit(0);
	if (gl->argc == 2)
		short_two(gl);
	if (gl->argc == 3)
		tree_digit(gl);
	if (gl->argc == 5)
		five_digit(gl);
	exit(0);
}
