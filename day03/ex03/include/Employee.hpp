#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

class Employee {
    protected:
        int hourlyValue;
        std::string name;
        int workedHours;
        int totalHours;

    public:
        Employee(int hourlyValue, std::string name) : hourlyValue(hourlyValue), name(name), workedHours(0), totalHours(0) {}

        virtual ~Employee() {}

        virtual int executeWorkday() = 0;
        virtual void calculateTotalHours() = 0;

        std::string getEmployeeName() const {
            return name;
        }
        
        int registerWorkedHours(int hours) {
            return workedHours += hours;
        }

        int getWorkedHours() const {
            return workedHours;
        }

        int getTotalHours() const {
            return totalHours;
        }

        void setTotalHours(int totalHours) {
            this->totalHours = totalHours;
        }

        int getHourlyValue() const {
            return hourlyValue;
        }
};

#endif