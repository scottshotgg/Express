package ast

type TokenType string

type Token struct {
	Type    TokenType
	Literal string
}
