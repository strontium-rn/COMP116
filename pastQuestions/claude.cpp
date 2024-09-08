#include <iostream>

class Date {
private:
    int year, month, day;

public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

    int operator-(const Date& other) const {
        // Simple age calculation (assuming 365 days per year)
        return year - other.year;
    }

    void display() const {
        std::cout << year << "-" << month << "-" << day;
    }
};

int main() {
    Date birthDate(1990, 5, 15);
    Date currentDate(2024, 9, 8);

    int age = currentDate - birthDate;

    std::cout << "Age: " << age << " years" << std::endl;

    return 0;
}