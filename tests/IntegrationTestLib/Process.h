/*
 * Copyright (c) 2018, The bitcoin2network developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of bitcoin2network.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <string>
#include <vector>

namespace Tests {

  class Process {
  public:

    void startChild(const std::string& executablePath, const std::vector<std::string>& args = {});
    void wait();

  private:

    size_t m_pid = 0;

  };
}
