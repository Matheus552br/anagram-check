#include <stdio.h> 
#include <stdbool.h>
#include <string.h>
void swap(char *a, char *b){
char temp = *a;
 *a = *b;
*b = temp;
}
void sort(char s[]){
int  n = strlen(s);
for(int i = 0; i<n-1; i++ ){
for(int q = 0; q<n-1-i; q++){
    if(s[q] > s[q+1]){
        swap(&s[q], &s[q+1]);
}}}}

int main(void){
    char first[256];
    char second[256];
printf("first name: "); 
scanf("%99s",first);
printf("second name: ");
scanf("%99s",second);
if(strlen (first) == strlen (second)){
sort(first);
sort(second);
if (strcmp(first,second) == 0){
    printf("they are anagrams");
}else{printf("they are not anagrams");}





}

}




