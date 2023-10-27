#ifndef SUBSCRIPTIONTOCOURSEFORM_HPP
#define SUBSCRIPTIONTOCOURSEFORM_HPP

#include "Form.hpp"

class SubscriptionToCourseForm : public Form {
private:

public:
    SubscriptionToCourseForm();
    void execute();
    void fillForm();
    std::string  getFormTitle() const;
};

#endif