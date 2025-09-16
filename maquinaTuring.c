#include <stdio.h>

int turing(int cinta[], int longitud){
    int edoActual=0;
    int apuntador=0;

    while(edoActual!=2){

        if(apuntador>=longitud){
            edoActual=1;
            apuntador--;
            continue;
        }

        if(apuntador<0){
            edoActual=2;
            apuntador++;
            continue;
        }

        int elementoActual=cinta[apuntador];
        
        if(edoActual==0){

            switch (elementoActual)
            {
            case 0:
                cinta[apuntador]=1;
                apuntador++;
                break;
            case 1:
                cinta[apuntador]=0;
                apuntador++;
                break;
            default:
                printf("El elemento no es parte del lenguaje");
                return 0;
            }
        }

        if(edoActual==1){

            apuntador--;
            
        }

    }

    return 1;

}


int main() {
    int arreglo[] = {1,0,0,1,0,0,0,1,0,0,1};
    int longitud = sizeof(arreglo)/sizeof(arreglo[0]);
    if (turing(arreglo,longitud)==1){
        for(int i=0;i<longitud;i++){
            printf("%d\n", arreglo[i]);
        }
    }
    
    return 0;
}



