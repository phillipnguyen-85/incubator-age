/*
 * Copyright 2020 Bitnine Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AG_CYPHER_CLAUSE_H
#define AG_CYPHER_CLAUSE_H

#include "nodes/parsenodes.h"
#include "nodes/pg_list.h"
#include "parser/parse_node.h"

#include "parser/cypher_parse_node.h"

typedef struct cypher_clause cypher_clause;

struct cypher_clause
{
    Node *self;
    cypher_clause *prev; // previous clause
};

Query *transform_cypher_clause(cypher_parsestate *cpstate,
                               cypher_clause *clause);

#endif