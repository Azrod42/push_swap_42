/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/25 17:43:11 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	swap_rra(t_data *gl)
{
	int	i;

	i = -1;
	if (gl->ab[1])
	{
		while (gl->ab[++i])
			gl->t[i] = gl->ab[i];
		gl->t[i] = NULL;
		gl->ab[0] = gl->ab[i - 1];
		i = 0;
		while (gl->t[++i])
			gl->ab[i] = gl->t[i - 1];
		gl->ab[i] = NULL;
		ft_putstr_fd("rra\n", 1);
	}
}
