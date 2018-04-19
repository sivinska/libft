/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_base_long.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivinska <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 18:16:48 by sivinska          #+#    #+#             */
/*   Updated: 2018/04/19 18:19:57 by sivinska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		base_lenght(long int nbr, int base)
{
	int		i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr /= base;
	}
	return (i);
}

static char*	generate_base(int base)
{
	char		*ret;
	int 		i;

	ret = ft_strnew(base);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < base)
	{
		if (i < 10)
			ret[i] = i + '0';
		else
			ret[i] = i + 87;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char		*ft_convert_to_base_long(long int nbr, int base)
{
	char	*ret;
	char	*charset;
	int		len;
	int		tmp;
	int		i;

	if (base < 2 || base > 36)
		return (NULL);
	len = base_lenght(nbr, base);
	if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	charset = generate_base(base);
	if (!charset)
		return (NULL);
	i = len - 1;
	while (nbr != 0)
	{
		tmp = nbr % base;
		nbr /= base;
		ret[i] = charset[tmp];
		i--;
	}
	ret[len] = '\0';
	if (charset)
		free(charset);
	return (ret);
}
