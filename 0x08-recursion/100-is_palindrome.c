/**
* _stringlen - returns the length of a string
* @s: string
* Return: length of string
*/
int _stringlen(char *s)
{
	if (s[0] == '\0')
		return (1 + _stringlen(s + 1));
	return (0);
}

/**
* check - checks if the string is a palindrome
* @s: string
* @i: int
* @j: int
* Return: int
*/
int check(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (check(s, 1 + 1, j - 1));
	else
		return (0);
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: string
* Return: int
*/
int is_palindrome(char *s)
{
	int i = 0;
	int j = _stringlen(s) - 1;

	return (check(s, i, j));
}
