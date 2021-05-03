
#include <stdio.h>
#include <stdlib.h>
#include "helper.h"


void gen_labels();

void gen_inital(){
    char* header = "global _main\n\nsection .text:\n";
     printf("%s",header);
}

void gen_function(BINARY_TREE node){
    printf("_%s\n", symbol_table[node->item]->identifier);
}


void gen_return(BINARY_TREE node){
    if (node == NULL){return;}
    if (node->ident == CONSTANT){ 
        DATA_NODE_PTR item = data_table[node->item];
        char *return_value;
        if (item->str != NULL){
            return_value = strcat("message", itoa(node->item));
        }
        else if(item->intV){
            return_value = strcat("int", itoa(node->item));
        }
        else if (item->floatV){
            return_value = strcat("float", itoa(node->item));
        }
        printf("\tmov eax, 0x1\n\t mov ebx, %s\n\tint 0x80", return_value);   
    }
    else{
        gen_return(node->right);
        gen_return(node->middle);
        gen_return(node->left);  
    }
}

void gen_print(BINARY_TREE node){
    if (node == NULL){return;}
    if (node->ident == CONSTANT){ 
        char* message = strcat("message", itoa(node->item));
        char* message_length = strcat("message_length", itoa(node->item));
        printf("\tmov eax, 0x4\n\tmov ebx, 1\n\tmov ecx, %s\n\tmov edx, %s\n\tint 0x80", message, message_length);
    }
    else{
        gen_print(node->right);
        gen_print(node->middle);
        gen_print(node->left);
    }
}

void gen_functionCall(BINARY_TREE node){
    char* functionName = symbol_table[node->item]->identifier;
    if (strcmp(functionName,"printf")){
        gen_print(node);
    }
    else{
        printf("\tjmp %s\n", symbol_table[node->item]->identifier);
    }
}

void parseThrough(BINARY_TREE root){
    if (root == NULL){return;}
    if (root->ident == FUNCTION_DEFINITION){
        gen_function(root);
    }
    if (root->ident == FUNCTION_CALL){
        gen_functionCall(root);
    }
    if (root->ident == RETURN_STATEMENT){
        gen_return(root);
    }
    
    parseThrough(root->left);
    parseThrough(root->middle);
    parseThrough(root->right);
}

void gen_everything(BINARY_TREE root){
    gen_inital();
    //parseThrough(root);  Ahh the sad line of code that breaks everythign
	gen_labels();
}

void gen_returnStatement(){
    char* commands = "mov eax, 0x1\nmov ebx, 0\nint 0x80";
}


void gen_labels(){
    char* dataSection = "section .data";
    for (int i = 0; i < dataTableSize; i++){
        char* value;
        if (data_table[i]->str!= NULL){
            int newLength = 100 + strlen(dataSection);
            char *buffer = malloc(newLength);
            sprintf(buffer,"%s\n\tmessage%i %s\n\tmessage_length%i equ $-message%i\n\n", dataSection,i,data_table[i]->str,i,i);
            dataSection = buffer;
            continue;
        }        
        if (data_table[i]->intV != 0){
            int value = data_table[i]->intV;
            if (data_table[i]->intV == -2148){value = 0;}
            int newLength = 100 + strlen(dataSection);
            char *buffer = malloc(newLength);
            sprintf(buffer,"%s\tint%i\tdq\t%i\n",dataSection,i,value);
            dataSection = buffer;
            continue;
        }
        if (data_table[i]->floatV){
        }
    }
    printf("%s",dataSection);
}
