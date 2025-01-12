/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marimoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:47:03 by marimoli          #+#    #+#             */
/*   Updated: 2024/12/07 15:34:44 by marimoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_ocurr;

	last_ocurr = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_ocurr = s;
		s++;
	}
	if (*s == (char)c)
		last_ocurr = s;
	return ((char *)last_ocurr);
}
