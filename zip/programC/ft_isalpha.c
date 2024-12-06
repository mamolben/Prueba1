/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marimoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:23:33 by marimoli          #+#    #+#             */
/*   Updated: 2024/12/04 19:37:30 by marimoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	main(void)
{
	char	c;
	char	test_chars[] = "Ab123#";
	int	i;

	i = 0;
	while (test_chars[i] != '\0')
	{
		c = test_chars[i];
		if (ft_isalpha(c))
		{
			ft_putchar(c);
			ft_putstr(" es una letra\n");
		}
		else
		{
			ft_putchar(c);
			ft_putstr(" No es letra\n");
		}
		i++;	
	}
	return (0);
}
