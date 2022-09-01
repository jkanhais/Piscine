/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkanhais <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:53:01 by jkanhais      #+#    #+#                 */
/*   Updated: 2022/08/27 19:55:31 by jkanhais      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (! (a == '7' && b == '8' && c == '9'))
					write(1, ", ", 2);
			c++;
			}
		b++;
		}
	a++;
	}	
}

/*int main(void)
{
	ft_print_comb();
}*/
