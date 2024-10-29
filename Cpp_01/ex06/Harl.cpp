#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl 
    <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" 
    << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]"
    << std::endl
    << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]"
    << std::endl
    << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
    << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl
    << "This is unacceptable, I want to speak to the manager now."
              << std::endl;
}

int get_level(std::string level)
{
    std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++)
    {
        if(level == str[i])
          return i;
    }
 return -1;
}

void Harl::complain(std::string level)
{
    void(Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   
    int i = get_level(level);
   switch(i)
   {
    case 0:
    for(int j = i; j < 4; j++)
        (this->*ptr[j])();
    break;
    case 1:
     for(int j = i; j < 4; j++)
        (this->*ptr[j])();
    break;
    case 2:
    for(int j = i; j < 4; j++)
        (this->*ptr[j])();
    break;
    case 3:
    (this->*ptr[i])();
    break;
   default:
     std::cout << "I am not sure how tired I am today..." << std::endl;
   }

}
