#ifndef TUESDAY_DISCOUNT_COMMAND_HPP
#define TUESDAY_DISCOUNT_COMMAND_HPP

#include "Command.hpp"

class Command;
class Article;

class TuesdayDiscountCommand : public Command {
    private:
        bool is_tuesday(std::string date) const;
        std::vector<Article> articles;

    public:
        TuesdayDiscountCommand(int id, std::string date, std::string client, std::vector<Article> articles);
        int get_total_price() const override;
};

#endif