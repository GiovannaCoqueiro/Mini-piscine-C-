#ifndef SALARIED_EMPLOYEE_HPP
#define SALARIED_EMPLOYEE_HPP

#include "Employee.hpp"

class Employee;

class ContractEmployee : public Employee {
    private: 
        int nonWorkedHours;

    public:
        ContractEmployee(int houlyValue, std::string name, int nonWorkedHours) : Employee(houlyValue, name), nonWorkedHours(nonWorkedHours) {}
        
        int getNonWorkedHours() const {
            return nonWorkedHours;
        }
        
        int executeWorkday() {
            if (nonWorkedHours > 0) {
                if (nonWorkedHours >= 7) {
                    nonWorkedHours -= 7;
                    return registerWorkedHours(7);
                }
                int backup = nonWorkedHours;
                return registerWorkedHours(backup);
            }
            return registerWorkedHours(7);
        }

        void calculateTotalHours() {
            int totalHours = getWorkedHours() + getNonWorkedHours();
            setTotalHours(totalHours);
        }
};

class Apprentice : public Employee {
    private: 
        int nonWorkedHours;
        int schoolHours;

    public:
        Apprentice(int houlyValue, std::string name, int nonWorkedHours, int schoolHours) : Employee(houlyValue, name), nonWorkedHours(nonWorkedHours), schoolHours(schoolHours) {}

        int getNonWorkedHours() const {
            return nonWorkedHours;
        }
        
        int getSchoolHours() const {
            return schoolHours;
        }

        int executeWorkday() {
            if (nonWorkedHours > 0) {
                if (nonWorkedHours >= 7) {
                    nonWorkedHours -= 7;
                    return registerWorkedHours(7);
                }
                int backup = nonWorkedHours;
                return registerWorkedHours(backup);
            }
            return registerWorkedHours(7 - (schoolHours / 2));
        }

        void calculateTotalHours() {
            int totalHours = getWorkedHours() + getNonWorkedHours() + (getSchoolHours() / 2);
            setTotalHours(totalHours);
        }
};

#endif