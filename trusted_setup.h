#pragma once
#include <iostream>
#include <functional>
#include "helper_functions.h"

class Trusted_setup
{
public:
    std::string message;
    int simple_hash(std::string s);
    void create_public_key();
    void create_private_key();
    int get_public_key() const;
    int get_modulus() const;

protected:
    int public_key = 0;
    int private_key = 0;

private:
    int p = 97;
    int q = 431;
    int n = p * q;
};
