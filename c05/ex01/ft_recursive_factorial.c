/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:20:49 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/03 20:22:01 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	rs;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	rs = 1;
	if (nb > 1)
	{
		rs = nb * ft_recursive_factorial(nb - 1);
	}
	return (rs);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_recursive_factorial(1));
}
*/
