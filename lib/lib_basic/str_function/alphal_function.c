/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-axel.londas
** File description:
** alphal_function
*/

int isalphal_bis(char str)
{
    if ('0' <= str && str <= '9' ||
'A' <= str && str <= 'Z' ||
'a' <= str && str <= 'z') {
        return (1);
    } else {
        return (0);
    }
}

int isletter(char str)
{
    if ('A' <= str && str <= 'Z' ||
'a' <= str && str <= 'z') {
        return (1);
    } else {
        return (0);
    }
}
