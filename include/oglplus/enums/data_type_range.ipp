/*
 *  .file oglplus/enums/data_type_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/data_type.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	DataType
> EnumValueRange(DataType*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_BYTE
GL_BYTE,
#endif
#if defined GL_SHORT
GL_SHORT,
#endif
#if defined GL_INT
GL_INT,
#endif
#if defined GL_FIXED
GL_FIXED,
#endif
#if defined GL_FLOAT
GL_FLOAT,
#endif
#if defined GL_HALF_FLOAT
GL_HALF_FLOAT,
#endif
#if defined GL_DOUBLE
GL_DOUBLE,
#endif
#if defined GL_UNSIGNED_BYTE
GL_UNSIGNED_BYTE,
#endif
#if defined GL_UNSIGNED_SHORT
GL_UNSIGNED_SHORT,
#endif
#if defined GL_UNSIGNED_INT
GL_UNSIGNED_INT,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	DataType
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

