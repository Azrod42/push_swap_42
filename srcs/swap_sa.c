/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/25 17:43:34 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

int	swap_sa(t_data *gl)
{
	char	*temp;

	if (gl->ab[0] && gl->ab[1])
	{
		temp = gl->ab[0];
		gl->ab[0] = gl->ab[1];
		gl->ab[1] = temp;
		ft_putstr_fd("sa\n", 1);
		return (1);
	}
	return (0);
}
