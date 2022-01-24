/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:33:04 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/24 19:36:14 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define EVEN_MSG "I have an even number of arguments.";
# define ODD_MSG "I have an odd number of arguments.";
# define SUCCESS 1;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
int		main(int argc, char **argv);


#endif