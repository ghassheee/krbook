

int any(char *s1,char *s2)
{

    
    int i=0,p=0;
    while( s1[i] != '\0') 
    {
        int j=0;
        while( s2[j] != '\0')
        {
            if (s1[i] == s2[j]) 
            {
                return i+1;
            }
            j++;
        }
        i++;
    }
    return -1;
}
