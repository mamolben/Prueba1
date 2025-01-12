/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marimoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:08:33 by marimoli          #+#    #+#             */
/*   Updated: 2024/12/28 16:54:11 by marimoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*resul;
	size_t				len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	resul = (char *)malloc((len + 1) * sizeof(char));
	if (!resul)
		return (NULL);
	i = 0;
	while (s[i])
	{
		resul[i] = f(i, s[i]);
		i++;
	}
	resul[i] = '\0';
	return (resul);
}
