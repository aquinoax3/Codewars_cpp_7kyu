// You are given a class Person with a single field named age (>=0). We would like to be able to compare different persons according to their age.

// Your task is to implement the following comparison operators:

// '=='
// '!='
// '<='
// '>='
// '<'
// '>'
// Try to re-use implementaion as much as possible, for example: '<' operator can be implemented using '<=' and '!='.

// Good luck!


class Person
{
  public:
    Person(int age) : m_age(age) {}
  
    bool operator==(const Person& other) const
    {
      return this->m_age == other.m_age;
    }
    
    bool operator!=(const Person& other) const
    {
      return this->m_age != other.m_age;
    }
    
    bool operator<=(const Person& other) const
    {
      return this->m_age <= other.m_age;
    }
    
    bool operator>=(const Person& other) const
    {
      return this->m_age >= other.m_age;
    }
    
    bool operator<(const Person& other) const
    {
      return this->m_age < other.m_age;
    }
    
    bool operator>(const Person& other) const
    {
      return this->m_age > other.m_age;
    }
    
  private:
    const int m_age;
};
