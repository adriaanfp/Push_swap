/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflores- <aflores-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:46:06 by aflores-          #+#    #+#             */
/*   Updated: 2025/01/05 15:13:32 by aflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#   define PUSH_SWAP_H

#   include <stddef.h>
#   include <stdio.h>
#   include <stdlib.h>
#   include <unistd.h>
#   include <limits.h>
#   include <stdbool.h>
#   include "libft/ft_printf.h"
#   include "libft/libft.h"

typedef struct s_stack_node
{
    int     nbr;
    int     index;
    int     push_cost;
    bool    above_median;
    bool    cheapest;
    struct s_stack_node *target_node;
    struct s_stack_node *next;
    struct s_stack_node *prev;
}   t_stack_node;

void         current_index(t_stack_node *stack);
void         set_cheapest(t_stack_node *stack);
void         init_nodes_a(t_stack_node *a, t_stack_node *b);
void         init_nodes_b(t_stack_node *a, t_stack_node *b);
void         rb(t_stack_node **b, bool print);
void         rr(t_stack_node **a, t_stack_node **b, bool print);
void         rotate_both(t_stack_node **a, t_stack_node **b,
                     t_stack_node *cheapest_node);
void         sort_stacks(t_stack_node **a, t_stack_node **b);
void         sort_three(t_stack_node **a);
void         init_stack_a(t_stack_node **a, char **argv);
void         prep_for_push(t_stack_node **stack, 
                        t_stack_node *top_node, char stack_name);
bool         stack_sorted(t_stack_node *stack);
t_stack_node *find_min(t_stack_node *stack);
int	         stack_len(t_stack_node *stack);
t_stack_node *find_last(t_stack_node *stack);
t_stack_node *find_max(t_stack_node *stack);
void         rra(t_stack_node **a, bool print);
void         rrb(t_stack_node **b, bool print);
void         rrr(t_stack_node **a, t_stack_node **b, bool print);
void         sa(t_stack_node **a, bool print);
void         sb(t_stack_node **b, bool print);
void         ss(t_stack_node **a, t_stack_node **b, bool print);
void         pa(t_stack_node **a, t_stack_node **b, bool print);
void         pb(t_stack_node **a, t_stack_node **b, bool print);
t_stack_node *get_cheapest(t_stack_node *stack);
int          syntax_error(char *str_n);
int          duplicate_error(t_stack_node *a, int n);
void         free_stack(t_stack_node **stack);
void         free_errors(t_stack_node **a);

#endif
