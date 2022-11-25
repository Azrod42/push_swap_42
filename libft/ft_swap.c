#include"libft.h"

int	ft_swap(int *first, int *sec)
{
	int	temp;
	temp = *first;
	*first = *sec;
	*sec = *first;
	return (temp);
}