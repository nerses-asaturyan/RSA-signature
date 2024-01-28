#include "trusted_setup.h"
#include <string>


const int Trusted_setup::get_modulus()
{
    return n;
};

void Trusted_setup::create_public_key()
{
    int euler_totient_n = euler_totient(n);

    for (int i = 2;; i++)
    {
        if (gcd(euler_totient_n, i) == 1)
        {
            public_key = i;
            return;
        }
    }
    std::cout << "Public key generation failed " << public_key << std::endl;
}

const int Trusted_setup::get_public_key()
{
    return public_key;
}

void Trusted_setup::create_private_key()
{
    int euler_totient_n = euler_totient(n);
    for (int i = 1;; i++)
    {
        if (((i * public_key) % euler_totient_n) == 1)
        {
            private_key = i;
            return;
        }
    }
    std::cout << "Private key generation failed " << private_key << std::endl;
};

int Trusted_setup::simple_hash(std::string s)
{
    return std::hash<std::string>{}(s) % 2147483647;
}