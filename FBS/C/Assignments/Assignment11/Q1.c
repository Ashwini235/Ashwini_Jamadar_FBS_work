#include <stdio.h>

char mytolower(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return ch + 32;
    return ch;
}
char mytoupper(char ch)
{
    if(ch >= 'a' && ch <= 'z')
        return ch - 32;
    return ch;
}

// a. mystrcpy 
char* mystrcpy(char *dest, const char *src)
{
    int i=0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

//  b. mystrlen 
int mystrlen(const char *str)
{
    int len=0;
    while(str[len] != '\0')
        len++;
    return len;
}

// c. mystrcmp 
int mystrcmp(const char *s1, const char *s2)
{
    int i=0;
    while(s1[i] && s2[i])
    {
        if(s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}

// d. mystrcat 
char* mystrcat(char *dest, const char *src)
{
    int i=0, j=0;
    while(dest[i] != '\0')
        i++;
    while(src[j] != '\0')
        dest[i++] = src[j++];
    dest[i] = '\0';
    return dest;
}

// e. mystrncpy 
char* mystrncpy(char *dest, const char *src, int n)
{
    int i;
    for(i=0; i<n && src[i]!='\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

// f. mystrupper 
char* mystrupper(char *str)
{
    int i=0;
    while(str[i])
    {
        str[i] = mytoupper(str[i]);
        i++;
    }
    return str;
}

// g. mystrlower 
char* mystrlower(char *str)
{
    int i=0;
    while(str[i])
    {
        str[i] = mytolower(str[i]);
        i++;
    }
    return str;
}
// h. mystrrev 
char* mystrrev(char *str)
{
    int i=0, j=mystrlen(str)-1;
    char temp;
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
    return str;
}

// i. mystrstr 
char* mystrstr(const char *str, const char *sub)
{
    int i, j;
    for(i=0; str[i]; i++)
    {
        for(j=0; sub[j] && str[i+j]==sub[j]; j++);
        if(sub[j] == '\0')
            return (char*)&str[i];
    }
    return NULL;
}

// j. mystrcasecmp 
int mystrcasecmp(const char *s1, const char *s2)
{
    int i=0;
    while(s1[i] && s2[i])
    {
        if(mytolower(s1[i]) != mytolower(s2[i]))
            return mytolower(s1[i]) - mytolower(s2[i]);
        i++;
    }
    return mytolower(s1[i]) - mytolower(s2[i]);
}

// k. mystrchr 
char* mystrchr(const char *str, char ch)
{
    while(*str)
    {
        if(*str == ch)
            return (char*)str;
        str++;
    }
    return NULL;
}

// l. mystrrchr 
char* mystrrchr(const char *str, char ch)
{
    char *pos = NULL;
    while(*str)
    {
        if(*str == ch)
            pos = (char*)str;
        str++;
    }
    return pos;
}

// m. mystrncmp 
int mystrncmp(const char *s1, const char *s2, int n)
{
    int i=0;
    while(i<n && s1[i] && s2[i])
    {
        if(s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}

// n. mystrnstr 
char* mystrnstr(const char *str, const char *sub, int n)
{
    int i, j;
    for(i=0; i<n && str[i]; i++)
    {
        for(j=0; sub[j] && (i+j)<n && str[i+j]==sub[j]; j++);
        if(sub[j] == '\0')
            return (char*)&str[i];
    }
    return NULL;
}

// o. mystrncat 
char* mystrncat(char *dest, const char *src, int n)
{
    int i=0, j=0;
    while(dest[i])
        i++;
    while(j<n && src[j])
        dest[i++] = src[j++];
    dest[i] = '\0';
    return dest;
}

// p. mystrncasecmp 
int mystrncasecmp(const char *s1, const char *s2, int n)
{
    int i=0;
    while(i<n && s1[i] && s2[i])
    {
        if(mytolower(s1[i]) != mytolower(s2[i]))
            return mytolower(s1[i]) - mytolower(s2[i]);
        i++;
    }
    return 0;
}