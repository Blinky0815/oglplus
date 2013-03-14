/*
 *  .file advanced/spectra/document_frame.hpp
 *  .brief Declares the document GL frame.
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2012-2013 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef OGLPLUS_EXAMPLE_SPECTRA_DOCUMENT_FRAME_HPP
#define OGLPLUS_EXAMPLE_SPECTRA_DOCUMENT_FRAME_HPP

#include <oglplus/gl.hpp>

#include "spectra_app.hpp"
#include "document_canvas.hpp"
#include "document_view.hpp"

#include <wx/wx.h>

#include <memory>
#include <functional>

class SpectraMainFrame;
class SpectraDocument;
class SpectraRenderer;

class SpectraDocumentFrame
 : public wxFrame
{
private:
	SpectraApp& parent_app;
	SpectraMainFrame* parent_frame;

	wxMenuBar* main_menu;

	wxPanel* main_panel;

	wxStatusBar* status_bar;
	void SetStatus(const wxString& status_text);

	SpectraDocumentCanvas* gl_canvas;

	std::shared_ptr<SpectraDocument> document;
	std::shared_ptr<SpectraRenderer> renderer;

	SpectraDocumentView document_view;

	void InitMainMenu(void);
	void InitComponents(void);
	void ConnectEventHandlers(void);

	void DoClose(wxCommandEvent&);
	void OnClose(wxCloseEvent&);

	void HandleResize(void);
	void OnResize(wxSizeEvent& event);

	wxPoint old_mouse_position;
	GLint ClampMouseCoord(GLint c, GLint m);
	void HandleMouseMotion(const wxMouseEvent& event);
	void OnMouseMotionEvent(wxMouseEvent& event);

	int idle_call_count;
	void Update(void);
	void OnIdle(wxIdleEvent& event);
public:
	SpectraDocumentFrame(
		SpectraApp& app,
		SpectraMainFrame* parent,
		wxGLContext* parent_ctxt,
		const std::function<
			std::shared_ptr<SpectraDocument> (
				SpectraApp&,
				wxGLCanvas*,
				wxGLContext*
			)
		>& get_document,
		const std::function<
			std::shared_ptr<SpectraRenderer> (
				SpectraApp&,
				const std::shared_ptr<SpectraSharedObjects>&,
				const std::shared_ptr<SpectraDocument>&,
				wxGLCanvas*
			)
		>& get_renderer
	);

	~SpectraDocumentFrame(void);
};

#endif // include guard