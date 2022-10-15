/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:06:40 by tyavas            #+#    #+#             */
/*   Updated: 2022/09/11 13:06:40 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/* void free_print(void *content);
t_list	*ft_lstnew(void *content);
#include <stdio.h>
int		main(void)
{
	char strs[] = "s1";
	t_list	*first;
	
	first = ft_lstnew(strs);
	printf("firs adresi : %#p\n", first);
	printf("firs verisi : %s\n", first->content);
	ft_lstdelone(first, free_print);
}
void free_print(void *content)
{
	content = "a";
	printf("liste atanan eleman eleman %s\n", (char *)content);
}
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
} */