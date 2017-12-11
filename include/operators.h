#ifndef ASAP_OPERATORS_H
#define ASAP_OPERATORS_H

#include "datetime.h"
#include "duration.h"

namespace asap {
  inline datetime operator+(const datetime & a, const duration & b) {
    datetime r = a;
    r += b;
    return r;
  }

  inline datetime operator-(const datetime & a, const duration & b) {
    datetime r = a;
    r -= b;
    return r;
  }

  inline duration operator+(const duration & a, const duration & b) {
    duration r = a;
    r += b;
    return r;
  }

  inline duration operator-(const duration & a, const duration & b) {
    duration r = a;
    r -= b;
    return r;
  }

  inline bool operator<(const datetime & a, const datetime & b) {
    return a.timestamp() < b.timestamp();
  }

  inline bool operator>(const datetime & a, const datetime & b) {
    return a.timestamp() > b.timestamp();
  }

  inline bool operator==(const datetime & a, const datetime & b) {
    return a.timestamp() == b.timestamp();
  }
}

#endif //ASAP_OPERATORS_H
