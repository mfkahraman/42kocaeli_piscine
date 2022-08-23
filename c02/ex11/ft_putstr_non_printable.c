/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:13:40 by mukahram          #+#    #+#             */
/*   Updated: 2022/07/30 17:07:46 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(int x)
{
	char	*alpha;

	alpha = "0123456789abcdef";
	write(1, &alpha[x / 16], 1);
	write(1, &alpha[x % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
