#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
    char login[64], password[64];
    
    printf("Enter login : "); 
    gets(login);
    printf("Enter password : "); 
    gets(password);

    if(checkLogin(login, password) == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    if (checkValidPass(password)) {
        printf("Accepted\n");
    } else {
        printf("Reject\n");
    }

    return 0;
}

int checkValidPass(char *ps) {
    int len = strlen(ps);
    int upperCount = 0;
    int digitCount = 0;
    int hasRepeatUpper = 0;
    
    int i,j;
    for (i=0; i<len; i++) {
        if (isupper(ps[i])) {
            upperCount++; //upper
            
            for ( j = 0; j < i; j++) {
                if (ps[i] == ps[j]) {
                    hasRepeatUpper = 1;
                    break;
                } //repeatupper
            }
        }
        if (isdigit(ps[i])) {
            digitCount++; //digit
        }
    }
    //4.1
    if (len==5 && digitCount>=1) {
        return 1; 
    }
    //4.2
    if (len>=5 && len<=8 && !isdigit(ps[0]) && upperCount>=2 && digitCount>=2) {
        return 1;
    }
    //4.3
    if (len>=5 && len<=8 && upperCount>=2 && !hasRepeatUpper && digitCount>=2) {
        return 1;
    }

    return 0; 
}

int checkLogin(char *login, char *passwd) {
    if ( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
        return 1;
    else
        return 0;
}

