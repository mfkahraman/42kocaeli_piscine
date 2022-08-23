/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:31:26 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/12 01:23:36 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	index;
	int	i;

	i = 0;
	while (tab[i])
	{
		index = 0;
		while (tab[index])
		{
			if (tab[index + 1] && (*cmp)(tab[index], tab[index + 1]) > 0)
				ft_swap(&tab[index], &tab[index + 1]);
			index++;
		}
		i++;
	}
}
/*
int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

#include <unistd.h>
void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
#include <stdlib.h>
int	main()
{
	int	i;
	int (*p_f)(char *, char *) = ft_strcmp;
	char **tab;
	tab = malloc(7);
	tab[0] = "11";
	tab[1] = "14";
	tab[2] = "10";
	tab[3] = "12";
	tab[4] = "15";
	tab[5] = "13";
	tab[6] = NULL;
	i = 0;
	ft_advanced_sort_string_tab(tab, p_f);
	while (tab[i])
	{
		putstr(tab[i]);
		i++;
	}
	return (0);
}
*/
