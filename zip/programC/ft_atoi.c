/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marimoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:07:36 by marimoli          #+#    #+#             */
/*   Updated: 2024/12/06 15:14:04 by marimoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int     ft_atoi(const char *s)
{
        int     num;
        int     sign;

        num = 0;
        sign = 1;
        while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == '\f' || *s == '\v')
        {
                s++;
        }
        if (*s == '-' || *s == '+')
        {
                if (*s == '-')
                        sign = -1;
        }
        s++;
        while (*s >= '0' && *s <= '9')
        {
                num = num * 10 + (*s - '0');
                s++;

        }
        return (num * sign);
}

int	main()
{
	const char *str = " -123 abc";
	int num = ft_atoi(str);
	printf ("El número es: %d\n", num);
	return (0);
}
