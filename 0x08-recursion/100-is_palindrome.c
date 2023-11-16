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
	if (s[i] != s[j])
		return (0);
	if (i >= j)
		return (1);
	return (check(s, i + 1, j - 1));
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: string
* Return: int
*/
int is_palindrome(char *s)
{
	int i = 0;
	int j = _stringlen(s) - 2;

	return (check(s, i, j));
}
