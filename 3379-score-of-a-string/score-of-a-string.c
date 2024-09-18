int scoreOfString(char* s) 
{
    int s1 = 0;
    int s2 = 0;
    int length = strlen(s);
    int final = 0;
    for(int i = 0;i < length-1;i++)
    {
        s1 = s[i];
        s2 = s[i+1];
        final += abs(s1 - s2);
    }
    return final;
}