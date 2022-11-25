/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rrb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/25 17:43:18 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	swap_rrb(t_data *gl)
{
	int	i;

	i = -1;
	if (gl->bb[1])
	{
		while (gl->bb[++i])
			gl->tb[i] = gl->bb[i];
		gl->tb[i] = NULL;
		gl->bb[0] = gl->bb[i - 1];
		i = 0;
		while (gl->tb[++i])
			gl->bb[i] = gl->tb[i - 1];
		gl->bb[i] = NULL;
		ft_putstr_fd("rb\n", 1);
	}
}
