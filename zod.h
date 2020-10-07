#pragma once
#include <string>
#include <vector>

namespace zodiac
{
class Person
{
        private:
                std::string name;
                std::string lastName;
                int year;
                int month;
                int day;
        public:
                Person (std::string n, std::string l, int y, int m, int d);

                std::string zodiacMonthSign();
                std::string zodiacYearSign( );
};
}
