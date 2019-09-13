#ifndef USER_HPP

#define USER_HPP



// User.cpp
//
// placeholder for User class
//

#include <string>

typedef enum _USER_STATUS
{
    USER_REVIEW,
    USER_CRITIC,
    USER_ADMIN,
} USER_STATUS;



class User
{
public:
    int         getUserId();
    void        setUserId(int id);
    string      getUserName();
    void        setUserName(string name);
    USER_STATUS getUserStatus();
    void        upgradeUserStatus();    // setter

private:
    int         m_id;
    string      m_name;
    USER_STATUS m_status;
}
