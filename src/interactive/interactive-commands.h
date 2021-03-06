/*
 * Copyright (c) 2015 Marek Chalupa
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _WLDBG_INTERACTIVE_COMMANDS_H_
#define _WLDBG_INTERACTIVE_COMMANDS_H_

/* defined in breakpoints */
int
cmd_break(struct wldbg_interactive *wldbgi, struct wldbg_message *message, char *buf);

void
cmd_break_help(int oneline);

/* defined in filters.c */
int
cmd_hide(struct wldbg_interactive *wldbgi, struct wldbg_message *message, char *buf);

void
cmd_hide_help(int oneline);

int
cmd_showonly(struct wldbg_interactive *wldbgi, struct wldbg_message *message, char *buf);

void
cmd_showonly_help(int oneline);

void
cmd_filter_help(int oneline);

int
cmd_filter(struct wldbg_interactive *wldbgi,
	   struct wldbg_message *message, char *buf);

/* defined in info.c */
int
cmd_info(struct wldbg_interactive *wldbgi, struct wldbg_message *message, char *buf);

void
cmd_info_help(int oneline);

/* defined in pass.c */
void
cmd_pass_help(int oneline);

int
cmd_pass(struct wldbg_interactive *wldbgi, struct wldbg_message *message, char *buf);

/* defined in edit.c */
int
cmd_edit(struct wldbg_interactive *wldbgi, struct wldbg_message *message, char *buf);

void
cmd_edit_help(int);

/* defined in send.c */
int
cmd_send(struct wldbg_interactive *wldbgi, struct wldbg_message *message, char *buf);

void
cmd_send_help(int oneline);

#endif /* _WLDBG_INTERACTIVE_COMMANDS_H_ */
