#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

class Article {
    public:
        Article (std:: string name, double price, int quantity) : name(name), price(price), quantity(quantity) {}

        ~Article() {}

        std::string name;
        double price;
        int quantity;
};

class Command {
    protected:
        int id;
        std::string date;
        std::string client;
        std::vector<Article *> articleList;

    public:
        Command(int id, std::string date, std::string client) : id(id), date(date), client(client) {}
        
        virtual ~Command() {}

        virtual void displayInfo() = 0;
        
        void addArticle(Article *article) {
            articleList.push_back(article);
        }

        double get_total_price() {
            double totalPrice = 0;
            for (std::vector<Article *>::iterator it = articleList.begin(); it != articleList.end(); it++) {
                totalPrice += (*it)->price * (*it)->quantity;
            }
            return totalPrice;
        }
};

#endif