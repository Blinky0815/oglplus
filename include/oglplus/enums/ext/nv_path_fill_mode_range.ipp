/*
 *  .file oglplus/enums/ext/nv_path_fill_mode_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_fill_mode.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	PathNVFillMode
> EnumValueRange(PathNVFillMode*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_INVERT
GL_INVERT,
#endif
#if defined GL_COUNT_UP_NV
GL_COUNT_UP_NV,
#endif
#if defined GL_COUNT_DOWN_NV
GL_COUNT_DOWN_NV,
#endif
#if defined GL_PATH_FILL_MODE_NV
GL_PATH_FILL_MODE_NV,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	PathNVFillMode
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

