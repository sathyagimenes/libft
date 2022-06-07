/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:51:07 by sde-cama          #+#    #+#             */
/*   Updated: 2022/05/13 02:53:57 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*full_str;
	size_t	size_s1;
	size_t	size_s2;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	full_str = malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (full_str == NULL)
		return (NULL);
	ft_strlcpy(full_str, s1, size_s1 + 1);
	ft_strlcat(full_str, s2, size_s2 + size_s1 + 1);
	return (full_str);
}
