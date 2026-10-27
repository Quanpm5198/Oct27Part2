// Oct27Part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<string>
#include <list>
void demoPrintingAKustOfGrades()
{
    std::vector<int> listOfGrades =
    {
            99, 100, 70, 80, 60,50
    };

    for (int locationInArray = 0; locationInArray < listOfGrades.size(); locationInArray++)
    {
        std::cout << listOfGrades[locationInArray] << std::endl;
	}
}


std::vector<std::string> makeToDoList()
{
    std::vector<std::string> toDoList;

    std::string continueOrNot = "yes";
    while (continueOrNot != "no")
    {
        std::cout << " Enter a task for your to do list: " << std::endl;
        std::string newTask;
        std::getline(std::cin, newTask);

	    toDoList.push_back(newTask);
        std::cout << " Are you done ading tasks? (yes/no)" << std::endl;
        std::getline(std::cin, continueOrNot);
    }
    
	return toDoList;
}
void printTheToDolist(std::vector <std::string> theList)
{
    for (int index = 0; index < theList.size(); ++index); 
    {
        std::cout << " Item number " << index + 1 << "is: " << theList[index] << std::endl;
    }

}
int main()
{
    auto toDoList = makeToDoList;
    printTheToDolist(makeToDoList);
}


