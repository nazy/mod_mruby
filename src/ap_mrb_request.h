#ifndef AP_MRB_REQUEST_H
#define AP_MRB_REQUEST_H

#include <string.h>
#include "apr_strings.h"
#include "http_request.h"
#include "apr_file_info.h"
#include "mruby.h"
#include "mruby/data.h"
#include "mruby/variable.h"
#include "mruby/class.h"

mrb_value ap_mrb_str_to_value(mrb_state *mrb, apr_pool_t *p, const char *str);
int ap_mrb_push_request(request_rec *r);
request_rec *ap_mrb_get_request();

#endif
