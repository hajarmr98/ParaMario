/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:40:57 by hmrabet-          #+#    #+#             */
/*   Updated: 2020/12/06 12:15:30 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int dup1;
	int dup2;

	dup1 = 00;
	dup2 = 00;
	while (dup1 <= 98)
	{
		dup2 = dup1 + 1;
		while (dup2 <= 99)
		{
			ft_putchar(dup1 / 10 + '0');
			ft_putchar(dup1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(dup2 / 10 + '0');
			ft_putchar(dup2 % 10 + '0');
			if (dup1 < 98)
				write(1, ", ", 2);
			dup2++;
		}
		dup1++;
	}
}
