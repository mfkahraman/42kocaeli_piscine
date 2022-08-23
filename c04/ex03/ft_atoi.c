/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:28:56 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/01 11:29:35 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

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
/*
int	main ()
{
	char x[] = "  --++--++3721r3234tvx";
	int	result = ft_atoi(x);
	printf("%d",result);
}
*/
