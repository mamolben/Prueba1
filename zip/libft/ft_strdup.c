/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marimoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:09:23 by marimoli          #+#    #+#             */
/*   Updated: 2024/12/12 19:08:57 by marimoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	newstr = malloc(len + 1);
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s, len + 1);
	return (newstr);
}
