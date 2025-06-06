//
// Created by josur on 14/05/2025.
//

#include "aquatic.h"

namespace Penguin_friend {

    Aquatic::Aquatic(const double speed)
        : swim_speed(speed){}

    void Aquatic::swim() const {
        cout << "Je nage pendant 5 secondes sur " << swim_speed * 5 << " metres." << endl;
    }

} // Penguin_friend