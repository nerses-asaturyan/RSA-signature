#include "trusted_setup.h"

class Verifier : public Trusted_setup
{
public:
    bool verify(std::string m, int s);
};