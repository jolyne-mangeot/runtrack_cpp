//
// Created by josur on 14/05/2025.
//

#include "penguin.h"

namespace Penguin_friend {

    void Penguin::share_name() const {
        cout << "Bonjour ! Je m'appelle " << name << endl;
    }
    void Penguin::set_slide_speed(int slide_speed) {
        this->slide_speed = slide_speed;
    }
    void Penguin::swim() {
        cout << "Je nage pendant 10 secondes sur " << swim_speed * 10 << " metres." << endl;
    }
    void Penguin::walk() {
        cout << "Je marche pendant 10 secondes sur " << walk_speed * 10 << " metres" << endl;
    }

} // Penguin_friend