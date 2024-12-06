/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marimoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:54:58 by marimoli          #+#    #+#             */
/*   Updated: 2024/12/04 19:34:38 by marimoli         ###   ########.fr       */
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
		write(1, str, 1);
		str++;
	}
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	main(void)
{
	char	c;
	char	test_chars[] = "a1$2c";
	int	i;

	i = 0;
	while (test_chars[i] != '\0')
	{	
		c = test_chars[i];
		if (ft_isdigit(c))
		{
			ft_putchar(c);
			ft_putstr(" es un dígito\n");
		}
		else
		{
			ft_putchar(c);
			ft_putstr(" no es un número\n");
		}
		i++;
	}
	return (0);
}
