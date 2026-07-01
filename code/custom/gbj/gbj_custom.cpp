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