#include "../minishell.h"

void	int_sign(int sign)
{
	if (sign == SIGINT)
	{
		signal(SIGINT, int_sign);
	}
}

void	quit_sign(int sign)
{
	if (sign == SIGQUIT)
		write(1, "\n", 1);
}
