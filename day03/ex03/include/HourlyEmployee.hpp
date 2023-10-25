#ifndef HOURLY_EMPLOYEE_HPP
#define HOURLY_EMPLOYEE_HPP

#include "Employee.hpp"

class Employee;

class TempWorker : public Employee {
    private: 
        int mobilizedHours;

    public:
        TempWorker(int houlyValue, std::string name, int mobilize) : Employee(houlyValue, name), mobilizedHours(mobilize) {}

        ~TempWorker() {}
        
        int getMobilizedHours() const {
            return mobilizedHours;
        }
        
        int executeWorkday() {
            if (mobilizedHours > 0) {
                if (mobilizedHours >= 7) {
                    mobilizedHours -= 7;
                    return registerWorkedHours(7);
                }
                int backup = mobilizedHours;
                mobilizedHours = 0;
                return registerWorkedHours(backup);
            }
            return registerWorkedHours(0);
        }

        void calculateTotalHours() {
            int totalHours = getWorkedHours() + getMobilizedHours();
            setTotalHours(totalHours);
        }
};

#endif