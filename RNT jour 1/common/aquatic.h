//
// Created by josur on 14/05/2025.
//

#ifndef AQUATIC_H
#define AQUATIC_H

#include <iostream>
#include <iomanip>
#include <memory>

using namespace std;

namespace Penguin_friend {

    class Aquatic {

    protected:
        int swim_speed = 0;

    public:
        Aquatic(int speed);
        virtual void swim();
    };

} // Penguin_friend

#endif //AQUATIC_H
