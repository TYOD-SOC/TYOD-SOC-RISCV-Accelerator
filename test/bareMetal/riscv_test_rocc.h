// Copyright 2018 IBM
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

#ifndef ROCC_SOFTWARE_SRC_RISCV_TEST_ROCC_H_
#define ROCC_SOFTWARE_SRC_RISCV_TEST_ROCC_H_

#define MSTATUS_XS 0x00018000
#define RVTEST_XS_ENABLE                        \
  li a0, MSTATUS_XS & (MSTATUS_XS >> 1);        \
  csrs mstatus, a0;

#define RVTEST_WITH_ROCC                        \
  .macro init;                                  \
  RVTEST_XS_ENABLE                              \
  .endm

#endif  // ROCC_SOFTWARE_SRC_RISCV_TEST_ROCC_H_
