// Copyright 2014 The Souper Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SOUPER_EXTRACTOR_KLEEBUILDER_H
#define SOUPER_EXTRACTOR_KLEEBUILDER_H

#include <memory>
#include <vector>

#include "klee/Expr.h"
#include "klee/util/Ref.h"
#include "souper/Extractor/Candidates.h"

namespace souper {

struct CandidateExpr {
  std::vector<std::unique_ptr<klee::Array>> Arrays;
  klee::ref<klee::Expr> E;
};

CandidateExpr GetCandidateExprForReplacement(const CandidateReplacement &CR);
bool IsTriviallyInvalid(klee::ref<klee::Expr> E);

}

#endif  // SOUPER_EXTRACTOR_KLEEBUILDER_H
