/*
 *  .file oglplus/enums/blit_filter_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/blit_filter.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	BlitFilter
> EnumValueRange(BlitFilter*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_NEAREST
GL_NEAREST,
#endif
#if defined GL_LINEAR
GL_LINEAR,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	BlitFilter
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

