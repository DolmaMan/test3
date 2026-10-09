#include <iostream>
#include <string>

struct Product {
    std::string name;
    double price;

    double get_fixed_discount(double amount) {
        return amount;
    }

    double get_percentage_discount(double percent) {
        return price * (percent / 100.0);
    }
};

int main() {
    // Объявляем указатель на метод класса Product, который принимает double и возвращает double
    
    using TemplateCalcMethod = double (Product::*)(double);
    TemplateCalcMethod p_discount_calculator = nullptr;

    Product tv{ "Big TV", 2000.0 };

    bool holiday_season = true;
    if (holiday_season) {
        // Указываем на метод, считающий скидку в процентах
        p_discount_calculator = &Product::get_percentage_discount;
        double discount = (tv.*p_discount_calculator)(15.0); // Вызываем get_percentage_discount(15.0)
        std::cout << "Holiday discount: " << discount << std::endl; // 300
        std::cout << "Final price: " << tv.price - discount << std::endl; // 1700
    }
    else {
        // Указываем на метод с фиксированной скидкой
        p_discount_calculator = &Product::get_fixed_discount;
        double discount = (tv.*p_discount_calculator)(100.0); // Вызываем get_fixed_discount(100.0)
        std::cout << "Regular discount: " << discount << std::endl; // 100
        std::cout << "Final price: " << tv.price - discount << std::endl; // 1900
    }

    return 0;
}