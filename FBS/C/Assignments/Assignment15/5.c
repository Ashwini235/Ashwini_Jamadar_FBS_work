#include <stdio.h>
#include <string.h>

struct movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

int main()
{
    struct movie m[10];
    int count = 0, choice, i;
    char searchTitle[50];

    do
    {
        printf("\n--- Movie Database Menu ---\n");
        printf("1. Add Movie\n");
        printf("2. Search Movie\n");
        printf("3. Update Movie\n");
        printf("4. Display All Movies\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:   
            printf("\nEnter movie title: ");
            scanf(" %[^\n]", m[count].title);

            printf("Enter director name: ");
            scanf(" %[^\n]", m[count].director);

            printf("Enter release year: ");
            scanf("%d", &m[count].year);

            printf("Enter genre: ");
            scanf(" %[^\n]", m[count].genre);

            count++;
            printf("Movie added successfully!\n");
            break;

        case 2: 
            printf("\nEnter movie title to search: ");
            scanf(" %[^\n]", searchTitle);

            for (i = 0; i < count; i++)
            {
                if (strcmp(m[i].title, searchTitle) == 0)
                {
                    printf("\nMovie Found!\n");
                    printf("Title    : %s\n", m[i].title);
                    printf("Director : %s\n", m[i].director);
                    printf("Year     : %d\n", m[i].year);
                    printf("Genre    : %s\n", m[i].genre);
                    break;
                }
            }
            if (i == count)
                printf("Movie not found!\n");
            break;

        case 3:   
            printf("\nEnter movie title to update: ");
            scanf(" %[^\n]", searchTitle);

            for (i = 0; i < count; i++)
            {
                if (strcmp(m[i].title, searchTitle) == 0)
                {
                    printf("Enter new director: ");
                    scanf(" %[^\n]", m[i].director);

                    printf("Enter new release year: ");
                    scanf("%d", &m[i].year);

                    printf("Enter new genre: ");
                    scanf(" %[^\n]", m[i].genre);

                    printf("Movie updated successfully!\n");
                    break;
                }
            }
            if (i == count)
                printf("Movie not found!\n");
            break;

        case 4:   
            printf("\n--- Movie List ---\n");
            for (i = 0; i < count; i++)
            {
                printf("\nMovie %d\n", i + 1);
                printf("Title    : %s\n", m[i].title);
                printf("Director : %s\n", m[i].director);
                printf("Year     : %d\n", m[i].year);
                printf("Genre    : %s\n", m[i].genre);
            }
            break;

        case 5:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}