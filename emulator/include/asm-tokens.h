#ifndef HARPTOOL_ASM_TOKENS
#define HARPTOOL_ASM_TOKENS

namespace HarpTools {
  enum AsmTokens {
    ASM_T_DIR_DEF = 1, ASM_T_DIR_PERM,    ASM_T_DIR_BYTE,  ASM_T_DIR_WORD,
    ASM_T_DIR_SPACE,   ASM_T_DIR_STRING,  ASM_T_DIR_ALIGN, ASM_T_DIR_ENTRY,
    ASM_T_DIR_GLOBAL,  ASM_T_DIR_ARG_NUM, ASM_T_DIR_ARG_STRING,
    ASM_T_DIR_ARG_SYM, ASM_T_DIR_ARG_R,   ASM_T_DIR_ARG_W, ASM_T_DIR_ARG_X,
    ASM_T_DIR_END,     ASM_T_LABEL,       ASM_T_PRED,      ASM_T_INST,
    ASM_T_PREG,        ASM_T_REG,         ASM_T_REG_RA,    ASM_T_REG_SP,
    ASM_T_REG_FP,      ASM_T_LIT,         ASM_T_SYM,       ASM_T_PEXP
  };
};

#endif
