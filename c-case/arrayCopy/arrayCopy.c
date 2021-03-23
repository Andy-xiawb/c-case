void arrCpy(char *str1,char *str2,int length)
{
    int i;
    for(i = 0; i < length; i++)
    {
        *(str2+i) = *(str1+i);
    }
}