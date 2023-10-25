#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <string>
#include <vector>



class Command {
    private:
        int id;
        std::string date;
        std::string client;

    public:
        Command(int id, std::string date, std::string client);
        ~Command();
        int get_id() const;
        std::string get_date() const;
        std::string get_client() const;
        virtual int get_total_price() const = 0;
};

#endif