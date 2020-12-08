/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:17:49 by hmrabet-          #+#    #+#             */
/*   Updated: 2020/12/06 11:53:34 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x);

void	ft_print_numbers(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}

void	ft_putchar(int x)
{
	write(1, &x, 1);
}
