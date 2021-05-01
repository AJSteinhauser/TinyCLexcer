
#include <stdio.h>
#include <stdlib.h>
#include "helper.h"




void gen_labels(BINARY_TREE parse){
    char* dataSection = "section .data";
    for (int i = 0; i < dataTableSize; i++){
        char* value;
        if (data_table[i]->str){
            int newLength = 50 + strlen(dataSection);
            char *buffer = malloc(newLength);
            sprintf(buffer,"%s\n\tmessage%i %s\n\tmessage_length%i equ $-message%i\n", dataSection,i,data_table[i]->str,i,i);
            dataSection = buffer;
        }
        if (data_table[i]->intV){
            printf("%i\n\nTESTING",data_table[i]->intV);
        }
        if (data_table[i]->floatV){
            printf("%f\n\nTESTING2",data_table[i]->floatV);
        }
    }
    printf("%s",dataSection);
}
