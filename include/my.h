/*
** EPITECH PROJECT, 2024
** B-CPE-110-RUN-1-1-secured-marya.madi
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include "hashtable.h"

typedef struct Node {
    int key;
    char *value;
    struct Node *next;
} Node;

typedef int (*factors)(va_list);
typedef struct type_t {
    char c;
    factors function;
} type_t;

void free_data_list(hashtable_t *tab, Node **list, char *value);
void disp_linked_list(Node **curr, hashtable_t **tab, int *i);
void free_linked_list(Node **list);
void delete_hashtable(hashtable_t *ht);
void insert_begin(Node **list, int key, char *value);
int my_put_nbr(int nb);
int my_putchar_error(char c);
char **my_str_to_word_array(char *str);
char *my_strndup(char *src, int n);
char *my_strdup(char *src);
int my_strcmp(char const *s1, char const *s2);
int my_putstr(char const *str);
int my_putchar(char c);
int my_putchar_error(char c);
int my_put_nbr(int nb);
int get_size(char const *str);
int my_strlen(char *str);
int execute(float right, int cmp);
int display(int cmp, int dec, int len, double x);
int verify(double x, int len);
int neg(double *x, int *left, int *len);
int my_float(double x, int precision);
char *my_free(char *str);
int my_printf(const char *format, ...);
int my_putnbr_base(long long nbr, char *base);
int my_scienty_maj(double x);
int last_num(double *x, int *cmp);
int display_1(int x, int cmp, int len);
int my_scienty(double x);
int parse_tab(char c, va_list list);
int type_x(va_list list);
int type_majx(va_list list);
int type_o(va_list list);
int type_b(va_list list);
int type_u(va_list list);
int type_f(va_list list);
int type_p(va_list list);
int type_e(va_list list);
int type_maje(va_list list);
#endif /* !MY_H_ */
