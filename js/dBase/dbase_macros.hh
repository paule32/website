#pragma once
// -------------------------------
// macros placeholders, to reduce
// source code size ...
// -------------------------------
# define YYPARSE       \
    yyerror = false;   \
    token = yyparse();

# define YYERROR \
    printf("xxyxxyxsdsdsdsdsdsdsds-->  %d\n",token);     \
    if (token == E_TOKEN::E_EOF) {   \
        printf("EEEEEEOOOOOFFFF\n"); \
        goto Label_end;              \
    }

# define LEX_ELSE } else {

# define LEX_START(key)          \
    for (;;) {                   \
    token = yyparse();           \
    if (token == E_TOKEN::key) { \
    dbDebug() << str_token;

# define LEX_END                            \
    if (yyin.tellg() < source_length) {     \
        if (token == E_TOKEN::E_EOF)  {     \
            goto Label_end;           } }   \
        if (token == E_TOKEN::E_EOF)  {     \
            goto Label_end;           }     \
        }

# define LEX_NEW(key) } if (token != E_TOKEN::key) { throw dBaseSyntaxError(); }

# define LEX_GOTO(no)  \
    yyerror = false;   \
    goto label_##no;

# define YY_BEGIN      for (;;) {
# define YY_END        break;   }

# define LEX_LABEL(no) label_##no: \
    if (yyerror == true) \
    goto Label_end;

