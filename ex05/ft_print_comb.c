/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:34:27 by hmrabet-          #+#    #+#             */
/*   Updated: 2020/11/30 15:34:31 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	print_trios(char x, char y, char z);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				if (!(a == b || b == c || c == a))
				{
					print_trios(a, b, c);
				}
				c++;
			}
			c = b + 1;
			b++;
		}
		b = a + 1;
		a++;
	}
}

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	print_trios(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	x == '7' && y == '8' && z == '9' ? write(1, "", 0) : write(1, ", ", 2);
}
