#ifndef TUESDAY_DISCOUNT_COMMAND_HPP
#define TUESDAY_DISCOUNT_COMMAND_HPP

#include "Command.hpp"

class Command;
class Article;

class TuesdayDiscountCommand : public Command {
    public:
        TuesdayDiscountCommand(int id, std::string date, std::string client) : Command(id, date, client) {}
        
        ~TuesdayDiscountCommand() {}

        double get_total_price() {
            double totalPrice = Command::get_total_price();
            if(date == "Tuesday") {
                return totalPrice - (totalPrice * 0.1); 
            }
            return totalPrice;
        }

        void displayInfo() {
            std::cout << "Client " << client << " command total price, on " << date << ": " << get_total_price() << std::endl;
        }
};

#endif