#include "EmployeeManagement.hpp"
#include "HourlyEmployee.hpp"
#include "SalariedEmployee.hpp"

int main() {
    EmployeeManager employeeManager;

    Employee* tempWorker = new TempWorker(10, "Alberto", 20);
    Employee* contractEmployee = new ContractEmployee(20, "Roberto", 10);
    Employee* apprentice = new Apprentice(10, "Luiz", 7, 4);

    employeeManager.addEmployee(tempWorker);
    employeeManager.addEmployee(contractEmployee);
    employeeManager.addEmployee(apprentice);

    for (int i = 0; i < 30; i++) {
        employeeManager.executeWorkday();
    }

    employeeManager.calculatePayroll();

    delete tempWorker;
    delete contractEmployee;
    delete apprentice;
}