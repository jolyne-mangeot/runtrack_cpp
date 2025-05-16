//
// Created by josur on 14/05/2025.
//

#include "Job 1.h"

void add_penguin(const int swim_speed, const int walk_speed, string name) {
    const shared_ptr<Penguin> new_penguin_ptr(new Penguin(swim_speed, walk_speed, name));
    // shared_ptr<Penguin> new_penguin_ptr = make_shared<Penguin>(swim_speed, walk_speed, name); //same

    Penguin::penguins.push_back(new_penguin_ptr);
}

void olympic_run() {
    for (shared_ptr<Penguin> &penguin : Penguin::penguins) {
        penguin->olympic_run();
    }
}

void remove_penguins() {
    for (shared_ptr<Penguin> &penguin : Penguin::penguins) {
        cout << "Pingouin " << penguin->get_name() << " va etre supprime." << endl;
        // penguin->~Penguin();
        penguin.reset();
    }
}

vector<shared_ptr<Penguin>> Penguin::penguins;

int main() {
    cout << "Program start !" << endl;
    string name = "Charlemagne";
    add_penguin(2, 1, name);
    Penguin::penguins.at(0)->set_slide_speed(3);

    add_penguin(1, 2, "Lucius");
    Penguin::penguins.at(1)->set_slide_speed(2);

    add_penguin(2, 3, "Julia");
    Penguin::penguins.at(2)->set_slide_speed(2);

    add_penguin(2, 4, "Coco");
    Penguin::penguins.at(3)->set_slide_speed(5);

    for (const shared_ptr<Penguin> &penguin : Penguin::penguins) {
        penguin->olympic_run();
    }
    Penguin::olympic_results();

    remove_penguins();

    return 0;
}