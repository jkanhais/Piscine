/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkanhais <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/12 12:47:05 by jkanhais      #+#    #+#                 */
/*   Updated: 2022/08/27 17:56:13 by jkanhais      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int	main(void)
{
	ft_print_alphabet();
}*/

void	ft_print_alphabet(void)
{	
	int	i;

	i = 'a';
	while (i >= 'a' && i <= 'z')
	{	
		write(1, &i, 1);
		i++;
	}	
}

/*int main(void)
{
	ft_print_alphabet();
}*/
