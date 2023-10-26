#include "PackageReductionDiscount.hpp"
#include "TuesdayDiscount.hpp"

int main() {
    
    Article article1("Mouse", 50, 1);
    Article article2("Keyboard", 70, 1);
    Article article3("Headphone", 100, 1);

    Command *command1 = new TuesdayDiscountCommand(1, "Tuesday", "Henrique");
    command1->addArticle(&article1);

    Command *command2 = new PackageReductionDiscountCommand(2, "Wednesday", "Juliana");
    command2->addArticle(&article2);
    command2->addArticle(&article3);

    command1->displayInfo();
    command2->displayInfo();
    
    delete command1;
    delete command2;
}