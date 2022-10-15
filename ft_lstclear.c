/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:45:00 by tyavas            #+#    #+#             */
/*   Updated: 2022/09/11 13:45:00 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}
/* void free_print(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
#include <stdio.h>
int		main(void)
{
	char *strs[2];
	strs[0] = "s1";
	strs[1] = "s2";
	t_list	*first;
	t_list	*list;
	
	first = ft_lstnew(strs[0]);
	list = ft_lstnew(strs[1]);
	printf("firs adresi : %#p\n", first);
	printf("list adresi : %#p\n", list);
	ft_lstadd_back(&list,first);
	ft_lstclear(&list, free_print);
	printf("list adresi : %#p\n", list);
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	tmp = *lst;
	if (!tmp)
	{
		*lst = new;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
void free_print(void *content)
{
	content = NULL;
	printf("listeden silinen eleman değilşkeni kontrol %s\n", (char *)content);
}
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
} */