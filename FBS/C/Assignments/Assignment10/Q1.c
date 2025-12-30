#include <stdio.h>
#include<string.h>

void main()
{
    char str[50]  = "ashwini@gmail.com";
    char str2[50];
    char str3[50] = "HELLO";
    char str4[50] = "world";
    char str5[50] = "hello world";
    char str6[50] = "one,two,three";
    char str7[50];
    char s1[20] = "ashvini";
    char s2[20] = "asivini";

    int res, i;
    char *resptr; 

    // 1. strlen 
    res = strlen(str);
    printf("strlen = %d\n", res);

    // 2. strcpy 
    strcpy(str2, str);
    printf("strcpy = %s\n", str2);

    // 3. strncpy 
    strncpy(str2, str3, 3);
    str2[3] = '\0';
    printf("strncpy = %s\n", str2);

    // 4. strcat 
    strcat(str3, str4);
    printf("strcat = %s\n", str3);

    // 5. strncat 
    strncat(str4, "PROGRAM", 3);
    printf("strncat = %s\n", str4);

    // 6. strcmp 
    res = strcmp(s1, s2);
    printf("strcmp = %d\n", res);

    // 7. strncmp 
    res = strncmp("abcd", "abce", 3);
    printf("strncmp = %d\n", res);

    // 8. strchr 
    resptr = strchr(str, '@');
    if (resptr != NULL)
        printf("strchr = %s\n", resptr);

    // 9. strrchr 
    resptr = strrchr(str, 'a');
    if (resptr != NULL)
        printf("strrchr = %s\n", resptr);

    // 10.strstr
    resptr = strstr(str, "@gmail.com");
    if (resptr != NULL)
        printf("strstr = Allowed\n");
    else
        printf("strstr = Not Allowed\n");

    // 11. strlwr
    printf("strlwr = %s\n", strlwr(str5));

    //12. strupr 
    printf("strupr = %s\n", strupr(str5));

    // 13. strrev
    printf("strrev = %s\n", strrev(str5));

    //14. strtok 
    printf("strtok:\n");
    resptr = strtok(str6, ",");
    while (resptr != NULL)
    {
        printf("%s\n", resptr);
        resptr = strtok(NULL, ",");
    }

    // 15. memset
    memset(str7, '*', 5);
    str7[5] = '\0';
    printf("memset = %s\n", str7);

    // 16. memcpy 
    memcpy(str7, "ABCDE", 5);
    str7[5] = '\0';
    printf("memcpy = %s\n", str7);

    // 17. memmove 
    memmove(str7 + 2, str7, 3);
    str7[5] = '\0';
    printf("memmove = %s\n", str7);

    // 18. memcmp 
    res = memcmp("abc", "abd", 3);
    printf("memcmp = %d\n", res);

    // 19. memchr 
    resptr = memchr(str, '@', strlen(str));
    if (resptr != NULL)
        printf("memchr = %s\n", resptr);

    // 20. strspn 
    res = strspn("123abc", "123456789");
    printf("strspn = %d\n", res);

    //21. strcspn 
    res = strcspn("hello@gmail.com", "@");
    printf("strcspn = %d\n", res);


    i = 0;
    while (str[i] != '\0')
    {
        printf("%c - %u\n", str[i], &str[i]);
        i++;
    }
}