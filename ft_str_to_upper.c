/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivinska <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 18:20:38 by sivinska          #+#    #+#             */
/*   Updated: 2018/04/19 18:21:42 by sivinska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_str_to_upper(char *str)
{
	char 	*cpy;

	cpy = str;
	if (!cpy)
		return (NULL);
	while (*cpy)
	{
		*cpy = ft_toupper(*cpy);
		cpy++;
	}
	return (str);
}
