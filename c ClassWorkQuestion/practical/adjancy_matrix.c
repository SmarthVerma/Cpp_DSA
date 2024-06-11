#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_FRIENDS 100

// Structure to represent a Multimap from user names to their friends' user names
struct Multimap {
    char users[MAX_USERS][20]; // Assuming maximum user name length is 20
    char friends[MAX_USERS][MAX_FRIENDS][20]; // Assuming maximum friends per user is 100, each with a name length of 20
    int num_users;
};

// Function to initialize the Multimap
void initMultimap(struct Multimap *map) {
    map->num_users = 0;
}

// Function to add a user and their friends to the Multimap
void addUser(struct Multimap *map, char user[], char friends[][20], int num_friends) {
    strcpy(map->users[map->num_users], user);
    for (int i = 0; i < num_friends; i++) {
        strcpy(map->friends[map->num_users][i], friends[i]);
    }
    map->num_users++;
}

// Function to check if two users are friends
bool areFriends(struct Multimap *map, char user1[], char user2[]) {
    for (int i = 0; i < map->num_users; i++) {
        if (strcmp(map->users[i], user1) == 0) {
            for (int j = 0; j < MAX_FRIENDS; j++) {
                if (strcmp(map->friends[i][j], user2) == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

// Function to check if a group of users are all friends with each other
bool friends(struct Multimap *map, char userList[][20], int num_users) {
    for (int i = 0; i < num_users; i++) {
        for (int j = 0; j < num_users; j++) {
            if (i != j && !areFriends(map, userList[i], userList[j])) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    struct Multimap map;
    initMultimap(&map);

    // Example usage
    char friendsOfJoe[][20] = {"Bill", "Sue"};
    addUser(&map, "Joe", friendsOfJoe, 2);
    char friendsOfEd[][20] = {"Joe"};
    addUser(&map, "Ed", friendsOfEd, 1);
    char friendsOfBill[][20] = {"Joe", "Ed", "Sue"};
    addUser(&map, "Bill", friendsOfBill, 3);
    char friendsOfSue[][20] = {"Bill", "Joe", "Ed"};
    addUser(&map, "Sue", friendsOfSue, 3);

    char userList[][20] = {"Sue", "Joe", "Bill"};
    int num_users = 3;

    if (friends(&map, userList, num_users)) {
        printf("All users are friends with each other.\n");
    } else {
        printf("Not all users are friends with each other.\n");
    }

    return 0;
}
