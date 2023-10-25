#ifndef HOURLY_EMPLOYEE_HPP
#define HOURLY_EMPLOYEE_HPP

#include "Employee.hpp"

class Employee;

class TempWorker : public Employee {
    public:
        TempWorker(int houlyValue) : Employee(hourlyValue) {}

        ~TempWorker() {}

        int executeWorkDay() {
            return registerWorkedHours(7);            
        }

        int mobilize(int hours) {
            setWorkedHours(hours);
            return workedHours;
        }

        int registerWorkedHours(int hours) {
            setWorkedHours(hours);
            return workedHours;
        }

        void setWorkedHours(int hours) {
            this->workedHours += hours;
        }
};

#endif