/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkanhais <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 14:47:01 by jkanhais      #+#    #+#                 */
/*   Updated: 2022/09/01 18:17:33 by jkanhais      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = src[a];
	return (dest);
}

int main(void)
{
	char dest[10] = "help";
	char src[10] = "me";

	printf("%s", ft_strcpy(dest,src));
	return(0);
}
