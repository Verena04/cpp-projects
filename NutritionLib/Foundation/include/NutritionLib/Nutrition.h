// main source folder "Foundation/src", "Foundation/<Name>/include" for public .h files
// CppUnit for testing


struct NutritionalValues {
    float calories;
    float salt;
};
void NewDay();
void Eat(const NutritionalValues &value);
float GetTotalCalories();
float GetTotalSalt();