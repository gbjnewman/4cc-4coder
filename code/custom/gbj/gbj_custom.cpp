function String_Const_u8
gbj_mode_name(void){
    String_Const_u8 result = {};
    
    switch (gbj_mode){
        case GBJMode_Insert:
        {
            result = string_u8_litexpr("INSERT");
        }break;
        
        case GBJMode_Normal:
        {
            result = string_u8_litexpr("NORMAL");
        }break;
    }
    
    return(result);
}

function void
gbj_print_startup_message(Application_Links *app){
    print_message(app, string_u8_litexpr("GBJ custom layer loaded.\n"));
    print_message(app, string_u8_litexpr("GBJ mode: INSERT\n"));
}

CUSTOM_COMMAND_SIG(gbj_enter_normal_mode)
CUSTOM_DOC("Enter GBJ normal mode.")
{
    gbj_mode = GBJMode_Normal;
    print_message(app, string_u8_litexpr("GBJ mode: NORMAL\n"));
}

CUSTOM_COMMAND_SIG(gbj_enter_insert_mode)
CUSTOM_DOC("Enter GBJ insert mode.")
{
    gbj_mode = GBJMode_Insert;
    print_message(app, string_u8_litexpr("GBJ mode: INSERT\n"));
}