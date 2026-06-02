*Este proyecto ha sido creado como parte del currículo de 42 por margalin*

# Libft
## DESCRIPCIÓN
Libft es el primer proyecto del cursus de 42, en el que se pide crear una colección de funciones desde cero y agruparlas en una librería llamada libft que nos será útil en futuros proyectos.  Al implementar estas funciones
desde cero se comprende en profundidad cómo funcionan internamente.
Todas llevan el prefijo ft_ y reproducen el comportamiento de sus equivalentes
de la libc

### GUÍA RÁPIDA: ¿QUÉ HACE CADA FUNCIÓN Y QUÉ DEVUELVE?
**Parte 1 — Funciones de la libc**

| Función | Qué hace | Devuelve |
|---|---|---|
| `ft_isalpha` | ¿es una letra? | `int`: 1 / 0 |
| `ft_isdigit` | ¿es un dígito (0-9)? | `int`: 1 / 0 |
| `ft_isalnum` | ¿es letra o dígito? | `int`: 1 / 0 |
| `ft_isascii` | ¿está en el rango ASCII (0-127)? | `int`: 1 / 0 |
| `ft_isprint` | ¿es imprimible? | `int`: 1 / 0 |
| `ft_strlen` | longitud de la cadena | `size_t` (sin contar el `\0`) |
| `ft_memset` | rellena n bytes con un valor | puntero al bloque |
| `ft_bzero` | pone n bytes a cero | nada (`void`) |
| `ft_memcpy` | copia n bytes | puntero a `dst` |
| `ft_memmove` | copia n bytes, seguro con solapamiento | puntero a `dst` |
| `ft_strlcpy` | copia cadena con límite de buffer | `size_t`: longitud de `src` |
| `ft_strlcat` | concatena con límite de buffer | `size_t`: longitud total que intentó crear |
| `ft_toupper` | a mayúscula | `int`: el carácter convertido |
| `ft_tolower` | a minúscula | `int`: el carácter convertido |
| `ft_strchr` | primera aparición de un carácter | puntero a la posición, o `NULL` |
| `ft_strrchr` | última aparición de un carácter | puntero, o `NULL` |
| `ft_strncmp` | compara dos cadenas hasta n bytes | `int`: 0 si iguales, <0 o >0 |
| `ft_memchr` | busca un byte en n bytes de memoria | puntero al byte, o `NULL` |
| `ft_memcmp` | compara n bytes de memoria | `int`: 0 si iguales, <0 o >0 |
| `ft_strnstr` | busca una subcadena en los primeros len bytes | puntero al inicio, o `NULL` |
| `ft_atoi` | convierte cadena a entero | `int`: el número |
| `ft_calloc` | reserva memoria inicializada a 0 | puntero a la memoria, o `NULL` |
| `ft_strdup` | duplica una cadena | puntero a la copia nueva, o `NULL` |

**Parte 2 — Funciones adicionales**

| Función | Qué hace | Devuelve |
|---|---|---|
| `ft_substr` | extrae un trozo de una cadena | `char *`, o `NULL` |
| `ft_strjoin` | une dos cadenas | `char *`, o `NULL` |
| `ft_strtrim` | recorta los caracteres de un set en ambos extremos | `char *`, o `NULL` |
| `ft_split` | divide una cadena por un delimitador | `char **` terminado en `NULL`, o `NULL` |
| `ft_itoa` | convierte un entero a cadena | `char *`, o `NULL` |
| `ft_strmapi` | aplica `f` a cada carácter creando una cadena nueva | `char *`, o `NULL` |
| `ft_striteri` | aplica `f` a cada carácter modificándolo en el sitio | nada (`void`) |
| `ft_putchar_fd` | escribe un carácter en un fd | nada (`void`) |
| `ft_putstr_fd` | escribe una cadena en un fd | nada (`void`) |
| `ft_putendl_fd` | escribe una cadena + salto de línea | nada (`void`) |
| `ft_putnbr_fd` | escribe un entero en un fd | nada (`void`) |

**Parte 3 — Listas enlazadas (bonus)**

No realizada.

## INSTRUCCIONES
- Ejecutar en la raíz del repositorio `make` para generar *libft.a*
	-> mediante `cc` con las flags `-Wall -Werror -Wextra` y `ar`.

- Para Makefile:
	- `make` / `make all` — compila `libft.a`.
	- `make clean` — elimina los archivos objeto (`.o`).
	- `make fclean` — elimina los `.o` y `libft.a`.
	- `make re` — recompila todo desde cero.

## RECURSOS
- `man` : Página manual de cada función original
- Documentación del proyecto : el mismo pdf de información
- Peer to peer : preguntandole a compañeros que ya han hecho este proyecto, sobre todo para la Parte 2 en la que las funciones no tienen su propio manual 
- IA : para detectar errores durante la implementación como bucles infinitos o leaks y para generar las funciones main y poder comprobar su correcto funcionamiento
