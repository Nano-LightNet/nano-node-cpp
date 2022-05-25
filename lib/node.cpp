#include "uint128_t.h"

class NanoNode {
  public:
    unsigned char networkID;
    NanoNode(unsigned char network) {
      networkID = network;
    }
};
