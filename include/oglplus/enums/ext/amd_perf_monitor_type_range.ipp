/*
 *  .file oglplus/enums/ext/amd_perf_monitor_type_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/amd_perf_monitor_type.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	PerfMonitorAMDType
> EnumValueRange(PerfMonitorAMDType*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_UNSIGNED_INT
GL_UNSIGNED_INT,
#endif
#if defined GL_FLOAT
GL_FLOAT,
#endif
#if defined GL_UNSIGNED_INT64_AMD
GL_UNSIGNED_INT64_AMD,
#endif
#if defined GL_PERCENTAGE_AMD
GL_PERCENTAGE_AMD,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	PerfMonitorAMDType
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

