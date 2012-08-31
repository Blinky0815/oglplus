/*
 *  .file oglplus/enums/texture_compare_mode_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/texture_compare_mode.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	TextureCompareMode
> EnumValueRange(TextureCompareMode*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_NONE
GL_NONE,
#endif
#if defined GL_COMPARE_REF_TO_TEXTURE
GL_COMPARE_REF_TO_TEXTURE,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	TextureCompareMode
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

