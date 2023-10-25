#ifndef EMPLOYEE_MANAGER_HPP
#define EMPLOYEE_MANAGER_HPP

#include "Employee.hpp"
#include <vector>
#include <iterator>
#include <iostream>

class Employee;

class EmployeeManager {
    private:
        std::vector<Employee *> employeeList;
    
    public:
        EmployeeManager() {}

        ~EmployeeManager() {}

        void addEmployee(Employee *employee) {
            employeeList.push_back(employee);
        }

        void removeEmployee(Employee *employee) {
            for(std::vector<Employee *>::iterator it = employeeList.begin(); it != employeeList.end(); it++) {
                if (*it == employee) {
                    employeeList.erase(it);
                    std::cout << "Employee removed" << std::endl;
                    return;
                }
            }
		}

        void executeWorkday() {
            for(std::vector<Employee *>::iterator it = employeeList.begin(); it != employeeList.end(); it++) {
                (*it)->executeWorkday();
            }
        }

        void calculatePayroll() {
            for (std::vector<Employee *>::iterator it = employeeList.begin(); it != employeeList.end(); ++it) {
                (*it)->calculateTotalHours();
                int totalPay = (*it)->getTotalHours() * (*it)->getHourlyValue();
                std::cout << "Employee: " << (*it)->getEmployeeName() << ", Payment: " << totalPay << std::endl;
            }
        }
};

#endif