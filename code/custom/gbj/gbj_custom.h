#if !defined(GBJ_CUSTOM_H)
#define GBJ_CUSTOM_H

enum GBJ_Mode{
    GBJMode_Insert,
    GBJMode_Normal,
};

global GBJ_Mode gbj_mode = GBJMode_Insert;

function String_Const_u8 gbj_mode_name(void);
function void gbj_print_startup_message(Application_Links *app);

#endif