#ifndef SALARIED_EMPLOYEE_HPP
#define SALARIED_EMPLOYEE_HPP

#include "Employee.hpp"

class Employee;

class ContractEmployee : public Employee {
    private: 
        int nonWorkedHours;

    public:
        ContractEmployee(int houlyValue, std::string name) : Employee(houlyValue, name), nonWorkedHours(0) {}

        void registerNonWorkedHours(int hours) {
            nonWorkedHours += hours;
        }
        
        int getNonWorkedHours() const {
            return nonWorkedHours;
        }
        
        int executeWorkday() {
            
        }
};

class Apprentice : public Employee {
    private: 
        int nonWorkedHours;
        int schoolHours;

    public:
        Apprentice(int houlyValue, std::string name) : Employee(houlyValue, name), nonWorkedHours(0), schoolHours(0) {}

        void registerNonWorkedHours(int hours) {
            nonWorkedHours += hours;
        }
        
        void registerSchoolHours(int hours) {
            schoolHours += hours;
        }

        int getNonWorkedHours() const {
            return nonWorkedHours;
        }
        
        int getSchoolHours() const {
            return schoolHours;
        }

        int executeWorkday() {
            
        }
};

#endif