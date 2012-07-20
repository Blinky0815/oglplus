/*
 *  .file oglplus/enums/framebuffer_target_ese.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/framebuffer_target.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if defined GL_DRAW_FRAMEBUFFER
# if defined Draw
#  pragma push_macro("Draw")
#  undef Draw
   OGLPLUS_ENUM_CLASS_VALUE(Draw, GL_DRAW_FRAMEBUFFER)
#  pragma pop_macro("Draw")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Draw, GL_DRAW_FRAMEBUFFER)
# endif
#endif
#if defined GL_READ_FRAMEBUFFER
# if defined Read
#  pragma push_macro("Read")
#  undef Read
   OGLPLUS_ENUM_CLASS_VALUE(Read, GL_READ_FRAMEBUFFER)
#  pragma pop_macro("Read")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Read, GL_READ_FRAMEBUFFER)
# endif
#endif
