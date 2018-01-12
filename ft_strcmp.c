/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivinska <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:25:03 by sivinska          #+#    #+#             */
/*   Updated: 2017/11/29 18:27:56 by sivinska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		i = (unsigned char)*s1 - (unsigned char)*s2;
		if (i != 0)
			return (i);
		s1++;
		s2++;
	}
	return (0);
}
