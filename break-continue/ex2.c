#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 10; i++){
        
        if (i == 2){
            printf("-\n",i);
            continue;
        }
        
        if (i == 8){
            printf("-\n",i);
            break;
        }
        

        printf("%i\n",i);
    }
    
    return 0;
}