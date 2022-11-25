/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <tsorabel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:23:48 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/24 13:03:52 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	check_double(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while (argv[++j])
		{
			if (atoi(argv[j]) == atoi(argv[i]))
			{
				if (i != j)
				{
					ft_printf("Error\n");
					exit(0);
				}
			}
		}
	}
}

void	check_max(char **argv)
{
	int	i;

	i = 0;
	while (argv[++i])
	{
		if (ft_atoi_long(argv[i]) > 2147483647
			|| ft_atoi_long(argv[i]) < -2147483648)
		{
			ft_printf("Error\n");
			exit(0);
		}
	}
}

void	check_char(char **argv)
{
	int	i;
	int	j;
	int neg;

	i = 0;
	neg = 0;
	while (argv[++i])
	{
		j = -1;
		neg = 0;
		while (argv[i][++j])
		{
			if (argv[i][j] == '-')
				neg++;
			if (argv[i][j] < '0' || argv[i][j] > '9' || neg > 1)
			{
				if (argv[i][0] != '-' || neg > 1 || ft_strlen(argv[i]) == 1)
				{
					ft_printf("Error\n");
					exit(0);
				}
			}
		}
	}
}

void	argv_check(int argc, char **argv)
{
	if (argc < 1)
	{
		ft_printf("Error\n");
		exit (0);
	}
	check_char(argv);
	check_double(argv);
	check_max(argv);
}