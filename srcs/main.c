/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/26 13:49:51 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	argc_2(char **argv, t_data *gl)
{
	int	i;

	i = 0;
	while (argv[i] != NULL)
		i++;
	gl->argc = i;
}

int	exit_error(void)
{
	ft_printf("Error\n");
	exit (0);
}

int	main(int argc, char **argv)
{
	t_data	gl;
	char	**av;
	char	*temp;

	if (argc == 1 || argv[1][0] == '\0')
		exit_error();
	else if (argc == 2)
	{
		temp = ft_strjoin("./pushswap ", argv[1]);
		av = ft_split(temp, ' ');
		argc_2(av, &gl);
		argv_check(gl.argc, av);
		init_list(gl.argc, av, &gl);
	}
	else
	{
		argv_check(argc, argv);
		init_list(argc, argv, &gl);
	}
	simplify_list(&gl);
	set_b_to_a(&gl);
	init_list_binary(&gl);
	algo_radix(&gl);
	exit_free(&gl);


/*
	int i;	
	i = -1;
	ft_printf("------------------------\n");
	while(++i < gl.argc)
		ft_printf("%s\t\t%s\n", gl.ab[i], gl.bb[i]);
	ft_printf("------------------------\n");

	//swap_rrb(&gl);
	//swap_pa(&gl);

	i = -1;
	ft_printf("------------------------\n");
	while(++i < gl.argc)
		ft_printf("%s\t\t%s\n", gl.ab[i], gl.bb[i]);
	ft_printf("------------------------\n");
	*/
}