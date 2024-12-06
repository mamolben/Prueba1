/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marimoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:15:53 by marimoli          #+#    #+#             */
/*   Updated: 2024/12/06 12:37:17 by marimoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	longitud = 0;
	while (s[longitud] != '\0')
	{
		longitud++;
	}
	return (longitud);
}

int main()
{
	char	palabra[30] = "Lee cadena devuelve un número";
	size_t	longitud = ft_strlen(palabra);
	printf("La longitud de la palabra es: %zu\n", longitud);
	return (0);
}
