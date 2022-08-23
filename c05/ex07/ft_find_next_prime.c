/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:09:52 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/04 19:38:42 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= (nb / 2) && i <= 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb < 2147483647 && !is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_find_next_prime(120));
}
*/
