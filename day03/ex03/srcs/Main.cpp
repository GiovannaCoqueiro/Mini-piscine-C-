#include "EmployeeManagement.hpp"
#include "HourlyEmployee.hpp"
#include "SalariedEmployee.hpp"

int main() {
    EmployeeManager employeeManager;

    TempWorker tempWorker(10, 1);
    ContractEmployee contractEmployee(50, 2);
    Apprentice apprentice(5, 9, 3);

    employeeManager.addEmployee(tempWorker);
    employeeManager.addEmployee(contractEmployee);
    employeeManager.addEmployee(apprentice);

    tempWorker->mobilize(28);
    contractEmployee->takeVacation(2);
    apprentice->attendSchool(20);

    employeeManager.executeWorkday();
    employeeManager.executeWorkday();
    employeeManager.executeWorkday();

    employeeManager.calculatePayroll();
}