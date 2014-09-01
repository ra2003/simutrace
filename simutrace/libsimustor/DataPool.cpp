/*
 * Copyright 2014 (C) Karlsruhe Institute of Technology (KIT)
 * Marc Rittinghaus, Thorsten Groeninger
 *
 * Simutrace Store Library (libsimustor) is part of Simutrace.
 *
 * libsimustor is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libsimustor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libsimustor. If not, see <http://www.gnu.org/licenses/>.
 */
#include "SimuBase.h"
#include "SimuStorTypes.h"

#include "DataPool.h"

#include "Stream.h"

namespace SimuTrace
{

    DataPool::DataPool(PoolId id, Stream& stream) :
        KeyValuePool<uint32_t>(stream),
        _id(id)
    {

    }

    DataPool::~DataPool()
    {

    }

    PoolId DataPool::getId() const
    {
        return _id;
    }

}