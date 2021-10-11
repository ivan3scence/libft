/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_functions1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:23:47 by sdonny            #+#    #+#             */
/*   Updated: 2021/10/11 18:31:18 by sdonny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(lst && new))
		return ;
	if (*lst)
	{
		*lst = ft_lstlast(*lst);
		(*lst)->next = new;
	}
	else
		*lst = new;
}

void	ft_lstdelone(t_list	*lst, void	(*del)(void	*))
{
	if (!lst)
		return ;
	del(lst->content);
	lst->next = NULL;
	free(lst);
}

void	ft_lstiter(t_list	*lst, void	(*f)(void	*))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void	ft_lstclear(t_list	**lst, void	(*del)(void	*))
{
	t_list	*elem;
	t_list	*elemm;

	elem = *lst;
	while (elem)
	{
		elemm = elem->next;
		ft_lstdelone(elem, del);
		elem = elemm;
	}
	*lst = NULL;
}

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void	*), void	(*del)(void	*))
{
	t_list	*elem;
	t_list	**bl;	

	elem = (t_list *) malloc(sizeof(t_list));
	if (!elem)
		return (0);
	bl = &elem;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem)
			ft_lstadd_back(bl, elem);
		else
		{
			ft_lstclear(bl, del);
			return (0);
		}
		lst = lst->next;
	}
	return (*bl);
}
