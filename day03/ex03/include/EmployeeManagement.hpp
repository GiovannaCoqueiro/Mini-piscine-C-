#ifndef EMPLOYEE_MANAGEMENT_HPP
#define EMPLOYEE_MANAGEMENT_HPP

#include "Employee.hpp"
#include <vector>
#include <iterator>
#include <iostream>

class Employee;

class ManagementEmployee {
    private:
        std::vector<Employee *> employeeList;
    
    public:
        ManagementEmployee() {}

        ~ManagementEmployee() {}

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
                int totalHours = (*it)->getWorkedHours() - (*it)->getNonWorkedHours();
                int totalPay = (totalHours * (*it)->getHourlyValue()) + ((*it)->getSchoolHours() * ((*it)->getHourlyValue() / 2));
                std::cout << "Employee: " << (*it)->getEmployeeName() << ", Payment: " << totalPay << std::endl;
            }
        }
};

#endif