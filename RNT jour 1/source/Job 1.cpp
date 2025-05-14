//
// Created by josur on 14/05/2025.
//
#include "Job 1.h"

int main() {
    cout << "Hello World!" << endl;
    char name[20] = "Charlemagne";
    Penguin my_penguin(2, 1, name);
    my_penguin.share_name();
    my_penguin.set_slide_speed(3);
    my_penguin.swim();
    my_penguin.walk();
    Penguin penguins_friend(my_penguin);
    penguins_friend.share_name();
    return 0;
}