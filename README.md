<div align=center>

[![](./img/libft_light.svg)](#)

[![](./img/42pdh_badge.svg)](https://github.com/gawbsouza/42-pdh)

</div>

---

> 🏆 Esse código-fonte também inlclui a parte bônus do projeto.

---

> ## 🎠 Norma / Norminette
> Toda a codificação do código-fonte desse projeto está seguindo a especificação da [Norma 3.3.x](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) e foi devidamente testado e aprovado pela [Norminette](https://github.com/42School/norminette). Não estranhe se o estilo ao qual o código foi desenvolvido pareça diferente pra você, ele só segue o estilo da 42 😀.

---

## O que é a libft?
A libft é uma biblioteca estática de uso geral, escrita em C com a principal finalidade de ser utilizada nos projetos da [École 42](https://42.fr/en/homepage/).

## Pré-requisitos
Para conseguir compilar corretamente a biblioteca, o seu sistema necessitará previamente ter instalado e configurado as seguintes ferramentas:

- [gcc (GNU C Compiler)](https://gcc.gnu.org/)  
- [make (GNU Make)](https://www.gnu.org/software/make/)

## Compilação
 Para este projeto, há três possibilidades para compilação da biblioteca, parte mandatória, parte bônus, e ambas partes juntas.

### Parte mandatória
Basta chamar o Make sem especificar nenhuma regra ou utilizar a regra `all` do Make:
```bash
 make all
```
### Parte bônus
Basta chamar a regra `bonus` do Make:
```bash
make bonus
```
### Parte mandatória e bônus juntas
Para projetos onde se é necessário utilizar as funções da parte mandatória e bônus juntas, a regra `both` do Make permite essa facilidade na compilação:
```bash
make both
```
Se tudo ocorrer corretamente será gerado o arquivo *libft.a*.  

Para remover os objetos temporários (arquivos `.o`) 
que foram utilizados na compilação, chame novamentente o make:
```bash
make clean
```
## Outras regras diponíveis no Make
Foram criadas mais algumas regras no Make para faciliar a manipulação do projeto:

- `make` ou `make all`: compila os arquivos de código-fonte (arquivos `.c`) gerando os objetos (arquivos `.o`) e cria o arquivo *libft.a*.  
- `make clean`: remove todos os objetos temporários gerados durante a fase de compilação do código-fonte.   
- `make fclean`: remove os objetos temporários e também o arquivo libft.a.  
- `make re`: remove todos os objetos temporários, o arquivo *libft.a* e refaz novamente o processo de compilação.  

## Como utilizar libft em seu projeto
### Adicione o header
Adicione o *libft.h* no início do código-fonte onde pretende utilizar as funções da biblioteca:
```c
#include "libft.h"

void main()
{
	...
}
```

### Informe a localização do header na compilação
Após finalizar a codificação do seu código-fonte, temos a parte de compilação dos objetos, para isso será preciso informar ao compilador onde está localizado o header (libft.h).  
Para informar a localização do header utilize a flag `-I` do gcc e adicione a localização do arquivo *libft.h*, assim a compilação poderá ocorrer sem problemas.
```bash
gcc -I ./libft_folder/inc -c my_code.c
```
### Informe a localização do arquivo libft.a na linkagem
Após a compilação dos objetos é hora de fazer a linkagem, para isso é necessário informar também a localização do arquivo *libft.a* e incluir sua utilização explicitamente.  
Será necessários utilizar as flags `-l` e `-L` do gcc, `-l` para incluir a utilização da biblioteca explicitamente e `-L` para informar a localização do arquivo *.a*
```bash
gcc my_code.o -L libft_folder -l ft
```
Agora é só utilizá-la em suas aplicações!

## Funções disponíveis na libft
Abaixo temos a listagem e descrição de todas as funções disponíveis na libft para você utilizar em seus projetos:

### Funções validadoras de caracteres
- [int ft_isalpha(int c)](./src/ft_isalpha.c)   
- [int ft_isdigit(int c)](./src/ft_isdigit.c) 
- [int ft_isalnum(int c)](./src/ft_isalnum.c) 
- [int ft_isascii(int c)](./src/ft_isascii.c) 
- [int ft_isprint(int c)](./src/ft_isprint.c) 

### Funções manipuladoras de caracteres
- [int ft_toupper(int c)](./src/ft_toupper.c)
- [int ft_tolower(int c)](./src/ft_tolower.c)


### Funções para trabalhar com strings
- [size_t ft_strlen(const char \*str)](./src/ft_strlen.c) 
- [char \*ft_strdup(const char \*str)](./src/ft_strdup.c) 
- [char \*ft_strchr(const char \*str, int c)](./src/ft_strchr.c) 
- [char \*ft_strrchr(const char \*str, int c)](./src/ft_strrchr.c) 
- [int ft_strncmp(const char \*str1, const char \*str2, size_t c)](./src/ft_strncmp.c) 
- [size_t ft_strlcpy(char \*dst, const char \*src, size_t size)](./src/ft_strlcpy.c) 
- [size_t ft_strlcat(char \*dst, const char \*src, size_t size)](./src/ft_strlcat.c) 
- [char \*ft_strnstr(const char \*big, const char \*little, size_t len)](./src/ft_strnstr.c) 
- [char \*ft_strtrim(const char \*str, const char \*set)](./src/ft_strtrim.c) 
- [char \*ft_substr(const char \*str, unsigned int start, size_t len)](./src/ft_substr.c) 
- [char \*ft_strjoin(const char \*str1, const char \*str2)](./src/ft_strjoin.c) 
- [char \*\*ft_split(const char \*str, char c)](./src/ft_split.c) 
- [void ft_striteri(char \*str, void (\*f)(unsigned int, char \*))](./src/ft_striteri.c) 
- [char \*ft_strmapi(const char \*str, char (\*f)(unsigned int, char))](./src/ft_strmapi.c) 

### Funções para trabalhar com inteiros
- [int ft_atoi(const char \*str)](./src/ft_atoi.c) 
- [char \*ft_itoa(int n)](./src/ft_itoa.c) 

### Funções para manipular diretamente a memória
- [void ft_bzero(void \*mem, size_t n)](./src/ft_bzero.c)
- [void \*ft_calloc(size_t nmemb, size_t size)](./src/ft_calloc.c) 
- [int ft_memcmp(const void \*mem1, const void \*mem2, size_t n)](./src/ft_memcmp.c) 
- [void \*ft_memcpy(void \*mem1, const void \*mem2, size_t n)](./src/ft_memcpy.c) 
- [void \*ft_memmove(void \*dst, const void \*src, size_t n)](./src/ft_memmove.c) 
- [void \*ft_memchr(const void \*mem, int c, size_t n)](./src/ft_memchr.c) 
- [void \*ft_memset(void \*mem, int c, size_t n)](./src/ft_memset.c) 

### Funções para impressão de strings
- [void ft_putchar_fd(char c, int fd)](./src/ft_putchar_fd.c) 
- [void ft_putnbr_fd(int n, int fd)](./src/ft_putnbr_fd.c) 
- [void ft_putstr_fd(char \*str, int fd)](./src/ft_putstr_fd.c) 
- [void ft_putendl_fd(char \*str, int fd)](./src/ft_putendl_fd.c) 

### Funções para trabalhar com listas linkadas
- [t_list \*ft_lstnew(void \*content)](./src/ft_lstnew.c) 
- [void ft_lstadd_front(t_list \*\*lst, t_list \*new)](./src/ft_lstadd_front.c) 
- [void ft_lstadd_back(t_list \*\*lst, t_list \*new)](./src/ft_lstadd_back.c) 
- [int ft_lstsize(t_list \*lst)](./src/ft_lstsize.c) 
- [t_list \*ft_lstlast(t_list \*lst)](./src/ft_lstlast.c) 
- [void ft_lstdelone(t_list \*lst, void (\*del)(void \*))](./src/ft_lstdelone.c) 
- [void ft_lstclear(t_list \*\*lst, void (\*del)(void \*))](./src/ft_lstclear.c) 
- [void ft_lstiter(t_list \*lst, void (\*f)(void \*))](./src/ft_lstiter.c) 
- [t_list \*ft_lstmap(t_list \*lst, void \*(\*f)(void \*), void (\*del)(void \*))](./src/ft_lstmap.c) 

## Licença
Esse projeto está sob a licença [MIT](https://opensource.org/license/mit/).
