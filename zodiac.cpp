#include <iostream>
#include <vector>
#include <string>


class People
{
        private:
                std::string name;
                std::string lastName;
                int year;
                int month;
                int day;
        public:
                People( std::string n ,std::string l, int y , int m , int d):
                        name(n) , lastName(l) , year(y) , month(m) , day(d) {}

int getYear()
{
        return year;
}

int getMonth()
{
        return month;
}

int getDay()
{
        return day;
}

 std::string zodiacMonthSign(int day, int month)
{
    std::string astroSign="";

    if (month == 12){

        if (day < 22)
        astroSign = "Sagittarius";
        else
        astroSign ="capricorn";
    }

    else if (month == 1){
        if (day < 20)
        astroSign = "Capricorn";
        else
        astroSign = "aquarius";
    }

    else if (month == 2){
        if (day < 19)
        astroSign = "Aquarius";
        else
        astroSign = "pisces";
    }

    else if(month == 3){
        if (day < 21)
        astroSign = "Pisces";
        else
        astroSign = "aries";
    }
    else if (month == 4){
        if (day < 20)
        astroSign = "Aries";
        else
        astroSign = "taurus";
    }
else if (month == 5){
        if (day < 21)
        astroSign = "Taurus";
        else
        astroSign = "gemini";
    }

    else if( month == 6){
        if (day < 21)
        astroSign = "Gemini";
        else
        astroSign = "cancer";
    }

    else if (month == 7){
        if (day < 23)
        astroSign = "Cancer";
        else
        astroSign = "leo";
    }

    else if( month == 8){
        if (day < 23)
        astroSign = "Leo";
        else
        astroSign = "virgo";
    }

    else if (month == 9){
        if (day < 23)
        astroSign = "Virgo";
        else
        astroSign = "libra";
    }
else if (month == 10){
        if (day < 23)
        astroSign = "Libra";
        else
        astroSign = "scorpio";
    }

    else if (month == 11){
        if (day < 22)
        astroSign = "scorpio";
        else
        astroSign = "sagittarius";
    }

    return astroSign;
}

 std::string zodiacYearSign(int year){

        int zodiac1 = year-((year/12)*12);

if(zodiac1 == 0)
return "Monkey";

else if(zodiac1 == 1)
return "Rooster";

else if(zodiac1 == 2)
return "Dog";

else if(zodiac1 == 3)
return "Pig";

else if(zodiac1 == 4)
return "Rat";

else if(zodiac1 == 5)
return "Ox";

else if(zodiac1 == 6)
return "Tigger";

else if(zodiac1 == 7)
return "Rabbit";

else if(zodiac1 == 8)
return "Dragon";

else if(zodiac1 == 9)
return "Snake";

else if(zodiac1 == 10)
return "Horse";

else if(zodiac1 == 11)
return "Goat";

        return "Not found!";
        }
};

int main()
{
        std::vector<People> people;

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
                People input (name , lastName, year, month , day);
                        people.push_back (input);

        }


        for(int i = 0; i < N ; ++ i)
        {
                std::cout << people[i].zodiacYearSign(people[i].getYear()) <<" ";

                std::cout << people[i].zodiacMonthSign(people[i].getDay() , people[i].getMonth() ) << "\n";
        }
}
