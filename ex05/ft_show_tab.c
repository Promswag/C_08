/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:04:23 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/26 11:40:42 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_scale(int nb)
{
	int	scale;

	scale = 1;
	while (nb > 9)
		scale *= 10;
	return (scale);
}

void	ft_putnbr(int nb)
{
	int	scale;

	scale = ft_scale(nb);
	while (scale != 0)
	{
		ft_putchar(nb / scale % 10 + 48);
		scale = scale / 10;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (*(par->str) == 0)
		return ;
	write(1, par->str, par->size);
	write(1, "\n", 1);
	ft_putnbr(par->size);
	write(1, "\n", 1);
	write(1, par->copy, ft_strlen(par->copy));
	write(1, "\n", 1);
}
