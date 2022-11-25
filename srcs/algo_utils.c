/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/25 17:40:37 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	set_tree2(t_data *gl, int u, int d, int e)
{
		gl->u = u;
		gl->d = d;
		gl->e = e;
}

int	nbr(char *str)
{
	if (ft_strnstr(str, "OOO", 3) != NULL)
		return (0);
	if (ft_strnstr(str, "OO1", 3) != NULL)
		return (1);
	if (ft_strnstr(str, "O1O", 3) != NULL)
		return (2);
	if (ft_strnstr(str, "O11", 3) != NULL)
		return (3);
	if (ft_strnstr(str, "1OO", 3) != NULL)
		return (4);
	if (ft_strnstr(str, "1O1", 3) != NULL)
		return (5);
	return (99);
}

void	set_tree(t_data *gl)
{
	if (nbr(gl->ab[0]) < nbr(gl->ab[1])
		&& nbr(gl->ab[0]) < nbr(gl->ab[2]) && nbr(gl->ab[2]) > nbr(gl->ab[1]))
		set_tree2(gl, 0, 1, 2);
	if (nbr(gl->ab[2]) < nbr(gl->ab[1])
		&& nbr(gl->ab[2]) < nbr(gl->ab[0]) && nbr(gl->ab[0]) > nbr(gl->ab[1]))
		set_tree2(gl, 2, 1, 0);
	if (nbr(gl->ab[0]) < nbr(gl->ab[1])
		&& nbr(gl->ab[0]) < nbr(gl->ab[2]) && nbr(gl->ab[1]) > nbr(gl->ab[2]))
		set_tree2(gl, 0, 2, 1);
	if (nbr(gl->ab[2]) < nbr(gl->ab[1])
		&& nbr(gl->ab[2]) < nbr(gl->ab[0]) && nbr(gl->ab[1]) > nbr(gl->ab[0]))
		set_tree2(gl, 1, 2, 0);
	if (nbr(gl->ab[1]) < nbr(gl->ab[0])
		&& nbr(gl->ab[1]) < nbr(gl->ab[2]) && nbr(gl->ab[2]) > nbr(gl->ab[0]))
		set_tree2(gl, 1, 0, 2);
	if (nbr(gl->ab[1]) < nbr(gl->ab[0])
		&& nbr(gl->ab[1]) < nbr(gl->ab[2]) && nbr(gl->ab[2]) < nbr(gl->ab[0]))
		set_tree2(gl, 2, 0, 1);
}
