//
// Created by josur on 14/05/2025.
//

#include "terrestrial.h"

namespace Penguin_friend {

    Terrestrial::Terrestrial(const double speed)
        : walk_speed(speed){}

    void Terrestrial::walk() const {
        cout << "Je marche pendant 5 secondes sur " << walk_speed * 5 << " metres" << endl;
    }

} // Penguin_friend