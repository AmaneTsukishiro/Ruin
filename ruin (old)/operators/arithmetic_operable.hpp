﻿
#ifndef RUIN_OPERATORS_ARITHMETIC_OPERABLE_HPP_INCLUDED
#define RUIN_OPERATORS_ARITHMETIC_OPERABLE_HPP_INCLUDED

#include "ruin/operators/addable.hpp"
#include "ruin/operators/dividable.hpp"
#include "ruin/operators/multipliable.hpp"
#include "ruin/operators/subtractable.hpp"

namespace ruin
{
	template < class T, class U = T >
	class arithmetic_operable
		: private ruin::addable<T, U>
		, private ruin::subtractable<T, U>
		, private ruin::multipliable<T, U>
		, private ruin::dividable<T, U>
	{ };
}

#endif // RUIN_OPERATORS_ARITHMETIC_OPERABLE_HPP_INCLUDED
