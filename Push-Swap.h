/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push-Swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:57:10 by abelache          #+#    #+#             */
/*   Updated: 2021/12/14 16:53:19 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void    ft_swapa(int *a, int *b);
void	ft_swapb(int *a, int *b);
void    ft_ss(int *aa, int *ab, int *ba, int *bb);
void    ft_putstr(char *s);
void    ft_pusha(int *sb, int *sa);
void    ft_pushb(int *sa, int *sb);
void    ft_rotatea(int *Pilea, size_t len);
void    ft_rotateb(int *Pilea, size_t len);
void    ft_rr(int *Pilea, int *Pileb, size_t lena , size_t lenb);
void    ft_rotatereva(int *Pilea, size_t len);
void    ft_rotaterevb(int *Pileb, size_t len);
void    ft_rotatereval(int *Pilea, int *Pileb, size_t lena, size_t lenb);
int     ft_isalnum(int c);
int     ft_atoi(const char *str);
int     checkarg(char **argv);
int     *initab(size_t len);
void	*ft_calloc(int nmemb, size_t size);
void    freetab(int *taba, int *tabb);
void	ft_putstr(char *s);
int     verinf(int *tab, int i, int len);
int     vertri(int *tab, int len);
int     ft_sort_int_tab(int *tab, int size);
int     verrinf(int *tab, int i, int len);
void    ft_start(int *taba, int *tabb, int len);
void	ft_bzero(void *s, int n);
void    ft_sepmed(int *taba, int *tabb, int len, int med);
int     ft_find(int *taba, int *tabb, int lena, int lenb);
int     vertrib(int *tab, int len);
int     versup(int *tab, int i, int len);
void    ft_swap(int *a, int *b);
void    ft_trib(int *taba, int *tabb, int lena, int lenb);
void    fusion(int *taba, int *tabb, int lena, int lenb);
void	samy(int *taba, int *tabb, int *lena, int *lenb);

#endif