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


#endif
