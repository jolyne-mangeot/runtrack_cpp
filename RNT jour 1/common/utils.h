//
// Created by josur on 14/05/2025.
//

#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <string.h>
#include <memory>
#include <algorithm>
#include <iomanip>
#include "aquatic.h"
#include "terrestrial.h"

using namespace Penguin_friend;
using namespace std;

typedef struct {
    string name;
    double olympic_time;
} Olympic_scoreboard;

bool results_comparator(const Olympic_scoreboard& penguin_1, const Olympic_scoreboard& penguin_2);
#endif //UTILS_H