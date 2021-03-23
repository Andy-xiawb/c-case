extern int is_prime(int n);
int is_theSumOfTwoPrime(int n)
{
    int i, flag = 0;
    for(i = 2; i <= n/2; i++)
    {
        if(is_prime(i) == 1)
        {
            if(is_prime(n - i) == 1)
            {
                flag = 1;
                break;
            }
        }
    }
    return flag;
}