#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_list
{
	int				value;
	int				index;
	int				processed;
	int				pos_a;
	int				pos_b;
	int				cost_a;
	int				cost_b;
	int				target_pos;
	int				cheapest_pos;
	struct s_list	*next;
}					t_list;

int			ft_isdigit(int a);//libft
int			ft_atoi(char *str, t_list **stack_a);//libft
void		atoi_error(t_list **stack_a);
char		**ft_split(char const *s, char c);//libft
char		*malloc_str(const char *s, char c);//libft
int			ft_countstr(char const *s, char c);//libft
t_list		*ft_lstnew(int value);//libft
int			ft_lstsize(t_list *lst);//libft
t_list		*ft_lstlast(t_list *lst);//libft
bool		isempty(char *argv);
void		ft_lstadd_back(t_list **lst, t_list *new);//libft
int			pa(t_list **stack_b, t_list **stack_a);
int			pb(t_list **stack_a, t_list **stack_b);
int			rotate(t_list **stack);
int			ra(t_list **stack_a);
int			rb(t_list **stack_b);
int			rr(t_list **stack_a, t_list **stack_b);
int			reverse(t_list **stack);
int			rra(t_list **stack_a);
int			rrb(t_list **stack_b);
int			swap(t_list **stack);
int			sa(t_list **stack_a);
int			push(t_list **stack_from, t_list **stack_to);
void		index_stack(t_list **stack);
int			check_sorted(t_list **stack_a);
void		rearrange_b(t_list **stack_b, int *cost);
void		init_stack(t_list **stack_a, char **check_arguments);
void		assign_a(t_list **stack_a);
void		assign_b(t_list **stack_b);
int			find_cheapest_cost(t_list **stack_a, t_list **stack_b);
int			stack_b_cost(t_list **stack_b);
int			stack_a_cost(t_list **stack_a);
int			target(t_list **stack_a, t_list **stack_b);
void		rearrange(t_list **stack_a, t_list **stack_b, int *cheapest_pos);
void		send_to_a(t_list **stack_a, t_list **stack_b);
void		sort_large(t_list **stack_a, t_list **stack_b);
int			find_midpoint(t_list *stack);
void		push_to_b(t_list **stack_a, t_list **stack_b, int *total_nodes, int *i);
void		send_to_b(t_list **stack_a, t_list **stack_b, int *total_nodes);
void		send_to_b_by_midpoint(t_list **stack_a, t_list **stack_b);
void		sort(t_list **stack_a, t_list **stack_b);
void		sort_tatu(t_list **stack_a);
void		ft_error(void);
int			find_cheapest_pos(t_list **stack_a, t_list **stack_b);
void		sort_large(t_list **stack_a, t_list **stack_b);
int			ft_min(t_list **stack_a);
int			ft_max(t_list **stack_a);
int			find_target_index(t_list **stack_a, t_list *stack_b);
char		**check_arguments(int argc, char **argv);
bool		is_num(char *args);
void		free_tda(char **args);
void		free_error(char **args);
bool		check_dup(t_list **stack_a);
void		ft_putstr_fd(char *s, int fd);
void		*ft_calloc(size_t count, size_t size);//libft
void		*ft_memset(void *str, int c, size_t len);//libft
size_t		ft_strlen(const char *str);//libft
char		*ft_strdup(char *s1);//libft
char		*ft_strjoin(char *s1, char *s2);//libft
void		validate_args(char *args);
void		*ft_memcpy(void *dst, const void *src, size_t n);//libft
void		display_stack(t_list *stack_a);//Delete before submission
void		free_stack(t_list **stack);
bool		check_empty(char **args);
void		display_index(t_list *stack_a);
void		initialise_processor(t_list	*stack_a);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		update_index(t_list *stack_a);
void		display_pos_a(t_list *stack);
void		display_pos_b(t_list *stack);
int			rrr(t_list **stack_a, t_list **stack_b);
int			rr(t_list **stack_a, t_list **stack_b);
int			target_top(t_list **stack);
int			steps(t_list *stack_b);
void		costforb(t_list **stack_b);
void		find_cost(t_list **stack_a, t_list **stack_b);
void		display_costa(t_list *stack);
void		display_costb(t_list *stack);
int			cheapest_cost(t_list **stack_a, t_list **stack_b);
void		display_combined_costs(t_list *stack);
int			retrieve_cost_for_target(t_list *stack, int target_pos);
int			whole(t_list *stack);

#endif
