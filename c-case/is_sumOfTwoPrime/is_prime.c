int is_prime(int n)
{
    int i,isPrime = 1;
    if(n == 1)
    {
        isPrime = 0;
        return isPrime;
    }
    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}