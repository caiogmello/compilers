typedef enum {
    EXPR_ADD,
    EXPR_SUBTRACT,
    EXPR_MULTIPLY,
    EXPR_VALUE
} expr_t;

struct expr {
    expr_t kind;
    struct expr *left;
    struct expr *right;
    int value;
};