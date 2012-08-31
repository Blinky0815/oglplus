/*
 *  .file oglplus/enums/blend_function_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/blend_function.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	BlendFunction
> EnumValueRange(BlendFunction*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_ZERO
GL_ZERO,
#endif
#if defined GL_ONE
GL_ONE,
#endif
#if defined GL_SRC_COLOR
GL_SRC_COLOR,
#endif
#if defined GL_ONE_MINUS_SRC_COLOR
GL_ONE_MINUS_SRC_COLOR,
#endif
#if defined GL_DST_COLOR
GL_DST_COLOR,
#endif
#if defined GL_ONE_MINUS_DST_COLOR
GL_ONE_MINUS_DST_COLOR,
#endif
#if defined GL_SRC_ALPHA
GL_SRC_ALPHA,
#endif
#if defined GL_ONE_MINUS_SRC_ALPHA
GL_ONE_MINUS_SRC_ALPHA,
#endif
#if defined GL_DST_ALPHA
GL_DST_ALPHA,
#endif
#if defined GL_ONE_MINUS_DST_ALPHA
GL_ONE_MINUS_DST_ALPHA,
#endif
#if defined GL_CONSTANT_COLOR
GL_CONSTANT_COLOR,
#endif
#if defined GL_ONE_MINUS_CONSTANT_COLOR
GL_ONE_MINUS_CONSTANT_COLOR,
#endif
#if defined GL_CONSTANT_ALPHA
GL_CONSTANT_ALPHA,
#endif
#if defined GL_ONE_MINUS_CONSTANT_ALPHA
GL_ONE_MINUS_CONSTANT_ALPHA,
#endif
#if defined GL_SRC_ALPHA_SATURATE
GL_SRC_ALPHA_SATURATE,
#endif
#if defined GL_SRC1_COLOR
GL_SRC1_COLOR,
#endif
#if defined GL_ONE_MINUS_SRC1_COLOR
GL_ONE_MINUS_SRC1_COLOR,
#endif
#if defined GL_SRC1_ALPHA
GL_SRC1_ALPHA,
#endif
#if defined GL_ONE_MINUS_SRC1_ALPHA
GL_ONE_MINUS_SRC1_ALPHA,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	BlendFunction
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

