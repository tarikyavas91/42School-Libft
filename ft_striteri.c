/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:58:36 by tyavas            #+#    #+#             */
/*   Updated: 2022/09/10 16:58:36 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, (s + i));
		i++;
	}
}
/* char	ft_double_pri(unsigned int i, char *c);
#include <stdio.h>
int	main(void)
{
	char	*dizi;

	dizi = "abc";
	ft_striteri(dizi, ft_double_pri);
}
char	ft_double_pri(unsigned int i, char *c)
{
	if (i % 2)
		printf(" ç_%c", *c);
	else
		printf(" t_%c", *c);
	printf("--");
} */