/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : Ontology.g
 *     -                            On : 2010-08-01 19:38:29
 *     -                 for the lexer : OntologyLexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer OntologyLexer has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pOntologyLexer, which is returned from a call to OntologyLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in pOntologyLexer are  as follows:
 *
 *  -  void      pOntologyLexer->F_ALPHA(pOntologyLexer)
 *  -  void      pOntologyLexer->F_DIGIT(pOntologyLexer)
 *  -  void      pOntologyLexer->F_HEXDIGIT(pOntologyLexer)
 *  -  void      pOntologyLexer->F_ID(pOntologyLexer)
 *  -  void      pOntologyLexer->T_WS(pOntologyLexer)
 *  -  void      pOntologyLexer->T_BCOMMENT(pOntologyLexer)
 *  -  void      pOntologyLexer->T_LCOMMENT(pOntologyLexer)
 *  -  void      pOntologyLexer->T_KW_NAME(pOntologyLexer)
 *  -  void      pOntologyLexer->T_KW_VERSION(pOntologyLexer)
 *  -  void      pOntologyLexer->T_KW_ATTRIBUTE(pOntologyLexer)
 *  -  void      pOntologyLexer->T_KW_ALIAS(pOntologyLexer)
 *  -  void      pOntologyLexer->T_KW_INCLUDE(pOntologyLexer)
 *  -  void      pOntologyLexer->T_KW_NSBEGIN(pOntologyLexer)
 *  -  void      pOntologyLexer->T_KW_NSEND(pOntologyLexer)
 *  -  void      pOntologyLexer->T_KW_IN(pOntologyLexer)
 *  -  void      pOntologyLexer->T_KW_DEF(pOntologyLexer)
 *  -  void      pOntologyLexer->T_SY_NAME(pOntologyLexer)
 *  -  void      pOntologyLexer->T_SY_ATTRIBUTE(pOntologyLexer)
 *  -  void      pOntologyLexer->T_SY_VARIABLE(pOntologyLexer)
 *  -  void      pOntologyLexer->T_SY_TOP(pOntologyLexer)
 *  -  void      pOntologyLexer->T_SY_BOTTOM(pOntologyLexer)
 *  -  void      pOntologyLexer->T_SY_COND(pOntologyLexer)
 *  -  void      pOntologyLexer->T_VAL_UINT(pOntologyLexer)
 *  -  void      pOntologyLexer->T_VAL_HINT(pOntologyLexer)
 *  -  void      pOntologyLexer->T_VAL_INT(pOntologyLexer)
 *  -  void      pOntologyLexer->T_VAL_FLOAT(pOntologyLexer)
 *  -  void      pOntologyLexer->T_VAL_VERSION(pOntologyLexer)
 *  -  void      pOntologyLexer->T_VAL_STRING(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_DEF(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_INC(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_AND(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_OR(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_UNIV(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_EXIST(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_EQ(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_NEQ(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_G(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_L(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_GEQ(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_LEQ(pOntologyLexer)
 *  -  void      pOntologyLexer->T_OP_NOT(pOntologyLexer)
 *  -  void      pOntologyLexer->T_S_LP(pOntologyLexer)
 *  -  void      pOntologyLexer->T_S_RP(pOntologyLexer)
 *  -  void      pOntologyLexer->T_S_LB(pOntologyLexer)
 *  -  void      pOntologyLexer->T_S_RB(pOntologyLexer)
 *  -  void      pOntologyLexer->T_S_LSB(pOntologyLexer)
 *  -  void      pOntologyLexer->T_S_RSB(pOntologyLexer)
 *  -  void      pOntologyLexer->T_S_SLS(pOntologyLexer)
 *  -  void      pOntologyLexer->T_S_COM(pOntologyLexer)
 *  -  void      pOntologyLexer->T_S_SEMI(pOntologyLexer)
 *  -  void      pOntologyLexer->T_S_COL(pOntologyLexer)
 *  -  void      pOntologyLexer->Tokens(pOntologyLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_OntologyLexer_H
#define _OntologyLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct OntologyLexer_Ctx_struct OntologyLexer, * pOntologyLexer;



#include "dltools.h"


#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for OntologyLexer
 */
struct OntologyLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mF_ALPHA)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mF_DIGIT)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mF_HEXDIGIT)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mF_ID)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_WS)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_BCOMMENT)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_LCOMMENT)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_KW_NAME)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_KW_VERSION)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_KW_ATTRIBUTE)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_KW_ALIAS)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_KW_INCLUDE)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_KW_NSBEGIN)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_KW_NSEND)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_KW_IN)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_KW_DEF)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_SY_NAME)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_SY_ATTRIBUTE)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_SY_VARIABLE)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_SY_TOP)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_SY_BOTTOM)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_SY_COND)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_VAL_UINT)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_VAL_HINT)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_VAL_INT)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_VAL_FLOAT)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_VAL_VERSION)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_VAL_STRING)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_DEF)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_INC)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_AND)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_OR)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_UNIV)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_EXIST)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_EQ)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_NEQ)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_G)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_L)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_GEQ)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_LEQ)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_OP_NOT)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_S_LP)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_S_RP)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_S_LB)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_S_RB)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_S_LSB)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_S_RSB)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_S_SLS)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_S_COM)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_S_SEMI)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mT_S_COL)	(struct OntologyLexer_Ctx_struct * ctx);
     void (*mTokens)	(struct OntologyLexer_Ctx_struct * ctx);    const char * (*getGrammarFileName)();
    void	    (*free)   (struct OntologyLexer_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pOntologyLexer OntologyLexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API pOntologyLexer OntologyLexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define T_OP_LEQ      29
#define T_VAL_INT      34
#define F_ID      10
#define T_OP_GEQ      28
#define T_SY_BOTTOM      19
#define T_KW_NSEND      13
#define T_SY_COND      20
#define T_S_RSB      53
#define T_OP_AND      17
#define T_KW_IN      39
#define EOF      -1
#define T_KW_NSBEGIN      12
#define T_KW_ATTRIBUTE      9
#define T_BCOMMENT      47
#define F_ALPHA      43
#define T_S_LP      40
#define T_SY_NAME      14
#define T_VAL_STRING      5
#define T_VAL_HINT      50
#define T_OP_NOT      32
#define T_WS      46
#define F_DIGIT      44
#define T_S_COL      54
#define T_OP_OR      16
#define T_S_COM      37
#define T_KW_VERSION      7
#define T_S_SLS      22
#define T_OP_INC      51
#define T_S_LB      36
#define T_SY_VARIABLE      33
#define T_LCOMMENT      48
#define T_OP_L      24
#define T_OP_UNIV      21
#define T_OP_G      26
#define F_HEXDIGIT      45
#define T_S_RB      38
#define T_OP_DEF      15
#define T_VAL_UINT      25
#define T_VAL_FLOAT      35
#define T_S_RP      41
#define T_S_LSB      52
#define T_VAL_VERSION      8
#define T_KW_DEF      42
#define T_OP_EXIST      23
#define T_KW_ALIAS      49
#define T_KW_NAME      4
#define T_OP_EQ      30
#define T_SY_ATTRIBUTE      27
#define T_KW_INCLUDE      11
#define T_SY_TOP      18
#define T_S_SEMI      6
#define T_OP_NEQ      31
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for OntologyLexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
