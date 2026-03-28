/* cxxcam - C++ CAD/CAM driver library.
 * Copyright (C) 2013  Nicholas Gill
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * block.h
 *
 *  Created on: 2013-08-23
 *      Author: nicholas
 */

#ifndef BLOCK_H_
#define BLOCK_H_
#include <cstddef>
#include <optional>

struct setup_t;

struct block_t
{
	block_t();
	
	void enhance(const setup_t& settings);
	void check_g_codes(const setup_t& settings) const;
	void check_items(const setup_t& settings) const;
	void check_m_codes() const;
	void check_other_codes() const;
	
    std::optional<double>   x;
    std::optional<double>   y;
    std::optional<double>   z;
    std::optional<double>   a;
    std::optional<double>   b;
    std::optional<double>   c;
    
    char     comment[256];
    std::optional<double>   d;
    std::optional<double>   f;
    int      g_modes[15];
    std::optional<unsigned int>      h;
    
    std::optional<double>   i;
    std::optional<double>   j;
    std::optional<double>   k;
    
    std::optional<unsigned int>      l;
    std::optional<unsigned int>      line_number;
    int      motion_to_be;
    unsigned int      m_count;
    int      m_modes[10];
    std::optional<double>   p;
    std::optional<double>   q;
    std::optional<double>   r;
    std::optional<double>   s;
    std::optional<unsigned int>      t;
    
    
    std::size_t parameter_occurrence;                     // parameter buffer index
    int parameter_numbers[50];                    // parameter number buffer
    double parameter_values[50];                  // parameter value buffer
};

#endif /* BLOCK_H_ */
