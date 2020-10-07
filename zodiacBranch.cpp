#include <iostream>
#include "zod.h"

using namespace zodiac;

int main()
{
        std::vector<Person> person;
        int N = 0;
        std::cin >> N;
        for(int i = 0 ; i < N ; ++i)
        {
                std::string name;
                std:: string lastName;
                int year = 0;
                int month = 0;
                int day = 0;

                std::cin>> name >> lastName >> year >> month >> day;
                Person input (name, lastName, year, month, day);
                        person.push_back (input);
        }

        for(int i = 0 ; i < N ; ++i)
        {
                std::cout << person[i].zodiacYearSign() <<" ";
                std::cout << person[i].zodiacMonthSign() <<"\n";
        }
}
