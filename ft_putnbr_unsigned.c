/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivinska <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:10:01 by sivinska          #+#    #+#             */
/*   Updated: 2018/04/25 13:27:33 by sivinska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	i;
	char			str;

	i = n;
	str = i % 10 + '0';
	if (i > 9)
		ft_putnbr(i / 10);
	ft_putchar(str);
}
