// -  warning: file is managed by gen_relink_refs_h.py  --  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef DK2_RELINK_REFS_H  // ----------------------------  /* auto */
#define DK2_RELINK_REFS_H  // ----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

#include <dk2_relink.h>

// ---------------  end_of_block  ------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

bool filter_src(void *src);
void create_xrefs(std::map<uint32_t, std::shared_ptr<xrefs_t>> &xrefs_map);

// ---------------  end_of_block  ------------------------  /* auto */
#endif //DK2_RELINK_REFS_H  ------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
