# Libft

This project aims to recreate standard functions of libc.
With time I'm adding new functionnality like dynamic arrays, math function etc ...

## References

### Math :

### Objects :

Definition :
```c
typedef struct  s_string_list
{
  int   length;
  char  **items;
}               t_string_list;
```

- **StringList :**
  - ```c
    void  string_list_create(t_string_list **str_list);
    ```
  - ```c
    int   string_list_insert(t_string_list *items, int index, const char *item);
    ```
  - ```c
    int   string_list_append(t_string_list *items, const char *item);
    ```
  - ```c
    int   string_list_pop(t_string_list *items, int index);
    ```
  - ```c
    int   string_list_pop_last(t_string_list *items);
    ```
