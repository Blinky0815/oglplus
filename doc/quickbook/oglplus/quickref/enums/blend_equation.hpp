//  File doc/quickbook/oglplus/quickref/enums/blend_equation.hpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/blend_equation.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//[oglplus_enums_blend_equation
namespace oglplus {

enum class BlendEquation : GLenum
{
	Add             = GL_FUNC_ADD,
	Subtract        = GL_FUNC_SUBTRACT,
	ReverseSubtract = GL_FUNC_REVERSE_SUBTRACT,
	Min             = GL_MIN,
	Max             = GL_MAX
};

#if !__OGLPLUS_NO_ENUM_VALUE_RANGES
template <>
__Range<BlendEquation> __EnumValueRange<BlendEquation>(void);
#endif

#if !__OGLPLUS_NO_ENUM_VALUE_NAMES
__StrCRef __EnumValueName(BlendEquation);
#endif

} // namespace oglplus
//]