typedef enum {
    TOKEN_EOF,
    TOKEN_ERROR,

    TOKEN_INDENTIFIE,
    TOKEN_INT,
    TOKEN_STRING,

    TOKEN_LET,  // let
    TOKEN_CONST,  // const
    TOKEN_FN,  // fn
    TOKEN_RETURN,  // return
    TOKEN_IF,  // if
    TOKEN_ELSE,  // else
    TOKEN_WHILE,  // while
    TOKEN_FOR,  // for
    TOKEN_MATCH,  // match
    TOKEN_CONTINUE,  // continue
    TOKEN_BIND,  // bind
    TOKEN_TRAIT,  // trait
    TOKEN_IS,  // is
    TOKEN_TPYEOF,  // typeof
    TOKEN_SELF,  // self
    TOKEN_BAN,  // ban

    TOKEN_PLUS,  // +
    TOKEN_MINUS,  // -
    TOKEN_STAR,  // *
    TOEKN_SLASH, // \/
    TOKEN_EQUAL, // =
    TOEKN_EQUAL_EQUAL, // ==
    TOKEN_BANG,  // !
    TOKEN_BANG_EQUAL,  // !=
    TOKEN_LESS,  // <
    TOKEN_LESS_EQUAL,  // <=
    TOKEN_GREATER,  // >
    TOEKN_GREATER_EQUAL,  // >=

    TOKEN_LEFT_PAREN,  // [
    TOKEN_RIGHT_PAREN,  // ]
    TOKEN_LEFT_BRACE,  // {
    TOKEN_RIGHT_BRACE,  // }
    TOKEN_COMMA,  // ,
    TOKEN_SEMICOLON,  // ;
    TOKEN_COLON,  // :
    TOKEN_LEFT_ALLOW,  // <-
    TOEKN_RIGHT_ALLOW  // ->
} TokenTyoe;
