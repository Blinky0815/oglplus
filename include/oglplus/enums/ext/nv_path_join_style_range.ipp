/*
 *  .file oglplus/enums/ext/nv_path_join_style_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_join_style.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	PathNVJoinStyle
> EnumValueRange(PathNVJoinStyle*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_NONE
GL_NONE,
#endif
#if defined GL_ROUND_NV
GL_ROUND_NV,
#endif
#if defined GL_BEVEL_NV
GL_BEVEL_NV,
#endif
#if defined GL_MITER_REVERT_NV
GL_MITER_REVERT_NV,
#endif
#if defined GL_MITER_TRUNCATE_NV
GL_MITER_TRUNCATE_NV,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	PathNVJoinStyle
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

