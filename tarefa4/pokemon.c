#include <stdio.h>
#include <math.h>

int treta(int vidaclodes, int vidabeza, int danoclodes, int danobeza) {

if (vidaclodes > 0)
    {

    if (ceil((double) vidaclodes / danobeza) < ceil((double) vidabeza / danoclodes)) danoclodes = danoclodes + 50;
            
    else vidabeza -= danoclodes;
            
    
    if (vidabeza > 0) vidaclodes -= danobeza;
            
        

    if (vidaclodes > 0 && vidabeza > 0) return treta(vidaclodes, vidabeza, danoclodes, danobeza);
            
    else 
    {
        if (vidaclodes > vidabeza) printf("Clodes\n");

        else if (vidabeza > vidaclodes) printf("Bezaliel\n");
    }
    
        return 0;

    }
    return 0;
}

void repet(int a) {

    int vidaclodes, vidabeza, danoclodes, danobeza;

    if (a > 0) {
        scanf("%d %d %d %d", &vidaclodes, &vidabeza, &danoclodes, &danobeza);
        treta(vidaclodes, vidabeza, danoclodes, danobeza);
        repet(a - 1);
    }
}

int main() {

    int numtretas;
    scanf("%d", &numtretas);

    repet(numtretas);

    return 0;
}
