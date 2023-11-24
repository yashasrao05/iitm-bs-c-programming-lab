#include <stdio.h>
#include <string.h>


void sreverse(char* s){
    int n = strlen(s);
    for(int i=0;i<n;i++){ // range should be n/2
        s[i] = s[n-1]; // should use a temp swap swap(s[i], s[i-n-1])
    }
}

int main(){
    int n;
    scanf("%d",&n); 
    char s[n];
    scanf("%s", s);
    sreverse(s);
    printf("%s", s);

}
 
