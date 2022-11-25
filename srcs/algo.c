/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <tsorabel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:36:42 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/24 18:04:16 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

int	check_next(t_data *gl)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (gl->ab[++i] != NULL)
		if (gl->ab[i][gl->maxlen - 1] == '1')
			j++;
	if (j > 0)
		return (1);
	return (0);
}

void check_digit(int *i, t_data *gl, int *j, int *nbra)
{
	if (gl->ab[*i - *j][gl->maxlen - 1] == 'O')
	{
		swap_pb(gl);
		*j += 1;
		*nbra += 1;
	}
	else if (gl->ab[*i - *j][gl->maxlen - 1] == '1')
	{
		swap_ra(gl);
		*j += 1;
	}
	*i += 1;
}

void	algo_radix(t_data *gl)
{
	int	i;
	int	j;
	int	nbra;

	nbra = 0;
	if ((gl->argc >= 1 && gl->argc <= 3) || gl->argc == 5)
		redirect_tree_five(gl);
	while (gl->maxlen >= 0)
	{
		i = 0;
		j = 0;
		while (i < gl->argc)
			check_digit(&i, gl, &j, &nbra);
		while (nbra >= 0)
		{
			swap_pa(gl);
			nbra--;
		}
		gl->maxlen -= 1;
	}
}