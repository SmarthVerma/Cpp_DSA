#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct friends {
    char name[50];
    char **friends_list;
    int num_friends;
};

int areFriends(struct friends *f, char *user) {
    for (int i = 0; i < f->num_friends; i++) {
        if (strcmp(f->friends_list[i], user) == 0) {
            return 1; // They are friends
        }
    }
    return 0; // They are not friends
}


int friends(struct friends *f, char *users[], int num_users) {
    // Check if all users in the users array are friends with each other
    for (int i = 0; i < num_users; i++) {
        for (int j = i + 1; j < num_users; j++) {
            if (!areFriends(f, users[i]) || !areFriends(f, users[j])) {
                return 0; // At least one pair of users are not friends
            }
        }
    }
    // Check if all additional friends are friends with each other
    for (int i = 0; i < f->num_friends; i++) {
        for (int j = i + 1; j < f->num_friends; j++) {
            if (!areFriends(f, f->friends_list[i]) || !areFriends(f, f->friends_list[j])) {
                return 0; // At least one pair of additional friends are not friends
            }
        }
    }
    return 1; // All users and their additional friends are friends with each other
}


int main() {
       struct friends f;
    strcpy(f.name, "Sue");
    f.num_friends = 3;
    f.friends_list = malloc(f.num_friends * sizeof(char *));
    f.friends_list[0] = strdup("Joe");
    f.friends_list[1] = strdup("Bill");
    f.friends_list[2] = strdup("Ed");

    struct friends joe;
    strcpy(joe.name, "Joe");
    joe.num_friends = 2;
    joe.friends_list = malloc(joe.num_friends * sizeof(char *));
    joe.friends_list[0] = strdup("Bill");
    joe.friends_list[1] = strdup("Sue");

    struct friends bill;
    strcpy(bill.name, "Bill");
    bill.num_friends = 3;
    bill.friends_list = malloc(bill.num_friends * sizeof(char *));
    bill.friends_list[0] = strdup("Joe");
    bill.friends_list[1] = strdup("Ed");
    bill.friends_list[2] = strdup("Sue");

    struct friends ed;
    strcpy(ed.name, "Ed");
    ed.num_friends = 1;
    ed.friends_list = malloc(ed.num_friends * sizeof(char *));
    ed.friends_list[0] = strdup("Joe");

    char *users[] = {"Sue", "Joe", "Bill", "Ed"};
    int num_users = sizeof(users) / sizeof(users[0]);
    
    if (friends(&f, users, num_users)) {
        printf("All users are friends with each other\n");
    } else {
        printf("Users are not all friends with each other\n");
    }



    return 0;
}
