/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:14:32 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/11 19:14:34 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		while (argv[2][i])
			i++;
		if ((argv[2][0] == '+' || argv[2][0] == '-'
			|| argv[2][0] == '/' || argv[2][0] == '*'
			|| argv[2][0] == '%') && i == 1)
		{
			ft_calculator(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
		}
		else
		{
			ft_putchar('0');
			ft_putchar('\n');
		}
	}
	return (0);
}
