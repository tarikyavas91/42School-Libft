/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:37:19 by tyavas            #+#    #+#             */
/*   Updated: 2022/09/10 22:37:19 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
#include <stdio.h>
int		main(void)
{
	char *strs[2];
	strs[0] = "selam";
	t_list	*first;
	t_list	*list;
	
	first = ft_lstnew((void *)strs[0]);
	list = ft_lstnew((void *)strs[0]);
	ft_lstadd_front(&list, first);
	printf("%d", ft_lstsize(first));
}
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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