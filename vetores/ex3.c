#include <stdio.h>

int main()
{
    int v[5] = {10,20,30,40,50};
    float s=0;

    for (int i = 0; i < 5; i++){
        s+= v[i];
       
    }
    
    s = s/5;
    printf("resultado:%.1f",s);
    
    return 0;
}