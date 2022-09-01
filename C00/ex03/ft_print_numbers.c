/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkanhais <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/12 14:00:25 by jkanhais      #+#    #+#                 */
/*   Updated: 2022/08/30 19:31:21 by jkanhais      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}*/

void	ft_print_numbers(void)
{
	int	a;

	a = '0';
	while (a >= '0' && a <= '9')
	{
		write(1, &a, 1);
		a++;
	}	
}

/*int	main(void)
{
	ft_print_numbers();
}*/
