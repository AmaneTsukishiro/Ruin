﻿//
// Copyright (C) 2011-2016 Yuishi Yumeiji.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef RUIN_ITERATOR_TRAITS_HPP_INCLUDED
#define RUIN_ITERATOR_TRAITS_HPP_INCLUDED

#include <cstddef>
#include <iterator>

namespace ruin
{
	template<class Iter>
	struct iterator_traits
	{
		typedef typename Iter::value_type value_type;
		typedef typename Iter::reference reference;
		typedef typename Iter::pointer pointer;
		typedef typename Iter::difference_type difference_type;
		typedef typename Iter::iterator_category iterator_category;
	};
	template<class T>
	struct iterator_traits<T*>
	{
		typedef T value_type;
		typedef T& reference;
		typedef T* pointer;
		typedef std::ptrdiff_t difference_type;
		typedef std::random_access_iterator_tag iterator_category;
	};
}

#endif // RUIN_ITERATOR_TRAITS_HPP_INCLUDED
