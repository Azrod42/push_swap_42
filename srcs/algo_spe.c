/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_spe.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:37:25 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/25 18:01:02 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	five_digit(t_data *gl)
{
	int	f;

	f = 0;
	while (f < 2)
	{
		if (nbr(gl->ab[0]) == 0 || nbr(gl->ab[0]) == 4)
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
	if (nbr(gl->ab[0]) == 0)
	{
		swap_sa(gl);
		swap_ra(gl);
	}
	else
		swap_ra(gl);
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
		exit (0);
	if (gl->argc == 2)
		short_two(gl);
	if (gl->argc == 3)
		tree_digit(gl);
	if (gl->argc == 5)
		five_digit(gl);
	exit(0);
}
