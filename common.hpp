#pragma once

#include <type_traits>

namespace meta {
using Num = unsigned int;

template <Num N, typename R = Num> struct Factorial {
  constexpr static R value = N * Factorial<N - 1, R>::value;
};

template <> struct Factorial<1> { constexpr static Num value = 1; };

template <Num N, Num K, typename R = Num> struct Binomial_coeff {
  static_assert(N > K, "should be N > K");
  constexpr static R value =
      Factorial<N, R>::value /
      (Factorial<K, R>::value * Factorial<N - K, R>::value);
};

template <Num N> struct Fib {
  constexpr static Num value = Fib<N - 1>::value + Fib<N - 2>::value;
};

template <> struct Fib<1> { constexpr static Num value = 0; };

template <> struct Fib<2> { constexpr static Num value = 1; };

template <> struct Fib<3> { constexpr static Num value = 1; };
} // namespace meta
