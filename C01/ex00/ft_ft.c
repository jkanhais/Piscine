/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkanhais <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/30 19:46:51 by jkanhais      #+#    #+#                 */
/*   Updated: 2022/08/30 22:00:29 by jkanhais      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
	int	main(void)
{	
	int a;
	int *nbr;

	a = 0;
	nbr = &a;
	ft_ft(&a);
	printf("%d", a);
	return (0);
}
*/
