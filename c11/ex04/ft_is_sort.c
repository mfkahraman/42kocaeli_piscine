/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:37:16 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/11 22:53:17 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	if (length == 1 || length == 0)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			asc++;
		else if ((*f)(tab[i], tab[i + 1]) > 0)
			desc++;
		else
		{
			asc++;
			desc++;
		}
		i++;
	}
	if (asc == length || desc == length)
		return (1);
	return (0);
}
/*
int	is_different(int n1, int n2)
{
	return (n1 - n2);
}

#include <stdio.h>
int main()
{
	int (*p_f)(int,int) = is_different;
	int	nums[] = {5, 4, 3, 2, 3};
	int len = 5;

	printf("%d",ft_is_sort(nums, len, p_f));
}
*/
