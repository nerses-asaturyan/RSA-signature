#include "verifier.h"
#include <string>

bool Verifier::verify(std::string m, int s)
{
    return simple_hash(m) == static_cast<int>(pow(s, get_public_key())) % get_modulus();
}