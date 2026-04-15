#pragma once

#include <bits/stdc++.h>

class User {
 public:
  std::string nickname;
  User(std::string _nickname, bool _premium, std::string _email,
       std::string _password);
  bool is_premium();
  std::string get_email();
  void set_email(std::string _email);
  std::string get_password();
  void set_password(std::string _password);

 private:
  bool premium;
  std::string email;
  std::string password;
};