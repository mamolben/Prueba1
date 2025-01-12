/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marimoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:28:07 by marimoli          #+#    #+#             */
/*   Updated: 2024/12/13 13:46:08 by marimoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*resul;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	resul = malloc(len1 + len2 + 1);
	if (!resul)
		return (NULL);
	ft_strlcpy(resul, s1, len1 + 1);
	ft_strlcpy(resul + len1, s2, len2 + 1);
	return (resul);
}
