#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include"../libft/libft.h"
# define BUF 100

typedef struct s_data
{
	int		argc;
	int		*a;
	int		*b;
	char	**ab;
	char	**bb;
	char	**t;
	char	**tb;
	int		maxlen;
	int		u;
	int		d;
	int		e;
}	t_data;

typedef struct s_simp
{
	int		i;
	int		pos;
	int		min;
	int		min_pos;
	int		modif;
}	t_simp;

void	argv_check(int argc, char **argv);
void	init_list(int argc, char **argv, t_data *gl);
void	simplify_list(t_data *gl);
void	set_b_to_a(t_data *gl);
void	init_list_binary(t_data *gl);
void	fill_binary(t_data *gl);
void	algo_radix(t_data *gl);
void	tree_digit(t_data *gl);
void 	redirect_tree_five(t_data *gl);
int		swap_sa(t_data *gl);
int		swap_sb(t_data *gl);
int		swap_ss(t_data *gl);
void	swap_pa(t_data *gl);
void	swap_pb(t_data *gl);
void	swap_rra(t_data *gl);
void	swap_rrb(t_data *gl);
void	swap_rrr(t_data *gl);
void	swap_ra(t_data *gl);
void	swap_rb(t_data *gl);
void	swap_rr(t_data *gl);
void	exit_free(t_data *gl);

#endif