#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

class Employee {
    protected:
        int hourlyValue;
        int workedHours;
        std::string name;

    public:
        Employee(int hourlyValue, std::string name) : hourlyValue(hourlyValue), name(name), workedHours(0) {}

        ~Employee() {}

        virtual int executeWorkday() = 0;
        virtual void registerNonWorkedHours(int hours) = 0;
        virtual int getNonWorkedHours() const = 0;
        virtual void registerSchoolHours(int hours) = 0;
        virtual int getSchoolHours() const = 0;
        
        std::string getEmployeeName() const {
            return name;
        }

        void setWorkHours(int hours) {
            workedHours += hours;
        }
        
        int getWorkedHours() const {
            return workedHours;
        }

        int getHourlyValue() const {
            return hourlyValue;
        }
};

#endif