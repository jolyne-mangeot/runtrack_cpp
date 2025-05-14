//
// Created by josur on 14/05/2025.
//

#ifndef PENGUIN_H
#define PENGUIN_H

#include <string.h>

#include "aquatic.h"
#include "terrestrial.h"

namespace Penguin_friend {

    class Penguin : public Aquatic, public Terrestrial {
    protected:
        char name[20];
        int slide_speed;

    public:
        Penguin(int swim_speed, int walk_speed, char name[20]):
            Aquatic(swim_speed),
            Terrestrial(walk_speed) {
            strcpy(this->name, name);
        };
        Penguin(Penguin &other_penguin): Aquatic(other_penguin), Terrestrial(other_penguin){
            strcpy(this->name, other_penguin.name);
        }
        void share_name() const;
        void set_slide_speed(int slide_speed);
        void swim() override;
        void walk() override;
    };

} // Penguin_friend

#endif //PENGUIN_H
