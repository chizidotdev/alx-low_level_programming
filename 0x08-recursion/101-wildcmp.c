/**
* check - check if two strings are identical
* @s1: string
* @s2: string
* @i: int
* @j: int
* Return: int
*/
int check(char *s1, char *s2, int i, int j)
{
    if (s1[i] == '\0' && s2[j] == '\0')
        return (1);
    if (s1[i] == s2[j])
        return (check(s1, s2, i + 1, j + 1));
    if (s1[i] == '\0' && s2[j] == '*')
        return (check(s1, s2, i, j + 1));
    if (s1[i] == '*')
        return (check(s1, s2, i + 1, j) || check(s1, s2, i, j + 1));
    return (0);
}

/**
* wildcmp - compares two strings
* @s1: string
* @s2: string
* Return: int
*/
int wildcmp(char *s1, char *s2)
{
    return (check(s1, s2, 0, 0));
}
