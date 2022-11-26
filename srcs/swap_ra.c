/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/26 12:34:20 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	swap_ra(t_data *gl)
{
	int		i;
	char	*temp;

	i = -1;
	if (gl->ab[1])
	{
		temp = gl->ab[0];
		while (++i < gl->argca)
			gl->ab[i] = gl->ab[i + 1];
		gl->ab[i - 1] = temp;
		ft_putstr_fd("ra\n", 1);
	}
}
