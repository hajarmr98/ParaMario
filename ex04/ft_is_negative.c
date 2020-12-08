/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:21:03 by hmrabet-          #+#    #+#             */
/*   Updated: 2020/12/06 11:54:56 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	ft_is_negative(int n)
{
	(n >= 0) ? ft_putchar('P') : ft_putchar('N');
}

void	ft_putchar(char x)
{
	write(1, &x, 1);
}
