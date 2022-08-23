/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:28:56 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/11 19:00:29 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	rt;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	rt = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		rt *= 10;
		rt += str[i] - 48;
		i++;
	}
	return (rt * sign);
}
