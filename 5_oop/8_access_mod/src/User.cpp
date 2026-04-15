#include "User.hpp"

#include <bits/stdc++.h>

User::User(std::string _nickname, bool _premium, std::string _email,
           std::string _password) {
  nickname = _nickname;
  premium = _premium;
  email = _email;
  password = _password;
}

bool User::is_premium() { return premium; }

std::string User::get_email() { return email; }

void User::set_email(std::string _email) { email = _email; }

std::string User::get_password() { return password; }

void User::set_password(std::string _password) { password = _password; }