//
// Created by josur on 14/05/2025.
//

#include "utils.h"

bool results_comparator(const Olympic_scoreboard& penguin_1, const Olympic_scoreboard& penguin_2) {
    return penguin_1.olympic_time < penguin_2.olympic_time;
}