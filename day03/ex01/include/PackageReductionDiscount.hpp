#ifndef PACKAGE_REDUCTION_DISCOUNT_COMMAND_HPP
#define PACKAGE_REDUCTION_DISCOUNT_COMMAND_HPP

#include "Command.hpp"

class Command;

class PackageReductionDiscountCommand : public Command {
    public:
        PackageReductionDiscountCommand(int id, std::string date, std::string client) : Command(id, date, client) {}

        ~PackageReductionDiscountCommand() {}

        double calculateDiscount(double totalPrice) {
            if (totalPrice > 150) {
                return 10;
            }
            return 0;
        }

        void displayInfo() {
            std::cout << "Client " << client << " command total price, on " << date << ": " << Command::get_total_price() << std::endl;
        }
};

#endif