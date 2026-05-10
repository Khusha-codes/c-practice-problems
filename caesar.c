#include <cs50.h>
#include <stdio.h>
#include <string.h>

void caesar(string message,int length, int key);

int main(void){
    int key = get_int("Enter your key: ");
    string msg = get_string("Enter your message: ");
    int length = strlen(msg);
    caesar(msg, length, key);
}

void caesar(string message,int length,int key){
    for(int i =0; i<length;i++){

        if((message[i]>='A' && message[i]<='Z')){
            printf("%c",((message[i] - 'A' + key) % 26) + 'A');
        }

        else if(message[i]>='a' && message[i]<='z'){
            printf("%c",((message[i] - 'a' + key)%26) + 'a');
        }

        else{
            printf("%c",message[i]);
        }
    }
    printf("\n");
}
