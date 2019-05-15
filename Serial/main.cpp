#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main (int argc, char *argv[]) {
    int i;
    FILE *fd;

    printf("\n Ingresar valor: ");
    scanf("%d",&i);
    while(i!=0){
        fd=fopen("/dev/ttyACM1","w");
        fwrite(&i,sizeof(int),1,fd);
        sleep(1);
        fclose(fd);
        printf("\n Ingresar valor: ");
        scanf("%d",&i);
    }
    return 0;
}