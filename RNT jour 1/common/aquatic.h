//
// Created by josur on 14/05/2025.
//

#ifndef AQUATIC_H
#define AQUATIC_H

#include <iostream>

using namespace std;

namespace Penguin_friend {

    class Aquatic {

    protected:
        double swim_speed = 0;

    public:
        explicit Aquatic(double speed);
        virtual void swim() const;
    };

} // Penguin_friend

#endif //AQUATIC_H
