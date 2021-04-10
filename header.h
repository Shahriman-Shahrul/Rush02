#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>



char	*read_dict(char *d);  //read file
int		error_check(int argc, char *str); //error handleer
void	print_error(char *err); //print error
int		ft_is_number(char *str); //check if valid digit


int		dict(char *dictionary, char *str);
char	**allocation(char *a);
char	**do_your_job(char *arg, char **arr, int leng, int first);
char	**copy_dict(char *dictionary); //copied to this location from 
int		validate_word(char *str); //char reader

char	**creation_arr(char *buf);  // allo block
int		row_count(char *buf);//row scanner
int		ft_strcmp(char *s1, char *s2); //returns a negative, zero, or positive integer depending on whether the object pointed to by s1 is less than, equal to, or greater than the object pointed to by s2.
char	*ft_strdup(char *src); //duplicate string and freenig
void	typeord(char **a, int count, int max, int i); //break loop

void	validate_data(char *n, char **word, int count);  //caalls out digit to check
void	validate_1(char **arr, char digit, int count);
void	validate_2(char **arr, char *digits, int count);
void	validate_3(char **arr, char digit, int count);
int		calculate(char *s);

char	*ft_atoi(char **a, int leng, char *find);  //find if 
int		ft_strlen(char *str); //print string length
char	*ft_strcpy(char *dest, char *src); //copy string

#endif