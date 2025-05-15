//
// Created by josur on 14/05/2025.
//

#include "Job 1.h"

void add_penguin(const int swim_speed, const int walk_speed, string name) {
    const shared_ptr<Penguin> new_penguin_ptr(new Penguin(swim_speed, walk_speed, name));
    // shared_ptr<Penguin> new_penguin_ptr = make_shared<Penguin>(swim_speed, walk_speed, name); //same

    Penguin::penguins.push_back(new_penguin_ptr);
}

vector<shared_ptr<Penguin>> Penguin::penguins;

int main() {
    cout << "Program start !" << endl;
    string name = "Charlemagne";
    add_penguin(2, 1, name);

    for (shared_ptr<Penguin> &penguin : Penguin::penguins) {
        cout << "Pingouin " << penguin->get_name() << " va etre supprime." << endl;
        penguin->~Penguin();
        penguin.reset();
    }

    return 0;
}