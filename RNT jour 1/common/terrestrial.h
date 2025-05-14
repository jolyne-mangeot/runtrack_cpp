//
// Created by josur on 14/05/2025.
//

#ifndef TERRESTRIAL_H
#define TERRESTRIAL_H

#include <iostream>
#include <iomanip>
#include <memory>

using namespace std;

namespace Penguin_friend {

    class Terrestrial {

    protected:
        int walk_speed = 0;

    public:
        Terrestrial(int speed);
        virtual void walk();
    };

} // Penguin_friend

#endif //TERRESTRIAL_H
