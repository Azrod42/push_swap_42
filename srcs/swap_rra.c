/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/26 12:30:37 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	swap_rra(t_data *gl)
{
	int		i;
	char	*temp;

	i = 0;
	if (gl->ab[1])
	{
		while (i < gl->argca)
			i++;
		temp = gl->ab[i - 1];
		while (--i > 0)
			gl->ab[i] = gl->ab[i - 1];
		gl->ab[i] = temp;
		ft_putstr_fd("rra\n", 1);
	}
}
