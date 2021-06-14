#include <stdio.h>

int main(){
    float x0 = -2;
    float y0 = 1;

    while(y0 > -1){
        x0 = -2;

        while(x0 < 2){
            float xn = 0, yn = 0, xnp1, ynp1;
            int count = 0, maxIter = 1000;

            while(xn*xn+yn*yn < 4 && count < maxIter){
                xnp1 = xn*xn-yn*yn+x0;
                ynp1 = 2*xn*yn+y0;

                xn = xnp1;
                yn = ynp1;

                count++;
            }

            if(count == maxIter){
                printf(".");
            } else{
                printf(" ");
            }

            x0 += 0.05;
        }

        printf("\n");
        
        y0 -= 0.05;
    

    }
    return 0;
}