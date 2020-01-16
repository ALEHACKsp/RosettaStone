// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

// It is based on peter1591's hearthstone-ai repository.
// References: https://github.com/peter1591/hearthstone-ai

#ifndef ROSETTASTONE_TORCH_NEURAL_NET_NEURAL_NETWORK_OUTPUT_IMPL_HPP
#define ROSETTASTONE_TORCH_NEURAL_NET_NEURAL_NETWORK_OUTPUT_IMPL_HPP

#include <Rosetta/Commons/Macros.hpp>

#define CNN_SINGLE_THREAD

#ifdef ROSETTASTONE_WINDOWS
#define CNN_USE_SSE
#include <intrin.h>
#endif

#include <tiny_dnn/tiny_dnn.h>

#include <vector>

namespace RosettaTorch::NeuralNet
{
//!
//! \brief NeuralNetworkOutputImpl class.
//!
//! This class is implementation code of NeuralNetworkOutput class.
//!
class NeuralNetworkOutputImpl
{
 public:
    //! Adds data to the vector.
    //! \param label The value to add to the vector.
    void AddData(int label);

    //! Clears data of the vector.
    void Clear();

    //! Returns data in the vector.
    //! \return Data in the vector.
    const std::vector<tiny_dnn::vec_t>& GetData() const;

 private:
    std::vector<tiny_dnn::vec_t> m_output;
};
}  // namespace RosettaTorch::NeuralNet

#endif  // ROSETTASTONE_TORCH_NEURAL_NET_NEURAL_NETWORK_OUTPUT_IMPL_HPP