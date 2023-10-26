#ifndef PACKAGE_REDUCTION_DISCOUNT_COMMAND_HPP
#define PACKAGE_REDUCTION_DISCOUNT_COMMAND_HPP

#include "Command.hpp"

class Command;

class PackageReductionDiscountCommand : public Command {
    public:
        PackageReductionDiscountCommand(int id, std::string date, std::string client) : Command(id, date, client) {}

        ~PackageReductionDiscountCommand() {}

        double get_total_price() {
            double totalPrice = Command::get_total_price();
            if (totalPrice > 150) {
                return totalPrice - 10;
            }
            return totalPrice;
        }

        void displayInfo() {
            std::cout << "Client " << client << " command total price, on " << date << ": " << get_total_price() << std::endl;
        }
};

#endif