/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:08:14 by tyavas            #+#    #+#             */
/*   Updated: 2022/10/11 15:40:21 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *) malloc (ft_strlen(s) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char ft_double(unsigned int, char);
int	ft_strlen(const char *);
#include <stdio.h>
int	main(void)
{
	char a[] = "kkkkk";
	char *b;
	b = ft_strmapi(a, ft_double);
	printf("%s", b);
}
char ft_double(unsigned int i, char c)
{
	if (i % 2)
		return(c + 1);
	else
		return(c - 1);
}
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
} */
