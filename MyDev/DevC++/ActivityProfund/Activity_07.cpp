#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
struct player
{
    char name[20] = {};
    int level = 0;
    int score = 0;
} p[5];
int main()
{
    FILE *fp, *rfp;
    fp = fopen("Scoreboard.txt", "w");
    for (int i = 0; i < 5; i++)
    {
        strcpy(p[i].name, "Anonymous");
        p[i].level = i;
        p[i].score = i * 10;
    }
    cout << "-----------------------------";

    fwrite(&p, sizeof(struct player), 5, fp);
    fclose(fp);

//check binary file
    
    rfp = fopen("Scoreboard.txt", "r");
    while (fread(&p, sizeof(struct player), 1, rfp) != 0)
    {
        printf("Name: %s\n", p->name);
        printf("Level : %d\nScore : %d", p->level, p->score);
        printf("\n---------------------------------\n");
    }
    fclose(rfp);
    
    return 0;
}