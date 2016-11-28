#ifndef TTM_FENCE_USER_H
#define TTM_FENCE_USER_H
#ifndef _KERNEL
#include <stdint.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define TTM_FENCE_MAJOR 0
#define TTM_FENCE_MINOR 1
#define TTM_FENCE_PL 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTM_FENCE_DATE "080819"
struct ttm_fence_signaled_req {
 uint32_t handle;
 uint32_t fence_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int32_t flush;
 uint32_t pad64;
};
struct ttm_fence_rep {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t signaled_types;
 uint32_t fence_error;
};
union ttm_fence_signaled_arg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ttm_fence_signaled_req req;
 struct ttm_fence_rep rep;
};
#define TTM_FENCE_FINISH_MODE_LAZY (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTM_FENCE_FINISH_MODE_NO_BLOCK (1 << 1)
struct ttm_fence_finish_req {
 uint32_t handle;
 uint32_t fence_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t mode;
 uint32_t pad64;
};
union ttm_fence_finish_arg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ttm_fence_finish_req req;
 struct ttm_fence_rep rep;
};
struct ttm_fence_unref_arg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t handle;
 uint32_t pad64;
};
#define TTM_FENCE_SIGNALED 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTM_FENCE_FINISH 0x02
#define TTM_FENCE_UNREF 0x03
#endif
