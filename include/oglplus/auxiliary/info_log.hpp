/**
 *  .file oglplus/auxiliary/info_log.hpp
 *  .brief Helper function getting the OpenGL info logs
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2011 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef OGLPLUS_AUX_INFO_LOG_1107121519_HPP
#define OGLPLUS_AUX_INFO_LOG_1107121519_HPP

#include <oglplus/config.hpp>
#include <oglplus/error.hpp>
#include <oglplus/string.hpp>

#include <vector>

namespace oglplus {
namespace aux {

inline String GetInfoLog(
	GLuint object_name,
	void (GLAPIENTRY *GetObjectiv)(GLuint, GLenum, GLint*),
	void (GLAPIENTRY *GetObjectInfoLog)(GLuint, GLsizei, GLsizei*, GLchar*),
	const char* name_GetObjectiv,
	const char* name_GetObjectInfoLog
)
{
	int length = 0;
	GetObjectiv(object_name, GL_INFO_LOG_LENGTH, &length);
	OGLPLUS_CHECK(OGLPLUS_ERROR_INFO_STR(name_GetObjectiv));
	if(length > 0)
	{
		GLsizei real_length = 0;
		std::vector<GLchar> buffer(length);
		GetObjectInfoLog(
			object_name,
			buffer.size(),
			&real_length,
			buffer.data()
		);
		OGLPLUS_CHECK(OGLPLUS_ERROR_INFO_STR(name_GetObjectInfoLog));
		return String(buffer.data(), buffer.size());
	}
	else return String();
}

} // namespace aux
} // namespace oglplus

#endif // include guard
