#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct		s_btree
{
	void			*content;
	size_t			content_size;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

t_btree				*ft_btreenew(void *content, size_t content_size);
void				ft_btree_apply_prefix(t_btree *root, void (*applyf)(t_btree*));
void				ft_btree_apply_infix(t_btree *root, void (*applyf)(t_btree*));
void				ft_btree_apply_suffix(t_btree *root, void (*applyf)(t_btree*));
void	ft_btreeadd(t_btree **root, t_btree *new,
					int (*cmpf)(t_btree*, t_btree*));
void			ft_btreedelone(t_btree **btree, void (*del)(void *, size_t));
#endif
