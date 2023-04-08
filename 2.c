#include <stdio.h>

struct Player {
    char name[50];
    int runs;
};

int main() {
    int n, i, total_runs = 0;

    printf("Enter number of players: ");
    scanf("%d", &n);

    struct Player team[n];

    for(i = 0; i < n; i++) 
	{
        printf("\nEnter details of player %d:\n", i+1);

        printf("Enter player name: ");
        scanf("%s", team[i].name);

        printf("Enter runs scored by player: ");
        scanf("%d", &team[i].runs);

        total_runs += team[i].runs;
    }

    printf("\nTotal runs scored by the team: %d\n", total_runs);

    return 0;
}

