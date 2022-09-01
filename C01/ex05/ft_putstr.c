/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkanhais <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/31 17:39:54 by jkanhais      #+#    #+#                 */
/*   Updated: 2022/08/31 22:53:25 by jkanhais      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, (str + i), 1);
		i++;
	}
}

/*
int main()
{
	char *str = "dit duurt te lang";
	ft_putstr(str);
}
*/
