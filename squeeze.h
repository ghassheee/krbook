

char* squeeze(char *s1,char *s2)
{

    
    int i=0,p=0;
    while( s1[i] != '\0') 
    {
        int j=0;
        while( s2[j] != '\0')
        {
            if (s1[i] == s2[j]) 
            {
                p++;
                break;
            }
            else
            {
                s1[i-p] = s1[i];
            }
            j++;
        }
        i++;
    }
    s1[i-p]='\0';
    return s1;
}
