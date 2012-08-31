/*
 *  .file oglplus/enums/access_specifier_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/access_specifier.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	AccessSpecifier
> EnumValueRange(AccessSpecifier*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_READ_ONLY
GL_READ_ONLY,
#endif
#if defined GL_WRITE_ONLY
GL_WRITE_ONLY,
#endif
#if defined GL_READ_WRITE
GL_READ_WRITE,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	AccessSpecifier
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

