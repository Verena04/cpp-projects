
#include <string>
#include "Nutrition.h"

int main(int argc, char **argv) {
    int return_value = -99;
    NutritionalValues test_values{};

    if (argc > 1) {
        std::string arg2 = argv[1];
        if (arg2 == "eat") {
            NutritionalValues food{};
            food.calories = 10;
            food.salt = 2;

            NutritionalValues food2{};
            food2.calories = 10;
            food2.salt = 2;

            Eat(food);
            Eat(food2);

            if (food.calories != GetTotalCalories()) {
                return_value -= 1;
            }
            if (food.salt != GetTotalSalt()) {
                return_value -= 1;
            }

        }
    }

    return return_value;
}