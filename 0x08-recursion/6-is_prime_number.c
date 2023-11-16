/**
* check - check if the number is prime
* @a:int
* @b:int
* Return: int
*/
int check(int a, int b)
{
    if (a == b)
        return (1);
    if (b % a == 0)
        return (0);
    return (check(a + 1, b));
}

/**
* is_prime_number - checks if the number is prime 
* @n:int
* Return: int
*/ 
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (check(2, n));
}
