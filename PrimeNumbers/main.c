#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{

    for(int i = 2;i < 101;i++){
        bool prime = true;
        for(int x = 2;x < i;x++){
            if(i % x == 0){
                prime = false;
                break;
            }

        }
        if(prime == true){
            printf("%d\n",i);
        }

    }
    return 0;
}
