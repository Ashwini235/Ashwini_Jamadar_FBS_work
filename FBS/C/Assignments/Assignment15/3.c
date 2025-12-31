#include <stdio.h>

struct player
{
    char name[50];
    int matches, runs, wickets;
};

int main()
{
    struct player p[10];
    int i, maxRun = 0, maxWicket = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\nPlayer %d Name: ", i + 1);
        scanf(" %[^\n]", p[i].name);

        printf("Matches: ");
        scanf("%d", &p[i].matches);

        printf("Runs: ");
        scanf("%d", &p[i].runs);

        printf("Wickets: ");
        scanf("%d", &p[i].wickets);
    }

    for (i = 1; i < 10; i++)
    {
        if (p[i].runs > p[maxRun].runs)
            maxRun = i;

        if (p[i].wickets > p[maxWicket].wickets)
            maxWicket = i;
    }

    printf("\nMax Run Player: %s (%d runs)\n", p[maxRun].name, p[maxRun].runs);
    printf("Max Wicket Player: %s (%d wickets)\n", p[maxWicket].name, p[maxWicket].wickets);

    return 0;
}