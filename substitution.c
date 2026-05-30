#include <cs50.h>
#include <stdio.h>
#include <string.h>

void substitute(string m , string k , int l);

int main(void){
    string key = get_string("Enter your key: ");
    string msg = get_string("Enter your msg: ");
    int len = strlen(msg);

    if(len != 26){
        printf("Key must contain 26 characters\n");
        return 1;
    }

    substitute(msg , key , len);
}

void substitute(string m , string k , int l){
    string alphabet_Lower = "abcdefghijklmnopqrstuvwxyz";
    string alphabet_Upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i=0; i<l; i++){
        bool found = false;
        for(int j=0; j<26; j++){
            if(m[i]==alphabet_Upper[j] || m[i]==alphabet_Lower[j]){
                printf("%c",k[j]);
                found = true;
                break;
            }
        }
    if(found == false){
                printf("%c",m[i]);
        }
    }
    printf("\n");
}
