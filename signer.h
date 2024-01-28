#include <cmath>
#include "trusted_setup.h"


class Signer : protected Trusted_setup
{
public:
    int sign(std::string m);
};