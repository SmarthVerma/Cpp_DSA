#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for storing friends
struct friends {
    char name[50];          // User name
    char **friends_list;    // List of friends
    int num_friends;        // Number of friends
};

int areFriends(struct friends *f, char* user1, char* user2){
    for(int i=0; i < f->num_friends; i++){
        if(strcmp(f->friends_list[i], user2)==0){
            return 1;
        }
    }
}


int main() {

}
