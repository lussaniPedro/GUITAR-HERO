#include <stdio.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <unistd.h>

int main(){
    printf("Playing \"I love rock 'n' roll\"...\n");
    PlaySound("tst.wav", NULL, SND_ASYNC);

    sleep(2);

    return 0;
}