#include <iostream>
#include <cstdio>
using namespace std;

struct SHIPS {
    char ShipName[16];
    char Class[16];
    char Deployment[12];
    char InService[11];
};

SHIPS Ships[5] = {
    {"N2 Bomber", "Heavy Fighter", "Limited", "21"},
    {"J-Type 327", "Light Combat", "Unlimited", "1"},
    {"NX Cruiser", "Medium Fighter", "Limited", "18"},
    {"N1 Starfighter", "Medium Fighter", "Unlimited", "25"},
    {"Royal Cruiser", "Light Combat", "Limited", "4"}
};

int main() {
    char s1[16] = "SHIP NAME";      // 15개
    char s2[16] = "CLASS";          // 15개
    char s3[12] = "DEPLOYMENT";     // 11개
    char s4[11] = "IN SERVICE";     // 10개

    printf("%-15s%-15s%-11s%-10s\n", s1, s2, s3, s4);
    printf("%-15s%-15s%-11s%-10s\n", Ships[0].ShipName, Ships[0].Class, Ships[0].Deployment, Ships[0].InService);
    printf("%-15s%-15s%-11s%-10s\n", Ships[1].ShipName, Ships[1].Class, Ships[1].Deployment, Ships[1].InService);
    printf("%-15s%-15s%-11s%-10s\n", Ships[2].ShipName, Ships[2].Class, Ships[2].Deployment, Ships[2].InService);
    printf("%-15s%-15s%-11s%-10s\n", Ships[3].ShipName, Ships[3].Class, Ships[3].Deployment, Ships[3].InService);
    printf("%-15s%-15s%-11s%-10s\n", Ships[4].ShipName, Ships[4].Class, Ships[4].Deployment, Ships[4].InService);

    return 0; 
}