
![libft](./libft_light.svg)

![libft](./42pdh_badge.svg)

> 🏆 Esse código-fonte também inlclui a parte bônus do projeto.

---

## O que é a libft?
A libft é uma biblioteca estática de uso geral escrita em C com a principal finalidade de ser utilizada nos projetos da École 42.

> ## 🎠 Norma / Norminette
> Toda a codificação do código-fonte desse projeto está seguindo a especificação da Norma 3.3.x e foi devidamente testado e aprovado pela Norminette. Não estranhe se o estilo ao qual o código foi desenvolvido pareça diferente pra você, ele só segue o estilo da 42 😀.

## Pré-requisitos
Para conseguir compilar corretamente a biblioteca o seu sistema necessitará ter previamente instalado e configurado os seguintes softwares:

- [gcc (GNU C Compiler)](https://gcc.gnu.org/)  
- [make (GNU Make)](https://www.gnu.org/software/make/)

## Compilação
Para a compilação da biblioteca temos algumas possibilidades, como esse projeto possui a versão bônus a etapa de compilação foi separa em duas: a parte mandatória e a parte bônus.

### Parte mandatória
Basta chamar o Make sem especificar nenhuma regra ou utilizar a regra all:
```bash
 make all
```
### Parte bônus
Basta chamar a regra bonus do Make:
```bash
make bonus
```
### Parte mandatória e bônus juntas!
Para projetos onde se é necessário utilizar as funções da parte mandatória e bônus juntas, está disponibilizado também a opção de compilar ambas de uma única vez, para isso utilize a regra both do Make:
```bash
make both
```
Se tudo ocorrer corretamente será gerado o arquivo *libft.a*. Para remover os objetos temporários que foram utilizados na compilação, chame novamentente o make:
```bash
make clean
```
## Outras regras Make disponíveis
Foram criadas algumas regras no Make para faciliar a manipulação do projeto:

`make` ou `make all`: compila os objetos do código-fonte e cria o arquivo *libft.a*.  
`make clean`: remove todos os objetos temporários gerados durante a fase de compilação do código-fonte (arquivos *.o).   
`make fclean`: remove os objetos temporários e também o arquivo libft.a.  
`make re`: remove todos os objetos temporários, o arquivo *libft.a* e refaz novamente o processo de compilação.  

## Como utilizar em seu projeto
### Adicione o header (libft.h)
Adicione o *libft.h* no início do código-fonte onde pretende utilizar as funções biblioteca:
```c
#include "libft.h"

void main()
{
	...
}
```

### Informe a localização do header na compilação
Após finalizar a codificação do seu código-fonte é necessário adicionar mais um estapa antes de compilar, é preciso informar para o compilador onde está localizado o *libft.h* (isso pode ser ignorado caso o arquivo estava no mesmo diretório do seu código-fonte). Para informar a localização do arquivo utilize a flag `-I` do gcc e adicione em seguida a localização do arquivo *libft.h*
```bash
gcc -I ./libft_folder/inc -c my_code.c
```
### Informe a localização do arquivo libft.a na linkagem
Após a compilação dos objetos é hora de fazer a linkagem, para isso é necessário informar também a localização do arquivo libft.a e incluir sua utilização explicitamente. Para isso será necessários utilizar as flags `-l` e `-L` do gcc, `-l` para incluir a utilização da biblioteca e `-L` para informar a localização do arquivo *.a*
```bash
gcc my_code.o -L libft_folder -l ft
```
Agora é só utilizá-la em suas aplicações!

## Funções disponíveis na libft
Abaixo temos a listagem e descrição de todas as funções disponíveis na libft para você utilizar em seus projetos:

### Funções validadoras de caracteres
`int ft_isalpha(int c)`  
`int ft_isdigit(int c)`  
`int ft_isalnum(int c)`  
`int ft_isascii(int c)`  
`int ft_isprint(int c)`  

### Funções manipuladoras de caracteres
`int ft_toupper(int c)`  
`int ft_tolower(int c)`  

### Funções para trabalhar com strings
`size_t ft_strlen(const char *str)`  
`char *ft_strdup(const char *str)`  
`char *ft_strchr(const char *str, int c)`  
`char *ft_strrchr(const char *str, int c)`  
`int ft_strncmp(const char *str1, const char *str2, size_t c)`  
`size_t ft_strlcpy(char *dst, const char *src, size_t size)`  
`size_t ft_strlcat(char *dst, const char *src, size_t size)`  
`char *ft_strnstr(const char *big, const char *little, size_t len)`  
`char *ft_strtrim(const char *str, const char *set)`  
`char *ft_substr(const char *str, unsigned int start, size_t len)`  
`char *ft_strjoin(const char *str1, const char *str2)`  
`char **ft_split(const char *str, char c)`  
`void ft_striteri(char *str, void (*f)(unsigned int, char *))`  
`char *ft_strmapi(const char *str, char (*f)(unsigned int, char))`  

### Funções para trabalhar com inteiros
`int ft_atoi(const char *str)` 
`char *ft_itoa(int n)` 

### Funções para manipular diretamente a memória
`void ft_bzero(void *mem, size_t n); void *ft_calloc(size_t nmemb, size_t size)` 
`int ft_memcmp(const void *mem1, const void *mem2, size_t n)`  
`void *ft_memcpy(void *mem1, const void *mem2, size_t n)`  
`void *ft_memmove(void *dst, const void *src, size_t n)`  
`void *ft_memchr(const void *mem, int c, size_t n)`  
`void *ft_memset(void *mem, int c, size_t n)`  

### Funções para impressão de strings
`void ft_putchar_fd(char c, int fd)`  
`void ft_putnbr_fd(int n, int fd)`  
`void ft_putstr_fd(char *str, int fd)`  
`void ft_putendl_fd(char *str, int fd)`  

### Funções para trabalhar com listas linkadas
`t_list *ft_lstnew(void *content); void ft_lstadd_front(t_list **lst, t_list *new)`  
`int ft_lstsize(t_list *lst)`  
`t_list *ft_lstlast(t_list *lst)`  
`void ft_lstadd_back(t_list **lst, t_list *new)`  
`void ft_lstdelone(t_list *lst, void (*del)(void *))`  
`void ft_lstclear(t_list **lst, void (*del)(void *))`  
`void ft_lstiter(t_list *lst, void (*f)(void *))`  
`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`  

Licença
Esse projeto está sob a licença [MIT](https://opensource.org/license/mit/).
