/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expression.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 18:17:08 by grass-kw          #+#    #+#             */
/*   Updated: 2014/03/18 17:02:25 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EVAL_EXPRESSION_H
# define EVAL_EXPRESSION_H
# define LEFT tmp->left->str
# define RIGHT tmp->right->str

typedef struct		s_btree
{
	char			*str;
	int				key;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

typedef struct 		s_list
{
	char			*str;
	int				key;
	struct s_list	*next;
}					t_list;

/*
** fonction tools of list and btree
*/

t_btree		*ft_btree_create_node(char *str, int key);
t_btree		*ft_btree_add(t_btree *begin_btree, t_btree *new);
t_list		*ft_create_elem(char *str, int key);
void		ft_lstadd(t_list **begin_list, t_list *new);
void		ft_del_first(t_list **begin_lst);
void		ft_del_lst(t_list **begin_lst, char *str);
void		ft_lstdelete(t_list **begin_lst, char *str);

/*
** fonction print btree and list
*/

void		ft_print_list(t_list *list);
void		ft_print_btree(t_btree *root);

/*
** isnumber
*/

int			isnumber(char *str);

/*
** fonction of eval expression
*/

int 		eval_expr(char *str);
int			init_btree(char *str, t_list *list, t_btree *btree);
int			calcules_expr(t_btree *btree, int i);

#endif
