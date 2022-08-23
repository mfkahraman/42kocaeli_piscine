/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:05:59 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/11 19:06:01 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_calculator(int nb1, char op, int nb2)
{
	int long	rt;

	rt = 0;
	if (op == '+')
		rt = nb1 + nb2;
	if (op == '-')
		rt = nb1 - nb2;
	if (op == '*')
		rt = nb1 * nb2;
	if (op == '/')
	{
		if (nb2 == 0)
			return (ft_putstr("Stop : division by zero\n"));
		rt = nb1 / nb2;
	}
	if (op == '%')
	{
		if (nb2 == 0)
			return (ft_putstr("Stop : modulo by zero\n"));
		rt = nb1 % nb2;
	}
	ft_putnbr(rt);
	ft_putchar('\n');
}
