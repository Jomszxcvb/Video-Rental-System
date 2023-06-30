#include <iostream>

class Person {
    protected:
        unsigned int mId;
        std::string mName;
        std::string mAddress;
        
        static unsigned int mIdCounter;
    
    public:
        Person();
        ~Person();
        
        void setName(std::string name);
        void setAddress(std::string address);
        
        void getName();
        void getAddress();
        
        bool operator==(const Person& person) const;
};