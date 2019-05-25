/*
** EPITECH PROJECT, 2019
** PSU_42sh_2018
** File description:
** is_builtin
*/

#include <stdbool.h>
#include "tokenizer.h"
#include "shell.h"

bool is_builtin(char *cmd)
{
    for (size_t i = 0; builtins[i]; i++)
        if (!strcmp(cmd, builtins[i]->name))
            return true;
    return false;
}
