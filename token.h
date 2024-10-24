#pragma once

// ====================================================
// Constant Token Types
// ====================================================

typedef char* TokenType;

// Special Tokens
const char* ILLEGAL = "ILLEGAL";
const char* EOF = "EOF";

// Identifiers + literals
const char* IDENT = "IDENT";
const char* INT = "INT";

// Operators
const char* ASSIGN = "=";
const char* PLUS = "+";

// Delimiters
const char* COMMA = ",";
const char* SEMICOLON = ";";

const char* LPAREN = "(";
const char* RPAREN = ")";

const char* LBRACE = "{";
const char* RBRACE = "}";

// ====================================================
// Token Struct
// ====================================================
typedef struct Token{
    TokenType type;
    char* literal;
} Token;
