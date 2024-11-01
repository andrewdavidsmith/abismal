/* Copyright (C) 2018-2024 Andrew D. Smith and Guilherme Sena
 *
 * Authors: Andrew D. Smith and Guilherme Sena
 *
 * This file is part of ABISMAL.
 *
 * ABISMAL is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ABISMAL is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */

#ifndef GUESSPROTOCOL_HPP
#define GUESSPROTOCOL_HPP

#include "AbismalIndex.hpp"
#include <cstdint>
#include <string>

auto
guessprotocol(const bool fasta, const std::uint32_t n_reads,
              const double mapping_cutoff_for_quality,
              const double min_fraction_mapping_for_protocol,
              const AbismalIndex &abismal_index, const std::string &adaptor_sequence,
              const std::string &reads_file, const std::string &reads_file2,
              const std::string &outfile) -> int;

int
guessprotocol_main(const int argc, const char **argv);

#endif
