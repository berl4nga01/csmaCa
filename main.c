#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>

bool start(bool ReturnV)
{
    unsigned int randnumber = rand();

    if(randnumber % 2 == 0)
        ReturnV = true;
    else
        ReturnV = false;

    return ReturnV;
}
int main()
{
    srand(time(0)); // start number generator

    int k = 0; // start value
    bool avaliable;

    printf("\n***** CSMA/CA Simulation *****\n\n");
    printf("-> Press any key to continue.");
    getchar();

    printf("\e[1;1H\e[2J"); // clear screen in ASCII
    printf("\n***** CSMA/CA Simulation *****\n");

    avaliable = start(avaliable);


    if(avaliable)
       for(int i = 1; i <= 5; i++){
           printf("Wait time: %i\n", i);
           sleep(1);
       }

        avaliable = start(avaliable);

        if(avaliable){

            double max = pow(2, k);
            int maxConvert = (int) max;
            maxConvert--;

            printf("\n[!] - Ranges for wait: %i\n", maxConvert);

            for(int j = 0; j < maxConvert; j++){
                printf("Wait time: %i\n", j);
            }
            printf("\n[!] - Package send");

            avaliable = start(avaliable);

            if(avaliable){
                 printf("\n *** Package was sended with sucess! ***\n");
                 printf("-> Press any key to finish.");
                getchar();
            }else{
                printf("\n*** Package was not sended, sorry :( ***\n");
                printf("-> Press any key to try again.");

                getchar();
                main();
            }
        }
        else{
            printf("\e[1;1H\e[2J"); // clear screen in ASCII
            printf("The network now aren't avaliable, please try again on another momment.\n");
            printf("-> Press any key to try again.");

            getchar();
            main();
        }
    return 0;
}
