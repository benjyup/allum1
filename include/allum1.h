/*
** allum1.h for allum1 in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Thu Feb 18 22:54:07 2016 Peixoto Benjamin
** Last update Thu Feb 25 23:15:16 2016 Peixoto Benjamin
*/

#ifndef ALLUM1_H_
# define ALLUM1_H_

void	print_game_board(int *line);
void	print_match(int nb_match, int nb_line);
void	print_space(int nb_match, int i);
void	print_space_last(int nb_match, int i);
void	nb_of_space(int nb_space);
int	my_game(int *line);
int	how_many_line_remaining(int *line);
int	first_player(int *line);
int	what_line(int *line);
int	how_many_match(int *line, int line_choice,
		       int count_line, int nb_match);
void	how_many_match2(int *line, int nb_match, int line_choice);
int	second_player(int *line);
int	remove_all_matches(int *line, int nb_line);
int	remove_partially_matches(int *line, int nb_line);
int	computer(int *line, int count_line, int i);
int	my_match_is_a_nb(char *str, int *line, int line_choice);
int	my_match_is_a_nb2(char *str);
int	my_line_is_a_nb(char *str);

#endif /* !ALLUM1_H_ */
