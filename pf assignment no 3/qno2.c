#include<stdio.h>
#include<string.h>

struct player {
    int ballscore[12];
    char name[20];
    int total;
    float avg;
};

struct player playgame(struct player p) {
    printf("Enter scores for %s:\n", p.name);
    for (int j = 0; j < 12; j++) {
        scanf("%d", &p.ballscore[j]);
    }
    return p;
}

struct player validatescore(struct player p) {
    p.total = 0;
    int c = 0;

    for (int j = 0; j < 12; j++) {
        if (p.ballscore[j] >= 0 && p.ballscore[j] <= 6) {
            p.total += p.ballscore[j];
            c++;
        }
    }

    p.avg = c > 0 ? (float)p.total / c : 0;
    return p;
}

void scoreboard(struct player p1, struct player p2) {
    printf("\nFor player 1 (%s):\nScores: ", p1.name);
    for (int i = 0; i < 12; i++) {
        printf("%d ", p1.ballscore[i]);
    }
    printf("\nTotal score: %d\nAverage: %.2f\n", p1.total, p1.avg);

    printf("\nFor player 2 (%s):\nScores: ", p2.name);
    for (int i = 0; i < 12; i++) {
        printf("%d ", p2.ballscore[i]);
    }
    printf("\nTotal score: %d\nAverage: %.2f\n", p2.total, p2.avg);
}

int main() {
    struct player p1, p2;

    printf("Enter name of player 1: ");
    scanf("%s", p1.name);
    printf("Enter name of player 2: ");
    scanf("%s", p2.name);

    p1 = playgame(p1);
    p2 = playgame(p2);

    p1 = validatescore(p1);
    p2 = validatescore(p2);

    scoreboard(p1, p2);

    return 0;
}
