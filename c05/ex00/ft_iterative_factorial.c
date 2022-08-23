/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:54:41 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/03 10:55:37 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	result = nb;
	while (nb - i > 1)
	{
		result *= (nb - i);
		i++;
	}
	return (result);
}
/*
int main ()
{
	int x = ft_iterative_factorial(0);
	printf("%d",x);
}
*/
