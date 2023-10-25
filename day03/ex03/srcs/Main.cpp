#include "EmployeeManagement.hpp"
#include "HourlyEmployee.hpp"
#include "SalariedEmployee.hpp"

int main() {
    EmployeeManager employeeManager;

    TempWorker* tempWorker = new TempWorker(10, "Alberto", 20);
    ContractEmployee* contractEmployee = new ContractEmployee(20, "Roberto", 10);
    Apprentice* apprentice = new Apprentice(10, "Luiz", 7, 4);

    employeeManager.addEmployee(tempWorker);
    employeeManager.addEmployee(contractEmployee);
    employeeManager.addEmployee(apprentice);

    for (int i = 0; i < 30; i++) {
        employeeManager.executeWorkday();
    }

    employeeManager.calculatePayroll();
}