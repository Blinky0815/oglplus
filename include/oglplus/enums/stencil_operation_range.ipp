/*
 *  .file oglplus/enums/stencil_operation_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/stencil_operation.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	StencilOperation
> EnumValueRange(StencilOperation*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_KEEP
GL_KEEP,
#endif
#if defined GL_ZERO
GL_ZERO,
#endif
#if defined GL_REPLACE
GL_REPLACE,
#endif
#if defined GL_INCR
GL_INCR,
#endif
#if defined GL_DECR
GL_DECR,
#endif
#if defined GL_INVERT
GL_INVERT,
#endif
#if defined GL_INCR_WRAP
GL_INCR_WRAP,
#endif
#if defined GL_DECR_WRAP
GL_DECR_WRAP,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	StencilOperation
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

