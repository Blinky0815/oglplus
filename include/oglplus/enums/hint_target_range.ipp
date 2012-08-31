/*
 *  .file oglplus/enums/hint_target_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/hint_target.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	HintTarget
> EnumValueRange(HintTarget*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_LINE_SMOOTH_HINT
GL_LINE_SMOOTH_HINT,
#endif
#if defined GL_POLYGON_SMOOTH_HINT
GL_POLYGON_SMOOTH_HINT,
#endif
#if defined GL_TEXTURE_COMPRESSION_HINT
GL_TEXTURE_COMPRESSION_HINT,
#endif
#if defined GL_FRAGMENT_SHADER_DERIVATIVE_HINT
GL_FRAGMENT_SHADER_DERIVATIVE_HINT,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	HintTarget
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

