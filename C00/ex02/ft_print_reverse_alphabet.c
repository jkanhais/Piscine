/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkanhais <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/12 13:33:07 by jkanhais      #+#    #+#                 */
/*   Updated: 2022/08/27 14:57:58 by jkanhais      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

int	main(void)
{
	ft_print_reverse_alphabet();
}*/

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'z';
	while (i <= 'z' && i >= 'a')
	{
		write (1, &i, 1);
		i--;
	}
}

/*int main(void)
{
	ft_print_reverse_alphabet();
}*/
