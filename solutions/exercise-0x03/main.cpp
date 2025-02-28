#include <iostream>
#include <cmath>

/**
 * @brief Calculate the power dissipated in a resistor.
 * 
 * @param voltage The voltage across the resistor [V].
 * @param resistance The resistance of the resistor [Ohm].
 * @return The calculated power dissipation [W].
 */
double calculate_power(double voltage, double resistance) {
    return pow(voltage, 2) / resistance;
}

/**
 * @brief Get user input with a prompt.
 * 
 * @param prompt The message shown to the user.
 * @return The entered value.
 */
double get_input(const std::string& prompt) {
    double value;
    std::cout << prompt;
    std::cin >> value;
    return value;
}

int main() {
    std::cout << "This program calculates the power dissipated in a simple resistor circuit.\n";
    double voltage = get_input("Input the power source voltage [V]: ");
    double resistance = get_input("Input the resistance R [Ohm]: ");

    double power = calculate_power(voltage, resistance);

    std::cout << "The power dissipated in R is " << power << " watts [W]\n";

    return 0;
}
