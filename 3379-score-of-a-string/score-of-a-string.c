int scoreOfString(char* s) 
{
    int s1 = 0;
    int s2 = 0;
    int length = strlen(s);
    int final = 0;
    for(int i = 1;i < length;i++)
    {
        s1 = s[i-1];
        s2 = s[i];
        final += abs(s1 - s2);
    }
    return final;
}